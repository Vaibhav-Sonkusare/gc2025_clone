/* verilator lint_off UNUSEDSIGNAL */
/////////////////////////////////////////////////////////////////////
////                                                             ////
////  Enhanced VGA/LCD Core — AXI4-Lite Slave Interface          ////
////                                                             ////
////  Replaces: vga_wb_slave.v (Wishbone B2 slave)              ////
////                                                             ////
////  Original Author: Richard Herveille (richard@asics.ws)     ////
////  AXI4-Lite Adaptation for Shakti SoC Integration           ////
////                                                             ////
////  Register Map (byte offsets):                               ////
////    0x000 : CTRL  (Control Register)                         ////
////    0x004 : STAT  (Status Register — W1C interrupt bits)     ////
////    0x008 : HTIM  (Horizontal Timing)                        ////
////    0x00C : VTIM  (Vertical Timing)                          ////
////    0x010 : HVLEN (H/V visible length)                       ////
////    0x014 : VBARa (Video Base Address A)                     ////
////    0x018 : VBARb (Video Base Address B)                     ////
////    0x030 : C0XY  (Cursor0 X,Y)                             ////
////    0x034 : C0BAR (Cursor0 Base Address)                     ////
////    0x040-0x05C : CCR0 (Cursor0 Color Registers)            ////
////    0x070 : C1XY  (Cursor1 X,Y)                             ////
////    0x074 : C1BAR (Cursor1 Base Address)                     ////
////    0x080-0x09C : CCR1 (Cursor1 Color Registers)            ////
////    0x800-0xFFC : CLUT (Color Lookup Table, 512 x 24-bit)   ////
////                                                             ////
/////////////////////////////////////////////////////////////////////

//synopsys translate_off
`include "timescale.v"
//synopsys translate_on
`include "vga_defines.v"

module vga_axi_slave #(
    parameter AXI_ADDR_WIDTH = 32,
    parameter DATA_WIDTH     = 32
)(
    // AXI4-Lite Clock & Reset
    input  wire                      s_axi_aclk,
    input  wire                      s_axi_aresetn,  // active-low async reset

    // AXI4-Lite Write Address Channel
    input  wire [AXI_ADDR_WIDTH-1:0] s_axi_awaddr,
    input  wire                      s_axi_awvalid,
    output reg                       s_axi_awready,

    // AXI4-Lite Write Data Channel
    input  wire [DATA_WIDTH-1:0]     s_axi_wdata,
    input  wire [(DATA_WIDTH/8)-1:0] s_axi_wstrb,
    input  wire                      s_axi_wvalid,
    output reg                       s_axi_wready,

    // AXI4-Lite Write Response Channel
    output reg  [1:0]                s_axi_bresp,
    output reg                       s_axi_bvalid,
    input  wire                      s_axi_bready,

    // AXI4-Lite Read Address Channel
    input  wire [AXI_ADDR_WIDTH-1:0] s_axi_araddr,
    input  wire                      s_axi_arvalid,
    output reg                       s_axi_arready,

    // AXI4-Lite Read Data Channel
    output reg  [DATA_WIDTH-1:0]     s_axi_rdata,
    output reg  [1:0]                s_axi_rresp,
    output reg                       s_axi_rvalid,
    input  wire                      s_axi_rready,

    // Interrupt output (replaces inta_o)
    output reg                       irq_o,

    // ---------- Internal connections to VGA data-path ----------

    // Wishbone master controller feedback (busy signal)
    input  wire                      wbm_busy,

    // Control register decoded outputs
    output wire [1:0]                dvi_odf,       // DVI output data format
    output wire                      bl,            // Blanking level
    output wire                      csl,           // composite sync level
    output wire                      vsl,           // vsync level
    output wire                      hsl,           // hsync level
    output wire                      pc,            // pseudo color
    output wire [1:0]                cd,            // color depth
    output wire [1:0]                vbl,           // video memory burst length
    output wire                      cbsw,          // CLUT bank switch enable
    output wire                      vbsw,          // video memory bank switch enable
    output wire                      ven,           // video system enable

    // Hardware cursor outputs
    output wire                      cursor0_res,   // cursor0 resolution
    output wire                      cursor0_en,    // corsor0 enable
    output reg  [31: 0]              cursor0_xy,    // cursor0 location
    output reg  [31:10]              cursor0_ba,    // cursor0 base address
    output reg                       cursor0_ld,    // reload cursor0 from video memory
    input  wire [ 3: 0]              cc0_adr_i,     // cursor0 color register address
    output wire [15: 0]              cc0_dat_o,     // cursor0 color register data

    output wire                      cursor1_res,   // cursor1 resolution
    output wire                      cursor1_en,    // cursor1 enable
    output reg  [31: 0]              cursor1_xy,    // cursor1 location
    output reg  [31:10]              cursor1_ba,    // cursor1 base address
    output reg                       cursor1_ld,    // reload cursor1 from video memory
    input  wire [ 3: 0]              cc1_adr_i,     // cursor1 color register address
    output wire [15: 0]              cc1_dat_o,     // cursor1 color register data

    // Status register inputs
    input  wire                      avmp,          // active video memory page
    input  wire                      acmp,          // active clut memory page
    input  wire                      vbsint_in,     // bank switch interrupt request
    input  wire                      cbsint_in,     // clut bank switch interrupt request
    input  wire                      hint_in,       // hsync interrupt request
    input  wire                      vint_in,       // vsync interrupt request
    input  wire                      luint_in,      // line fifo underrun interrupt request
    input  wire                      sint_in,       // system error interrupt request

    // Horizontal Timing Register outputs
    output wire [ 7:0]               Thsync,        // horizontal sync pulse width
    output wire [ 7:0]               Thgdel,        // back porch length (horizontal gate delay)
    output wire [15:0]               Thgate,        // active time/ visible area (horizontal gate width)
    output wire [15:0]               Thlen,         // total line length (horizontal line width)

    // Vertical Timing Register outputs
    output wire [ 7:0]               Tvsync,        // vertical sync pulse width
    output wire [ 7:0]               Tvgdel,        // back porch length (vertical gate delay)
    output wire [15:0]               Tvgate,        // active time/ visible area (vertical gate width)
    output wire [15:0]               Tvlen,         // total frame length (vertical frame height)

    // Video base addresses
    output reg  [31:2]               VBARa,
    output reg  [31:2]               VBARb,

    // CLUT (Color Lookup Table) access signals
    output wire                      clut_acc,
    input  wire                      clut_ack,
    input  wire [23:0]               clut_q
);

// ================================================================
// Internal register declarations
// ================================================================
reg [31:0] ctrl, stat, htim, vtim, hvlen;

wire hint, vint, vbsint, cbsint, luint, sint;
wire hie, vie, vbsie, cbsie;

// ================================================================
// AXI4-Lite address latch registers
// ================================================================
reg [11:0] awaddr_reg;   // latched write address [11:0]
reg [11:0] araddr_reg;   // latched read address  [11:0]

// ================================================================
// Address decoding constants  (matches original vga_wb_slave.v)
// ================================================================
// Byte offset → word index for reg space (adr[11:2])
localparam [9:0] CTRL_ADR  = 10'h000 >> 2;  // 0x000 → word 0
localparam [9:0] STAT_ADR  = 10'h004 >> 2;  // 0x004 → word 1
localparam [9:0] HTIM_ADR  = 10'h008 >> 2;  // 0x008 → word 2
localparam [9:0] VTIM_ADR  = 10'h00C >> 2;  // 0x00C → word 3
localparam [9:0] HVLEN_ADR = 10'h010 >> 2;  // 0x010 → word 4
localparam [9:0] VBARA_ADR = 10'h014 >> 2;  // 0x014 → word 5
localparam [9:0] VBARB_ADR = 10'h018 >> 2;  // 0x018 → word 6
localparam [9:0] C0XY_ADR  = 10'h030 >> 2;  // 0x030 → word 12
localparam [9:0] C0BAR_ADR = 10'h034 >> 2;  // 0x034 → word 13
localparam [9:0] C1XY_ADR  = 10'h070 >> 2;  // 0x070 → word 28
localparam [9:0] C1BAR_ADR = 10'h074 >> 2;  // 0x074 → word 29

// Cursor color register ranges: CCR0 = 0x040–0x07C (words 16–31)
//                               CCR1 = 0x080–0x0BC (words 32–47)
// CLUT: adr[11] == 1 (address >= 0x800)

wire [9:0] wr_word_adr = awaddr_reg[11:2];
wire [9:0] rd_word_adr = araddr_reg[11:2];

wire wr_clut_sel = awaddr_reg[11];
wire rd_clut_sel = araddr_reg[11];

wire wr_cc0_sel  = !wr_clut_sel && (awaddr_reg[9:6] == 4'b0001);  // 0x040-0x07C
wire wr_cc1_sel  = !wr_clut_sel && (awaddr_reg[9:6] == 4'b0010);  // 0x080-0x0BC
wire rd_cc0_sel  = !rd_clut_sel && (araddr_reg[9:6] == 4'b0001);
wire rd_cc1_sel  = !rd_clut_sel && (araddr_reg[9:6] == 4'b0010);

// ================================================================
// Write-lane select: pick the 32-bit slice of the bus addressed by
// the latched write address (handles DATA_WIDTH = 32 / 64 / 128)
// ================================================================
localparam LANES = DATA_WIDTH/32;

wire [31:0] wdata32;
wire [3:0]  wstrb32;

generate
  if (LANES == 1) begin : g_lane1
    assign wdata32 = s_axi_wdata;
    assign wstrb32 = s_axi_wstrb;
  end else begin : g_laneN
    wire [$clog2(LANES)-1:0] lane = awaddr_reg[$clog2(LANES)+1:2];
    assign wdata32 = s_axi_wdata[lane*32 +: 32];
    assign wstrb32 = s_axi_wstrb[lane*4  +: 4];
  end
endgenerate

// ================================================================
// AXI4-Lite Write Address Channel
// ================================================================
always @(posedge s_axi_aclk or negedge s_axi_aresetn) begin
    if (!s_axi_aresetn) begin
        s_axi_awready <= 1'b0;
        awaddr_reg    <= 12'h0;
    end else begin
        if (!s_axi_awready && s_axi_awvalid) begin
            s_axi_awready <= 1'b1;
            awaddr_reg    <= s_axi_awaddr[11:0];
        end else begin
            s_axi_awready <= 1'b0;
        end
    end
end

// ================================================================
// AXI4-Lite Write Data Channel
// ================================================================
always @(posedge s_axi_aclk or negedge s_axi_aresetn) begin
    if (!s_axi_aresetn) begin
        s_axi_wready <= 1'b0;
    end else begin
        if (!s_axi_wready && s_axi_wvalid) begin
            s_axi_wready <= 1'b1;
        end else begin
            s_axi_wready <= 1'b0;
        end
    end
end

// Convenience: write transaction accepted this cycle
wire reg_wacc  = s_axi_awready && s_axi_awvalid && s_axi_wready && s_axi_wvalid;
wire reg_wr_ok = reg_wacc && !wr_clut_sel && !wr_cc0_sel && !wr_cc1_sel;

// ================================================================
// AXI4-Lite Write Response Channel
// ================================================================
always @(posedge s_axi_aclk or negedge s_axi_aresetn) begin
    if (!s_axi_aresetn) begin
        s_axi_bvalid <= 1'b0;
        s_axi_bresp  <= 2'b00;
    end else begin
        if (reg_wacc && !s_axi_bvalid) begin
            s_axi_bvalid <= 1'b1;
            s_axi_bresp  <= 2'b00; // OKAY
        end else if (s_axi_bvalid && s_axi_bready) begin
            s_axi_bvalid <= 1'b0;
        end
    end
end

// ================================================================
// CLUT access signal: assert when write/read targets CLUT range
// ================================================================
// clut_acc is asserted for one cycle when the CLUT address is
// presented on either the write or read channel.
assign clut_acc = (reg_wacc && wr_clut_sel) ||
                  (s_axi_arready && s_axi_arvalid && rd_clut_sel);

// ================================================================
// Registers — General purpose (htim, vtim, hvlen, VBARa/b, cursors)
// ================================================================
always @(posedge s_axi_aclk or negedge s_axi_aresetn) begin
    if (!s_axi_aresetn) begin
        htim  <= 32'h5F27027F;      // sync=95+1, back_porch=39+1, display=639+1
        vtim  <= 32'h011F01DF;      // sync=1+1, back_porch=31+1, display=479+1
        hvlen <= 32'h031F020C;      // total line=799+1, total frame=524+1
        VBARa      <= 30'h0;
        VBARb      <= 30'h0;
        cursor0_xy <= 32'h0;
        cursor0_ba <= 22'h0;
        cursor1_xy <= 32'h0;
        cursor1_ba <= 22'h0;
    end else if (reg_wr_ok) begin
        case (wr_word_adr)
            HTIM_ADR  : begin
                if (wstrb32[0]) htim[ 7: 0] <= wdata32[ 7: 0];
                if (wstrb32[1]) htim[15: 8] <= wdata32[15: 8];
                if (wstrb32[2]) htim[23:16] <= wdata32[23:16];
                if (wstrb32[3]) htim[31:24] <= wdata32[31:24];
            end
            VTIM_ADR  : begin
                if (wstrb32[0]) vtim[ 7: 0] <= wdata32[ 7: 0];
                if (wstrb32[1]) vtim[15: 8] <= wdata32[15: 8];
                if (wstrb32[2]) vtim[23:16] <= wdata32[23:16];
                if (wstrb32[3]) vtim[31:24] <= wdata32[31:24];
            end
            HVLEN_ADR : begin
                if (wstrb32[0]) hvlen[ 7: 0] <= wdata32[ 7: 0];
                if (wstrb32[1]) hvlen[15: 8] <= wdata32[15: 8];
                if (wstrb32[2]) hvlen[23:16] <= wdata32[23:16];
                if (wstrb32[3]) hvlen[31:24] <= wdata32[31:24];
            end
            VBARA_ADR : VBARa      <= wdata32[31:2];
            VBARB_ADR : VBARb      <= wdata32[31:2];
            C0XY_ADR  : cursor0_xy <= wdata32;
            C0BAR_ADR : cursor0_ba <= wdata32[31:10];
            C1XY_ADR  : cursor1_xy <= wdata32;
            C1BAR_ADR : cursor1_ba <= wdata32[31:10];
            default   : ; // no-op
        endcase
    end
end

// Cursor load strobes (one-cycle pulse after BAR write)
always @(posedge s_axi_aclk or negedge s_axi_aresetn) begin
    if (!s_axi_aresetn) begin
        cursor0_ld <= 1'b0;
        cursor1_ld <= 1'b0;
    end else begin
        cursor0_ld <= reg_wr_ok && (wr_word_adr == C0BAR_ADR);
        cursor1_ld <= reg_wr_ok && (wr_word_adr == C1BAR_ADR);
    end
end

// ================================================================
// Control Register  (CTRL at offset 0x000)
// ================================================================
always @(posedge s_axi_aclk or negedge s_axi_aresetn) begin
    if (!s_axi_aresetn) begin
        ctrl  <= 32'h0000_0981;   // VEN | PC (8bpp pseudo-color) | VBL8 | CD8
    end else if (reg_wr_ok && (wr_word_adr == CTRL_ADR) && !wbm_busy) begin
        ctrl <= wdata32[31:0];
    end else begin
        // Auto-clear bank-switch enable bits when the switch has occurred
        ctrl[6] <= ctrl[6] & !cbsint_in;
        ctrl[5] <= ctrl[5] & !vbsint_in;
    end
end

// ================================================================
// Status Register  (STAT at offset 0x004 — W1C interrupt bits)
// ================================================================
always @(posedge s_axi_aclk or negedge s_axi_aresetn) begin
    if (!s_axi_aresetn) begin
        stat <= 32'h0;
    end else begin
        // Fixed capability bits
        `ifdef VGA_HWC1
            stat[24] <= 1'b1;
        `else
            stat[24] <= 1'b0;
        `endif
        `ifdef VGA_HWC0
            stat[20] <= 1'b1;
        `else
            stat[20] <= 1'b0;
        `endif

        stat[17] <= acmp;
        stat[16] <= avmp;

        if (reg_wr_ok && (wr_word_adr == STAT_ADR)) begin
            // Write-1-to-Clear interrupt flags
            stat[7] <= cbsint_in | (stat[7] & !wdata32[7]);
            stat[6] <= vbsint_in | (stat[6] & !wdata32[6]);
            stat[5] <= hint_in   | (stat[5] & !wdata32[5]);
            stat[4] <= vint_in   | (stat[4] & !wdata32[4]);
            stat[1] <= luint_in  | (stat[1] & !wdata32[1]);
            stat[0] <= sint_in   | (stat[0] & !wdata32[0]);
        end else begin
            stat[7] <= stat[7] | cbsint_in;
            stat[6] <= stat[6] | vbsint_in;
            stat[5] <= stat[5] | hint_in;
            stat[4] <= stat[4] | vint_in;
            stat[1] <= stat[1] | luint_in;
            stat[0] <= stat[0] | sint_in;
        end
    end
end

// ================================================================
// Control Register decode (identical to vga_wb_slave.v)
// ================================================================
assign dvi_odf     = ctrl[29:28];
assign cursor1_res = ctrl[25];
assign cursor1_en  = ctrl[24];
assign cursor0_res = ctrl[21];
assign cursor0_en  = ctrl[20];
assign bl          = ctrl[15];
assign csl         = ctrl[14];
assign vsl         = ctrl[13];
assign hsl         = ctrl[12];
assign pc          = ctrl[11];
assign cd          = ctrl[10:9];
assign vbl         = ctrl[8:7];
assign cbsw        = ctrl[6];
assign vbsw        = ctrl[5];
assign cbsie       = ctrl[4];
assign vbsie       = ctrl[3];
assign hie         = ctrl[2];
assign vie         = ctrl[1];
assign ven         = ctrl[0];

// Status register decode
assign cbsint = stat[7];
assign vbsint = stat[6];
assign hint   = stat[5];
assign vint   = stat[4];
assign luint  = stat[1];
assign sint   = stat[0];

// Timing register decode
assign Thsync = htim[31:24];
assign Thgdel = htim[23:16];
assign Thgate = htim[15:0];
assign Thlen  = hvlen[31:16];

assign Tvsync = vtim[31:24];
assign Tvgdel = vtim[23:16];
assign Tvgate = vtim[15:0];
assign Tvlen  = hvlen[15:0];

// ================================================================
// Hardware Cursor Color Registers
// ================================================================
wire [31:0] ccr0_dat_o, ccr1_dat_o;

`ifdef VGA_HWC0
    vga_cur_cregs cregs0 (
        .clk_i   (s_axi_aclk),
        .rst_i   (~s_axi_aresetn),
        .arst_i  (s_axi_aresetn),
        .hsel_i  (reg_wacc && wr_cc0_sel),
        .hadr_i  (awaddr_reg[4:2]),
        .hwe_i   (1'b1),
        .hdat_i  (wdata32),
        .hdat_o  (ccr0_dat_o),
        .hack_o  (),
        .cadr_i  (cc0_adr_i),
        .cdat_o  (cc0_dat_o)
    );
`else
    assign ccr0_dat_o = 32'h0;
    assign cc0_dat_o  = 16'h0;
`endif

`ifdef VGA_HWC1
    vga_cur_cregs cregs1 (
        .clk_i   (s_axi_aclk),
        .rst_i   (~s_axi_aresetn),
        .arst_i  (s_axi_aresetn),
        .hsel_i  (reg_wacc && wr_cc1_sel),
        .hadr_i  (awaddr_reg[4:2]),
        .hwe_i   (1'b1),
        .hdat_i  (wdata32),
        .hdat_o  (ccr1_dat_o),
        .hack_o  (),
        .cadr_i  (cc1_adr_i),
        .cdat_o  (cc1_dat_o)
    );
`else
    assign ccr1_dat_o = 32'h0;
    assign cc1_dat_o  = 16'h0;
`endif

// ================================================================
// AXI4-Lite Read Address Channel
// ================================================================
always @(posedge s_axi_aclk or negedge s_axi_aresetn) begin
    if (!s_axi_aresetn) begin
        s_axi_arready <= 1'b0;
        araddr_reg    <= 12'h0;
    end else begin
        if (!s_axi_arready && s_axi_arvalid) begin
            s_axi_arready <= 1'b1;
            araddr_reg    <= s_axi_araddr[11:0];
        end else begin
            s_axi_arready <= 1'b0;
        end
    end
end

// ================================================================
// Read Data mux (register file)
// ================================================================
reg [31:0] reg_dato;

always @(*) begin
    if (rd_clut_sel) begin
        reg_dato = {8'h0, clut_q};        // CLUT read (via shared memory)
    end else begin
        casez (rd_word_adr)
            CTRL_ADR  : reg_dato = ctrl;
            STAT_ADR  : reg_dato = stat;
            HTIM_ADR  : reg_dato = htim;
            VTIM_ADR  : reg_dato = vtim;
            HVLEN_ADR : reg_dato = hvlen;
            VBARA_ADR : reg_dato = {VBARa, 2'b00};
            VBARB_ADR : reg_dato = {VBARb, 2'b00};
            C0XY_ADR  : reg_dato = cursor0_xy;
            C0BAR_ADR : reg_dato = {cursor0_ba, 10'h0};
            C1XY_ADR  : reg_dato = cursor1_xy;
            C1BAR_ADR : reg_dato = {cursor1_ba, 10'h0};
            default   : begin
                if (rd_cc0_sel) reg_dato = ccr0_dat_o;
                else if (rd_cc1_sel) reg_dato = ccr1_dat_o;
                else reg_dato = 32'h0;
            end
        endcase
    end
end

// ================================================================
// AXI4-Lite Read Data Channel
// Note: clut_q is already captured in reg_dato combinatorially via
// the always@(*) mux above. We assert rvalid immediately on the
// cycle after arready; no extra wait is needed for CLUT.
// ================================================================
always @(posedge s_axi_aclk or negedge s_axi_aresetn) begin
    if (!s_axi_aresetn) begin
        s_axi_rvalid <= 1'b0;
        s_axi_rresp  <= 2'b00;
        s_axi_rdata  <= {DATA_WIDTH{1'b0}};
    end else begin
        if (s_axi_arready && s_axi_arvalid && !s_axi_rvalid) begin
            s_axi_rvalid <= 1'b1;
            s_axi_rresp  <= 2'b00; // OKAY
            s_axi_rdata  <= {(DATA_WIDTH/32){reg_dato}};
        end else if (s_axi_rvalid && s_axi_rready) begin
            s_axi_rvalid <= 1'b0;
        end
    end
end

// ================================================================
// Interrupt output
// ================================================================
always @(posedge s_axi_aclk or negedge s_axi_aresetn) begin
    if (!s_axi_aresetn) begin
        irq_o <= 1'b0;
    end else begin
        irq_o <= (hint & hie) | (vint & vie) |
                 (vbsint & vbsie) | (cbsint & cbsie) |
                 luint | sint;
    end
end

endmodule
