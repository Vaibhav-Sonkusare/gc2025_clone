/////////////////////////////////////////////////////////////////////
////                                                             ////
////  Enhanced VGA/LCD Core — AXI4 Top Level                    ////
////                                                             ////
////  Replaces: vga_enh_top.v (Wishbone top-level)              ////
////                                                             ////
////  Interfaces:                                                ////
////    - AXI4-Lite Slave  : CPU register/CLUT access           ////
////    - AXI4 Full Master : Framebuffer / cursor DMA reads      ////
////                                                             ////
////  All internal pixel generation, CLUT, line FIFO, and       ////
////  timing generator sub-modules are unchanged from the        ////
////  original vga_enh_top.v.                                   ////
////                                                             ////
/////////////////////////////////////////////////////////////////////

//synopsys translate_off
`include "timescale.v"
//synopsys translate_on
`include "vga_defines.v"

module vga_axi_top #(
    parameter AXI_ADDR_WIDTH   = 32,
    parameter DATA_WIDTH       = 32,
    parameter LINE_FIFO_AWIDTH = 7,
    parameter INTERNAL_FB = 1,
    parameter ARST_LVL         = 1'b0   // active level for rst_i pin
)(
    // ---- System ------------------------------------------------
    input  wire         axi_aclk,       // AXI/system clock
    input  wire         axi_aresetn,    // active-low async reset
    input  wire         clk_p_i,        // VGA pixel clock input

    // ---- Interrupt output --------------------------------------
    output wire         irq_o,

    // ---- AXI4-Lite Slave (CPU control & CLUT) ------------------
    input  wire [AXI_ADDR_WIDTH-1:0] s_axi_awaddr,
    input  wire                      s_axi_awvalid,
    output wire                      s_axi_awready,

    input  wire [DATA_WIDTH-1:0]     s_axi_wdata,
    input  wire [(DATA_WIDTH/8)-1:0] s_axi_wstrb,
    input  wire                      s_axi_wvalid,
    output wire                      s_axi_wready,

    output wire [1:0]                s_axi_bresp,
    output wire                      s_axi_bvalid,
    input  wire                      s_axi_bready,

    input  wire [AXI_ADDR_WIDTH-1:0] s_axi_araddr,
    input  wire                      s_axi_arvalid,
    output wire                      s_axi_arready,

    output wire [DATA_WIDTH-1:0]     s_axi_rdata,
    output wire [1:0]                s_axi_rresp,
    output wire                      s_axi_rvalid,
    input  wire                      s_axi_rready,

    // ---- AXI4 Full Master (framebuffer DMA) --------------------
    output wire [31:0]  m_axi_araddr,
    output wire [ 7:0]  m_axi_arlen,
    output wire [ 2:0]  m_axi_arsize,
    output wire [ 1:0]  m_axi_arburst,
    output wire [ 1:0]  m_axi_arlock,
    output wire [ 3:0]  m_axi_arcache,
    output wire [ 2:0]  m_axi_arprot,
    output wire         m_axi_arvalid,
    input  wire         m_axi_arready,

    input  wire [31:0]  m_axi_rdata,
    input  wire [ 1:0]  m_axi_rresp,
    input  wire         m_axi_rlast,
    input  wire         m_axi_rvalid,
    output wire         m_axi_rready,

    // ---- VGA output signals ------------------------------------
    output wire         clk_p_o,
    output wire         hsync_pad_o,
    output wire         vsync_pad_o,
    output wire         csync_pad_o,
    output wire         blank_pad_o,
    output wire [ 7:0]  r_pad_o,
    output wire [ 7:0]  g_pad_o,
    output wire [ 7:0]  b_pad_o

    `ifdef VGA_12BIT_DVI
    ,
    output wire         dvi_pclk_p_o,
    output wire         dvi_pclk_m_o,
    output wire         dvi_hsync_o,
    output wire         dvi_vsync_o,
    output wire         dvi_de_o,
    output wire [11:0]  dvi_d_o
    `endif
);

// ================================================================
// Internal wires — slave → data-path
// ================================================================
wire         ctrl_bl, ctrl_csl, ctrl_vsl, ctrl_hsl;
wire         ctrl_pc, ctrl_cbsw, ctrl_vbsw, ctrl_ven;
wire [ 1:0]  ctrl_cd, ctrl_vbl, ctrl_dvi_odf;
wire [ 7:0]  Thsync, Thgdel, Tvsync, Tvgdel;
wire [15:0]  Thgate, Thlen, Tvgate, Tvlen;
wire [31:2]  VBARa, VBARb;

wire [ 8:0]  cursor_adr;
wire [31:0]  cursor0_xy, cursor1_xy;
wire         cursor0_en, cursor1_en;
wire [31:11] cursor0_ba, cursor1_ba;
wire         cursor0_ld, cursor1_ld;
wire         cursor0_res, cursor1_res;
wire [15:0]  cc0_dat_o, cc1_dat_o;
wire [ 3:0]  cc0_adr_i, cc1_adr_i;

wire         stat_avmp, stat_acmp;
wire         vmem_swint, clut_swint;
wire         hint, vint, sint;
wire         wbm_busy;

// CLUT access wires between slave and csm_pb
wire         ext_clut_req, ext_clut_ack;
wire [23:0]  ext_clut_q;

// Pixel generator ↔ wb-master FIFOs
wire         fb_data_fifo_rreq, fb_data_fifo_empty;
wire [31:0]  fb_data_fifo_q;
wire         ImDoneFifoQ;

// Line FIFO
wire         line_fifo_wreq, line_fifo_rreq, line_fifo_empty_rd;
wire [23:0]  line_fifo_d, line_fifo_q;
wire         line_fifo_full_wr;

// CLUT processor interface (pixel generator side)
wire         cp_clut_req, cp_clut_ack;
wire [ 8:0]  cp_clut_adr;
wire [23:0]  cp_clut_q;

// luint (line FIFO underrun)
reg  luint;
reg  luint_pclk, sluint;

// ================================================================
// AXI4-Lite Slave instantiation
// ================================================================
vga_axi_slave #(
    .AXI_ADDR_WIDTH (AXI_ADDR_WIDTH),
    .DATA_WIDTH     (DATA_WIDTH)
) u_axi_slave (
    .s_axi_aclk     (axi_aclk),
    .s_axi_aresetn  (axi_aresetn),

    .s_axi_awaddr   (s_axi_awaddr),
    .s_axi_awvalid  (s_axi_awvalid),
    .s_axi_awready  (s_axi_awready),

    .s_axi_wdata    (s_axi_wdata),
    .s_axi_wstrb    (s_axi_wstrb),
    .s_axi_wvalid   (s_axi_wvalid),
    .s_axi_wready   (s_axi_wready),

    .s_axi_bresp    (s_axi_bresp),
    .s_axi_bvalid   (s_axi_bvalid),
    .s_axi_bready   (s_axi_bready),

    .s_axi_araddr   (s_axi_araddr),
    .s_axi_arvalid  (s_axi_arvalid),
    .s_axi_arready  (s_axi_arready),

    .s_axi_rdata    (s_axi_rdata),
    .s_axi_rresp    (s_axi_rresp),
    .s_axi_rvalid   (s_axi_rvalid),
    .s_axi_rready   (s_axi_rready),

    .irq_o          (irq_o),

    // Internal connections
    .wbm_busy       (wbm_busy),
    .dvi_odf        (ctrl_dvi_odf),
    .bl             (ctrl_bl),
    .csl            (ctrl_csl),
    .vsl            (ctrl_vsl),
    .hsl            (ctrl_hsl),
    .pc             (ctrl_pc),
    .cd             (ctrl_cd),
    .vbl            (ctrl_vbl),
    .cbsw           (ctrl_cbsw),
    .vbsw           (ctrl_vbsw),
    .ven            (ctrl_ven),
    .acmp           (stat_acmp),
    .avmp           (stat_avmp),
    .cursor0_res    (cursor0_res),
    .cursor0_en     (cursor0_en),
    .cursor0_xy     (cursor0_xy),
    .cursor0_ba     (cursor0_ba),
    .cursor0_ld     (cursor0_ld),
    .cc0_adr_i      (cc0_adr_i),
    .cc0_dat_o      (cc0_dat_o),
    .cursor1_res    (cursor1_res),
    .cursor1_en     (cursor1_en),
    .cursor1_xy     (cursor1_xy),
    .cursor1_ba     (cursor1_ba),
    .cursor1_ld     (cursor1_ld),
    .cc1_adr_i      (cc1_adr_i),
    .cc1_dat_o      (cc1_dat_o),
    .vbsint_in      (vmem_swint),
    .cbsint_in      (clut_swint),
    .hint_in        (hint),
    .vint_in        (vint),
    .luint_in       (luint),
    .sint_in        (sint),
    .Thsync         (Thsync),
    .Thgdel         (Thgdel),
    .Thgate         (Thgate),
    .Thlen          (Thlen),
    .Tvsync         (Tvsync),
    .Tvgdel         (Tvgdel),
    .Tvgate         (Tvgate),
    .Tvlen          (Tvlen),
    .VBARa          (VBARa),
    .VBARb          (VBARb),
    .clut_acc       (ext_clut_req),
    .clut_ack       (ext_clut_ack),
    .clut_q         (ext_clut_q)
);

wire        fb_arready, fb_rvalid, fb_rlast;
wire [31:0] fb_rdata;
wire [1:0]  fb_rresp;

wire        mst_arready = INTERNAL_FB ? fb_arready : m_axi_arready;
wire [31:0] mst_rdata   = INTERNAL_FB ? fb_rdata   : m_axi_rdata;
wire [1:0]  mst_rresp   = INTERNAL_FB ? fb_rresp   : m_axi_rresp;
wire        mst_rlast   = INTERNAL_FB ? fb_rlast   : m_axi_rlast;
wire        mst_rvalid  = INTERNAL_FB ? fb_rvalid  : m_axi_rvalid;

// ================================================================
// AXI4 Full Master instantiation
// ================================================================
vga_axi_master u_axi_master (
    .axi_aclk            (axi_aclk),
    .axi_aresetn         (axi_aresetn),

    .m_axi_araddr        (m_axi_araddr),
    .m_axi_arlen         (m_axi_arlen),
    .m_axi_arsize        (m_axi_arsize),
    .m_axi_arburst       (m_axi_arburst),
    .m_axi_arlock        (m_axi_arlock),
    .m_axi_arcache       (m_axi_arcache),
    .m_axi_arprot        (m_axi_arprot),
    .m_axi_arvalid       (m_axi_arvalid),
    .m_axi_arready       (mst_arready),

    .m_axi_rdata         (mst_rdata),
    .m_axi_rresp         (mst_rresp),
    .m_axi_rlast         (mst_rlast),
    .m_axi_rvalid        (mst_rvalid),
    .m_axi_rready        (m_axi_rready),

    .sint                (sint),
    .ctrl_ven            (ctrl_ven),
    .ctrl_cd             (ctrl_cd),
    .ctrl_vbl            (ctrl_vbl),
    .ctrl_vbsw           (ctrl_vbsw),
    .busy                (wbm_busy),
    .VBAa                (VBARa),
    .VBAb                (VBARb),
    .Thgate              (Thgate),
    .Tvgate              (Tvgate),
    .stat_avmp           (stat_avmp),
    .vmem_switch         (vmem_swint),
    .ImDoneFifoQ         (ImDoneFifoQ),
    .cursor_adr          (cursor_adr),
    .cursor0_ba          (cursor0_ba),
    .cursor1_ba          (cursor1_ba),
    .cursor0_ld          (cursor0_ld),
    .cursor1_ld          (cursor1_ld),
    .fb_data_fifo_rreq   (fb_data_fifo_rreq),
    .fb_data_fifo_q      (fb_data_fifo_q),
    .fb_data_fifo_empty  (fb_data_fifo_empty)
);

vga_fb_bram #(.AW(17)) u_fb (
    .axi_aclk(axi_aclk), .axi_aresetn(axi_aresetn),
    .s_axi_araddr(m_axi_araddr), .s_axi_arlen(m_axi_arlen),
    .s_axi_arvalid(m_axi_arvalid), .s_axi_arready(fb_arready),
    .s_axi_rdata(fb_rdata), .s_axi_rresp(fb_rresp),
    .s_axi_rlast(fb_rlast), .s_axi_rvalid(fb_rvalid),
    .s_axi_rready(m_axi_rready)
);

// ---- CLUT hardware init ----
reg        clut_init_active;
reg [2:0]  clut_init_idx;
reg [8:0]  clut_init_adr;
reg [23:0] clut_init_dat;
wire       clut_ack1;

always @(*) case (clut_init_idx)
    3'd0:    {clut_init_adr, clut_init_dat} = {9'd0,   24'hFF0000}; // red
    3'd1:    {clut_init_adr, clut_init_dat} = {9'd1,   24'h00FF00}; // green
    3'd2:    {clut_init_adr, clut_init_dat} = {9'd2,   24'h0000FF}; // blue
    3'd3:    {clut_init_adr, clut_init_dat} = {9'd256, 24'hFF0000};
    3'd4:    {clut_init_adr, clut_init_dat} = {9'd257, 24'h00FF00};
    default: {clut_init_adr, clut_init_dat} = {9'd258, 24'h0000FF};
endcase

always @(posedge axi_aclk or negedge axi_aresetn)
    if (!axi_aresetn) begin
        clut_init_active <= 1'b1;
        clut_init_idx    <= 3'd0;
    end else if (clut_init_active && clut_ack1) begin
        if (clut_init_idx == 3'd5) clut_init_active <= 1'b0;
        else                       clut_init_idx    <= clut_init_idx + 1'b1;
    end

assign ext_clut_ack = clut_init_active ? 1'b0 : clut_ack1;

vga_csm_pb #(24, 9) clut_mem (
    .clk_i  (axi_aclk),
    .req0_i (cp_clut_req),  .ack0_o (cp_clut_ack),
    .adr0_i (cp_clut_adr),  .dat0_i (24'h0),
    .dat0_o (cp_clut_q),    .we0_i  (1'b0),

    .req1_i (clut_init_active ? 1'b1          : ext_clut_req),
    .ack1_o (clut_ack1),
    .adr1_i (clut_init_active ? clut_init_adr : s_axi_awaddr[10:2]),
    .dat1_i (clut_init_active ? clut_init_dat : s_axi_wdata[23:0]),
    .dat1_o (ext_clut_q),
    .we1_i  (clut_init_active ? 1'b1          : (s_axi_wvalid & s_axi_wready))
);

// ================================================================
// CLUT <cycle shared memory>  (unchanged from vga_enh_top.v)
// ================================================================
// vga_csm_pb #(24, 9) clut_mem (
//     .clk_i  (axi_aclk),

//     // color processor access
//     .req0_i (cp_clut_req),
//     .ack0_o (cp_clut_ack),
//     .adr0_i (cp_clut_adr),
//     .dat0_i (24'h0),
//     .dat0_o (cp_clut_q),
//     .we0_i  (1'b0),

//     // external (slave) access
//     .req1_i (ext_clut_req),
//     .ack1_o (ext_clut_ack),
//     .adr1_i (s_axi_awaddr[10:2]),  // CLUT index from write addr
//     .dat1_i (s_axi_wdata[23:0]),
//     .dat1_o (ext_clut_q),
//     .we1_i  (s_axi_wvalid & s_axi_wready)
// );

// ================================================================
// Pixel and video timing generator  (unchanged)
// ================================================================
vga_pgen pixel_generator (
    .clk_i              (axi_aclk),
    .ctrl_ven           (ctrl_ven),
    .ctrl_HSyncL        (ctrl_hsl),
    .Thsync             (Thsync),
    .Thgdel             (Thgdel),
    .Thgate             (Thgate),
    .Thlen              (Thlen),
    .ctrl_VSyncL        (ctrl_vsl),
    .Tvsync             (Tvsync),
    .Tvgdel             (Tvgdel),
    .Tvgate             (Tvgate),
    .Tvlen              (Tvlen),
    .ctrl_CSyncL        (ctrl_csl),
    .ctrl_BlankL        (ctrl_bl),
    .eoh                (hint),
    .eov                (vint),

    .fb_data_fifo_rreq  (fb_data_fifo_rreq),
    .fb_data_fifo_q     (fb_data_fifo_q),
    .fb_data_fifo_empty (fb_data_fifo_empty),
    .ImDoneFifoQ        (ImDoneFifoQ),

    .stat_acmp          (stat_acmp),
    .clut_req           (cp_clut_req),
    .clut_ack           (cp_clut_ack),
    .clut_adr           (cp_clut_adr),
    .clut_q             (cp_clut_q),
    .ctrl_cbsw          (ctrl_cbsw),
    .clut_switch        (clut_swint),

    .cursor_adr         (cursor_adr),
    .cursor0_en         (cursor0_en),
    .cursor0_res        (cursor0_res),
    .cursor0_xy         (cursor0_xy),
    .cc0_adr_o          (cc0_adr_i),
    .cc0_dat_i          (cc0_dat_o),
    .cursor1_en         (cursor1_en),
    .cursor1_res        (cursor1_res),
    .cursor1_xy         (cursor1_xy),
    .cc1_adr_o          (cc1_adr_i),
    .cc1_dat_i          (cc1_dat_o),

    .ctrl_dvi_odf       (ctrl_dvi_odf),
    .ctrl_cd            (ctrl_cd),
    .ctrl_pc            (ctrl_pc),

    .line_fifo_wreq     (line_fifo_wreq),
    .line_fifo_d        (line_fifo_d),
    .line_fifo_full     (line_fifo_full_wr),
    .line_fifo_rreq     (line_fifo_rreq),
    .line_fifo_q        (line_fifo_q),

    .pclk_i             (clk_p_i),
    `ifdef VGA_12BIT_DVI
    .dvi_pclk_p_o       (dvi_pclk_p_o),
    .dvi_pclk_m_o       (dvi_pclk_m_o),
    .dvi_hsync_o        (dvi_hsync_o),
    .dvi_vsync_o        (dvi_vsync_o),
    .dvi_de_o           (dvi_de_o),
    .dvi_d_o            (dvi_d_o),
    `endif
    .pclk_o             (clk_p_o),
    .hsync_o            (hsync_pad_o),
    .vsync_o            (vsync_pad_o),
    .csync_o            (csync_pad_o),
    .blank_o            (blank_pad_o),
    .r_o                (r_pad_o),
    .g_o                (g_pad_o),
    .b_o                (b_pad_o)
);

// ================================================================
// Line FIFO  (dual-clock: write=axi_aclk, read=clk_p_i)
// ================================================================
wire ctrl_ven_not = ~ctrl_ven;
vga_fifo_dc #(LINE_FIFO_AWIDTH, 24) line_fifo (
    .rclk  (clk_p_i),
    .wclk  (axi_aclk),
    .rclr  (1'b0),
    .wclr  (ctrl_ven_not),
    .wreq  (line_fifo_wreq),
    .d     (line_fifo_d),
    .rreq  (line_fifo_rreq),
    .q     (line_fifo_q),
    .empty (line_fifo_empty_rd),
    .full  (line_fifo_full_wr)
);

// ================================================================
// Line FIFO underrun interrupt (same as vga_enh_top.v)
// ================================================================
always @(posedge clk_p_i)
    luint_pclk <= line_fifo_rreq & line_fifo_empty_rd;

always @(posedge axi_aclk) begin
    if (!ctrl_ven) begin
        sluint <= 1'b0;
        luint  <= 1'b0;
    end else begin
        sluint <= luint_pclk;
        luint  <= sluint;
    end
end

endmodule
