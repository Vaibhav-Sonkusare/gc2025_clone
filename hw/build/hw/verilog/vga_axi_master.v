/////////////////////////////////////////////////////////////////////
////                                                             ////
////  Enhanced VGA/LCD Core — AXI4 Full Master Interface         ////
////                                                             ////
////  Replaces: vga_wb_master.v (Wishbone B2 master)            ////
////                                                             ////
////  Original Author: Richard Herveille (richard@asics.ws)     ////
////  AXI4 Full Master Adaptation for Shakti SoC Integration    ////
////                                                             ////
////  This module reads framebuffer and hardware-cursor data     ////
////  from main memory using the AXI4 Full read channel.        ////
////  It is a READ-ONLY master (no write channel).              ////
////                                                             ////
////  AXI4 burst type: INCR (incrementing), up to 8 beats,      ////
////  matching the original WB burst lengths of 1/2/4/8.        ////
////                                                             ////
/////////////////////////////////////////////////////////////////////

//synopsys translate_off
`include "timescale.v"
//synopsys translate_on

module vga_axi_master (
    // AXI4 Clock & Reset
    input  wire         axi_aclk,     // master clock
    input  wire         axi_aresetn,  // async active-low reset

    // ---- AXI4 Full Read Address Channel ----
    output reg  [31:0]  m_axi_araddr,   // starting memory address to read
    output reg  [ 7:0]  m_axi_arlen,    // burst length-1
    output wire [ 2:0]  m_axi_arsize,   // 4 bytes per beat (3'b010)
    output wire [ 1:0]  m_axi_arburst,  // INCR (2'b01)
    output wire [ 1:0]  m_axi_arlock,   // Normal (2'b00)
    output wire [ 3:0]  m_axi_arcache,  // Normal Non-cacheable (4'b0011)
    output wire [ 2:0]  m_axi_arprot,   // Unprivileged, non-secure, data
    output reg          m_axi_arvalid,
    input  wire         m_axi_arready,

    // ---- AXI4 Full Read Data Channel ----
    input  wire [31:0]  m_axi_rdata,
    input  wire [ 1:0]  m_axi_rresp,
    input  wire         m_axi_rlast,
    input  wire         m_axi_rvalid,
    output reg          m_axi_rready,

    // ---- System error interrupt ----
    output reg          sint,          // non-recoverable AXI error

    // ---- Control register settings ----
    input  wire         ctrl_ven,      // video enable
    input  wire [ 1:0]  ctrl_cd,       // color depth
    input  wire [ 1:0]  ctrl_vbl,      // burst length select
    input  wire         ctrl_vbsw,     // video bank-switch enable
    output wire         busy,          // data transfer in progress

    // ---- Video memory addresses ----
    input  wire [31:2]  VBAa,          // video memory base address A
    input  wire [31:2]  VBAb,          // video memory base address B
    input  wire [15:0]  Thgate,        // horizontal visible pixels
    input  wire [15:0]  Tvgate,        // vertical visible lines

    // ---- Status outputs ----
    output wire         stat_avmp,     // active video memory page
    output wire         vmem_switch,   // video bank-switch request
    output wire         ImDoneFifoQ,   // delayed image-done flag (to pixel gen)

    // ---- Hardware cursor ----
    output reg  [ 8:0]  cursor_adr,    // cursor pattern offset
    input  wire [31:11] cursor0_ba,    // cursor0 base address
    input  wire [31:11] cursor1_ba,    // cursor1 base address
    input  wire         cursor0_ld,    // reload cursor0 request
    input  wire         cursor1_ld,    // reload cursor1 request

    // ---- Framebuffer data FIFO (output to pixel generator) ----
    input  wire         fb_data_fifo_rreq,
    output wire [31:0]  fb_data_fifo_q,
    output wire         fb_data_fifo_empty
);

// ================================================================
// Fixed AXI4 attribute signals
// ================================================================
assign m_axi_arsize  = 3'b010;   // 4 bytes per beat
assign m_axi_arburst = 2'b01;    // INCR burst
assign m_axi_arlock  = 2'b00;    // Normal access
assign m_axi_arcache = 4'b0011;  // Normal Non-cacheable Bufferable
assign m_axi_arprot  = 3'b000;   // Unprivileged, secure, data

// ================================================================
// Synchronous clear (mirrors original sclr = ~ctrl_ven)
// ================================================================
reg sclr;
always @(posedge axi_aclk)
    sclr <= ~ctrl_ven;

// ================================================================
// Burst length mapping
//   ctrl_vbl: 2'b00 → 1 beat  (arlen=0)
//             2'b01 → 2 beats (arlen=1)
//             2'b10 → 4 beats (arlen=3)
//             2'b11 → 8 beats (arlen=7)
// ================================================================
reg [2:0] burst_cnt;          // remaining beats in current burst
wire[3:0] burst_cnt_val;
assign burst_cnt_val = {1'b0, burst_cnt} - 4'h1;
wire burst_done = burst_cnt_val[3];

always @(*) begin
    case (ctrl_vbl)
        2'b00: m_axi_arlen = 8'd0;   // 1  beat
        2'b01: m_axi_arlen = 8'd1;   // 2  beats
        2'b10: m_axi_arlen = 8'd3;   // 4  beats
        2'b11: m_axi_arlen = 8'd7;   // 8  beats
        default: m_axi_arlen = 8'd0;
    endcase
end

// ================================================================
// FSM states
// ================================================================
localparam ST_IDLE      = 3'd0;
localparam ST_AR        = 3'd1;  // send read address
localparam ST_RDATA     = 3'd2;  // receive read data beats
localparam ST_CUR_AR    = 3'd3;  // cursor: send read address
localparam ST_CUR_RDATA = 3'd4;  // cursor: receive read data

reg [2:0] state;

// ================================================================
// Image / line counters  (identical logic to vga_wb_master.v)
// ================================================================

// vmem_ack: a framebuffer read data beat was accepted
wire vmem_ack = (state == ST_RDATA) && m_axi_rvalid && m_axi_rready;
wire cur_ack  = (state == ST_CUR_RDATA) && m_axi_rvalid && m_axi_rready;

// --- hgate counter ---
reg  [15:0] hgate_cnt;
reg  [16:0] hgate_cnt_val;
reg  [ 1:0] hgate_div_cnt;
reg  [ 2:0] hgate_div_val_r;

wire hdone = hgate_cnt_val[16] && vmem_ack;

always @(*) begin
    hgate_div_val_r = {1'b0, hgate_div_cnt} - 3'h1;
    if (ctrl_cd != 2'b10)
        hgate_cnt_val = {1'b0, hgate_cnt} - 17'h1;
    else if (hgate_div_val_r[2])
        hgate_cnt_val = {1'b0, hgate_cnt} - 17'h1;
    else
        hgate_cnt_val = {1'b0, hgate_cnt};
end

always @(posedge axi_aclk) begin
    if (sclr) begin
        case (ctrl_cd)
            2'b00: hgate_cnt <= Thgate >> 2;
            2'b01: hgate_cnt <= Thgate >> 1;
            2'b10: hgate_cnt <= Thgate >> 2;
            2'b11: hgate_cnt <= Thgate;
        endcase
        hgate_div_cnt <= 2'b10;
    end else if (vmem_ack) begin
        if (hdone) begin
            case (ctrl_cd)
                2'b00: hgate_cnt <= Thgate >> 2;
                2'b01: hgate_cnt <= Thgate >> 1;
                2'b10: hgate_cnt <= Thgate >> 2;
                2'b11: hgate_cnt <= Thgate;
            endcase
            hgate_div_cnt <= 2'b10;
        end else begin
            hgate_cnt <= hgate_cnt_val[15:0];
            if (hgate_div_val_r[2])
                hgate_div_cnt <= 2'b10;
            else
                hgate_div_cnt <= hgate_div_val_r[1:0];
        end
    end
end

// --- vgate counter ---
reg  [15:0] vgate_cnt;
wire [16:0] vgate_cnt_val = {1'b0, vgate_cnt} - 17'h1;
wire        vdone         = vgate_cnt_val[16];

wire ImDone     = hdone && vdone;
wire ImDoneStrb = ImDone && !dImDone;

reg dImDone, dImDoneStrb;
always @(posedge axi_aclk) begin
    dImDone     <= ImDone;
    dImDoneStrb <= ImDoneStrb;
end

always @(posedge axi_aclk) begin
    if (sclr || ImDoneStrb)
        vgate_cnt <= Tvgate;
    else if (hdone)
        vgate_cnt <= vgate_cnt_val[15:0];
end

// ================================================================
// Video memory bank select
// ================================================================
reg sel_VBA;
always @(posedge axi_aclk) begin
    if (sclr)
        sel_VBA <= 1'b0;
    else if (ctrl_vbsw)
        sel_VBA <= sel_VBA ^ ImDoneStrb;
end
assign stat_avmp  = sel_VBA;
assign vmem_switch = ImDoneStrb;

// ================================================================
// Video memory address register
// ================================================================
reg [31:2] vmemA;
always @(posedge axi_aclk) begin
    if (sclr || dImDoneStrb)
        vmemA <= sel_VBA ? VBAb : VBAa;
    else if (vmem_ack)
        vmemA <= vmemA + 30'h1;
end

// ================================================================
// Hardware cursor logic
// ================================================================
reg [31:11] cursor_ba;
reg         ld_cursor0, ld_cursor1;
reg         cur_acc_sel;  // 1=cursor0, 0=cursor1

always @(posedge axi_aclk) begin
    if (ImDone)
        cur_acc_sel <= ld_cursor0;
end

always @(posedge axi_aclk) begin
    if (sclr) begin
        ld_cursor0 <= 1'b0;
        ld_cursor1 <= 1'b0;
    end else begin
        ld_cursor0 <= cursor0_ld | (ld_cursor0 && !(cur_done &&  cur_acc_sel));
        ld_cursor1 <= cursor1_ld | (ld_cursor1 && !(cur_done && !cur_acc_sel));
    end
end

always @(posedge axi_aclk) begin
    if (state == ST_IDLE || state == ST_RDATA)
        cursor_ba <= ld_cursor0 ? cursor0_ba : cursor1_ba;
end

wire [9:0] next_cursor_adr = {1'b0, cursor_adr} + 10'h1;
wire       cur_done        = next_cursor_adr[9] && cur_ack;

always @(posedge axi_aclk) begin
    if (state != ST_CUR_AR && state != ST_CUR_RDATA)
        cursor_adr <= 9'h0;
    else if (cur_ack)
        cursor_adr <= next_cursor_adr[8:0];
end

// ================================================================
// FIFO: video data buffer  (depth 16, 32-bit wide)
// Using the existing vga_fifo from the IP
// ================================================================
wire [4:0] fb_data_fifo_nword;

vga_fifo #(4, 32) data_fifo (
    .clk    (axi_aclk),
    .aclr   (1'b1),
    .sclr   (sclr),
    .d      (m_axi_rdata),
    .wreq   (vmem_ack),
    .q      (fb_data_fifo_q),
    .rreq   (fb_data_fifo_rreq),
    .nword  (fb_data_fifo_nword),
    .empty  (fb_data_fifo_empty),
    .full   (),
    .aempty (),
    .afull  ()
);

// FIFO for delayed ImDone flag (to pixel generator)
vga_fifo #(4, 1) clut_sw_fifo (
    .clk    (axi_aclk),
    .aclr   (1'b1),
    .sclr   (sclr),
    .d      (ImDone),
    .wreq   (vmem_ack),
    .q      (ImDoneFifoQ),
    .rreq   (fb_data_fifo_rreq),
    .nword  (),
    .empty  (),
    .full   (),
    .aempty (),
    .afull  ()
);

// Request a new burst when FIFO has room (upper half empty)
wire vmem_req = ~fb_data_fifo_nword[4] & ~fb_data_fifo_nword[3];

// ================================================================
// busy flag
// ================================================================
assign busy = (state != ST_IDLE);

// ================================================================
// Burst counter management
// ================================================================
always @(posedge axi_aclk) begin
    if (!axi_aresetn || sclr) begin
        burst_cnt <= 3'b0;
    end else if (state == ST_AR && m_axi_arready) begin
        // Load burst counter when address is accepted
        case (ctrl_vbl)
            2'b00: burst_cnt <= 3'd0;
            2'b01: burst_cnt <= 3'd1;
            2'b10: burst_cnt <= 3'd3;
            2'b11: burst_cnt <= 3'd7;
            default: burst_cnt <= 3'd0;
        endcase
    end else if (vmem_ack && !burst_done) begin
        burst_cnt <= burst_cnt_val[2:0];
    end
end

// ================================================================
// AXI4 Full Master FSM
// ================================================================
always @(posedge axi_aclk or negedge axi_aresetn) begin
    if (!axi_aresetn) begin
        state         <= ST_IDLE;
        m_axi_arvalid <= 1'b0;
        m_axi_araddr  <= 32'h0;
        m_axi_rready  <= 1'b0;
        sint          <= 1'b0;
    end else begin
        sint <= 1'b0; // default: no error

        case (state)
            // -------------------------------------------------
            ST_IDLE: begin
                m_axi_arvalid <= 1'b0;
                m_axi_rready  <= 1'b0;
                if (sclr) begin
                    state <= ST_IDLE;
                end else if (vmem_req && !ImDone) begin
                    // Start framebuffer read burst
                    m_axi_araddr  <= {vmemA, 2'b00};
                    m_axi_arvalid <= 1'b1;
                    state         <= ST_AR;
                end else if (ImDone && (ld_cursor0 || ld_cursor1)) begin
                    // Start cursor pattern read
                    m_axi_araddr  <= {cursor_ba,
                                      cursor_adr, 2'b00};
                    m_axi_arvalid <= 1'b1;
                    state         <= ST_CUR_AR;
                end
            end

            // -------------------------------------------------
            ST_AR: begin
                if (m_axi_arready) begin
                    m_axi_arvalid <= 1'b0;
                    m_axi_rready  <= 1'b1;
                    state         <= ST_RDATA;
                end
            end

            // -------------------------------------------------
            ST_RDATA: begin
                if (m_axi_rvalid) begin
                    if (m_axi_rresp[1]) begin
                        sint <= 1'b1;  // SLVERR or DECERR
                    end
                    if (m_axi_rlast) begin
                        m_axi_rready <= 1'b0;
                        // Check if more video beats needed
                        if (!ImDone && vmem_req) begin
                            m_axi_araddr  <= {vmemA + 30'h1, 2'b00};
                            m_axi_arvalid <= 1'b1;
                            state         <= ST_AR;
                        end else if (ImDone && (ld_cursor0 || ld_cursor1)) begin
                            m_axi_araddr  <= {cursor_ba,
                                              cursor_adr, 2'b00};
                            m_axi_arvalid <= 1'b1;
                            state         <= ST_CUR_AR;
                        end else begin
                            state <= ST_IDLE;
                        end
                    end
                end
            end

            // -------------------------------------------------
            ST_CUR_AR: begin
                if (m_axi_arready) begin
                    m_axi_arvalid <= 1'b0;
                    m_axi_rready  <= 1'b1;
                    state         <= ST_CUR_RDATA;
                end
            end

            // -------------------------------------------------
            ST_CUR_RDATA: begin
                if (m_axi_rvalid) begin
                    if (m_axi_rresp[1])
                        sint <= 1'b1;
                    if (m_axi_rlast) begin
                        m_axi_rready <= 1'b0;
                        if (!cur_done) begin
                            // More cursor beats needed
                            m_axi_araddr  <= {cursor_ba,
                                              next_cursor_adr[8:0], 2'b00};
                            m_axi_arvalid <= 1'b1;
                            state         <= ST_CUR_AR;
                        end else begin
                            state <= ST_IDLE;
                        end
                    end
                end
            end

            default: state <= ST_IDLE;
        endcase
    end
end

endmodule
