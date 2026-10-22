/////////////////////////////////////////////////////////////////////
////  VGA AXI4 Full Master — Unit Testbench  (Verilog-2001)      ////
////                                                             ////
////  Tests: AXI attribute signals, 1-beat burst, 8-beat burst,  ////
////         address increment, frame boundary/ImDone,           ////
////         bank-switch VBAa→VBAb, AXI error → sint.           ////
////                                                             ////
////  Run: iverilog -I. -o master_tb vga_axi_master_tb.v        ////
////            vga_axi_master.v vga_fifo.v && vvp master_tb    ////
/////////////////////////////////////////////////////////////////////

`timescale 1ns/1ps

module vga_axi_master_tb;

// ----------------------------------------------------------------
// Clock & Reset
// ----------------------------------------------------------------
reg clk   = 0;
reg rst_n = 0;
always #5 clk = ~clk;

// ----------------------------------------------------------------
// AXI4 Full Read Channel — wires from DUT
// ----------------------------------------------------------------
wire [31:0] araddr;
wire [ 7:0] arlen;
wire [ 2:0] arsize;
wire [ 1:0] arburst;
wire [ 1:0] arlock;
wire [ 3:0] arcache;
wire [ 2:0] arprot;
wire        arvalid;
reg         arready = 0;

reg  [31:0] rdata   = 0;
reg  [ 1:0] rresp   = 0;
reg         rlast   = 0;
reg         rvalid  = 0;
wire        rready;

// ----------------------------------------------------------------
// Control inputs
// ----------------------------------------------------------------
reg         ctrl_ven  = 0;
reg  [ 1:0] ctrl_cd   = 2'b11;   // 32bpp — 1 pixel per beat
reg  [ 1:0] ctrl_vbl  = 2'b00;   // override per test
reg         ctrl_vbsw = 0;

// Small frame: 4 wide × 2 tall = 8 beats total for fast sim
localparam [15:0] HPIX = 16'd4;
localparam [15:0] VPIX = 16'd2;

reg  [31:2] VBAa = 30'h400;   // base addr A = 0x1000
reg  [31:2] VBAb = 30'h800;   // base addr B = 0x2000

// Cursor (not exercised in this TB)
reg  [31:11] cursor0_ba = 21'h0;
reg  [31:11] cursor1_ba = 21'h0;
reg          cursor0_ld = 0;
reg          cursor1_ld = 0;

// FB FIFO consumer side
wire         fb_empty;
wire [31:0]  fb_q;
reg          fb_rreq = 0;

// DUT outputs
wire         sint;
wire         busy;
wire         stat_avmp;
wire         vmem_switch;
wire         ImDoneFifoQ;
wire [ 8:0]  cursor_adr;

// ----------------------------------------------------------------
// DUT
// ----------------------------------------------------------------
vga_axi_master dut (
    .axi_aclk            (clk),
    .axi_aresetn         (rst_n),
    .m_axi_araddr        (araddr),
    .m_axi_arlen         (arlen),
    .m_axi_arsize        (arsize),
    .m_axi_arburst       (arburst),
    .m_axi_arlock        (arlock),
    .m_axi_arcache       (arcache),
    .m_axi_arprot        (arprot),
    .m_axi_arvalid       (arvalid),
    .m_axi_arready       (arready),
    .m_axi_rdata         (rdata),
    .m_axi_rresp         (rresp),
    .m_axi_rlast         (rlast),
    .m_axi_rvalid        (rvalid),
    .m_axi_rready        (rready),
    .sint                (sint),
    .ctrl_ven            (ctrl_ven),
    .ctrl_cd             (ctrl_cd),
    .ctrl_vbl            (ctrl_vbl),
    .ctrl_vbsw           (ctrl_vbsw),
    .busy                (busy),
    .VBAa                (VBAa),
    .VBAb                (VBAb),
    .Thgate              (HPIX),
    .Tvgate              (VPIX),
    .stat_avmp           (stat_avmp),
    .vmem_switch         (vmem_switch),
    .ImDoneFifoQ         (ImDoneFifoQ),
    .cursor_adr          (cursor_adr),
    .cursor0_ba          (cursor0_ba),
    .cursor1_ba          (cursor1_ba),
    .cursor0_ld          (cursor0_ld),
    .cursor1_ld          (cursor1_ld),
    .fb_data_fifo_rreq   (fb_rreq),
    .fb_data_fifo_q      (fb_q),
    .fb_data_fifo_empty  (fb_empty)
);

// ----------------------------------------------------------------
// AXI4 Memory model — 2-cycle latency, responds with addr+beat*4
// Resets on arready deassertion so it's always ready to take
// a new request when arready=1.
// ----------------------------------------------------------------
reg  [31:0] mem_base;
reg  [ 7:0] mem_len;
reg  [ 7:0] mem_beat;
reg  [ 1:0] mem_state;
reg  [ 1:0] mem_lat;
reg         inject_err;     // set by test to inject SLVERR

localparam MS_IDLE = 2'd0, MS_LAT = 2'd1, MS_DATA = 2'd2;

always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        arready   <= 0; rvalid <= 0; rlast <= 0;
        rdata     <= 0; rresp  <= 0;
        mem_state <= MS_IDLE; mem_beat <= 0; mem_lat <= 0;
    end else begin
        case (mem_state)
            MS_IDLE: begin
                arready <= 1;
                if (arvalid && arready) begin
                    mem_base  <= araddr;
                    mem_len   <= arlen;
                    mem_beat  <= 0;
                    arready   <= 0;
                    mem_lat   <= 2;
                    mem_state <= MS_LAT;
                end
            end
            MS_LAT: begin
                if (mem_lat == 0) begin
                    mem_state <= MS_DATA;
                    rvalid    <= 1;
                    rdata     <= mem_base + (mem_beat << 2);
                    rresp     <= inject_err ? 2'b10 : 2'b00;
                    rlast     <= (mem_beat == mem_len);
                end else mem_lat <= mem_lat - 1;
            end
            MS_DATA: begin
                if (rvalid && rready) begin
                    if (rlast) begin
                        rvalid    <= 0; rlast <= 0;
                        mem_state <= MS_IDLE; arready <= 1;
                        inject_err <= 0;  // clear after one error
                    end else begin
                        mem_beat <= mem_beat + 1;
                        rdata    <= mem_base + ((mem_beat + 1) << 2);
                        rresp    <= 2'b00;
                        rlast    <= ((mem_beat + 1) == mem_len);
                    end
                end
            end
        endcase
    end
end

// ----------------------------------------------------------------
// Helpers
// ----------------------------------------------------------------
integer pass_count = 0;
integer fail_count = 0;
// Module-level vars used in initial block
reg [31:0] first_addr;
reg [31:0] second_addr;
integer    loop_b;
integer    tcnt;
reg        got_switch;

task check;
    input [191:0] name;
    input         cond;
    begin
        if (cond) begin $display("  [PASS] %0s", name); pass_count = pass_count+1; end
        else      begin $display("  [FAIL] %0s", name); fail_count = fail_count+1; end
    end
endtask

// Drain n beats from fb FIFO
task drain;
    input integer n;
    integer i;
    begin
        for (i = 0; i < n; i = i+1) begin
            wait(!fb_empty);
            @(posedge clk); fb_rreq <= 1;
            @(posedge clk); fb_rreq <= 0;
            @(posedge clk);
        end
    end
endtask

// Enable DUT, wait for first arvalid, return araddr & arlen latched
task wait_ar;
    begin
        @(posedge arvalid);
        @(posedge clk); // latch one cycle after valid
    end
endtask

// Disable then re-enable VGA to reset counters
task reset_ven;
    begin
        ctrl_ven = 0;
        repeat(4) @(posedge clk);
        ctrl_ven = 1;
        repeat(2) @(posedge clk);
    end
endtask

// ----------------------------------------------------------------
// Stimulus
// ----------------------------------------------------------------
initial begin
    $dumpfile("master_tb.vcd");
    $dumpvars(0, vga_axi_master_tb);

    inject_err = 0;
    rst_n = 0;
    repeat(6) @(posedge clk);
    rst_n = 1;
    repeat(2) @(posedge clk);

    $display("\n========================================");
    $display(" VGA AXI4 Full Master Testbench");
    $display("========================================\n");

    // ============================================================
    // TC1: Fixed AXI4 attribute signals
    // ============================================================
    $display("[TC1] Fixed AXI4 attribute signals");
    ctrl_ven = 1;
    @(posedge arvalid);
    check("arsize  = 3'b010 (4B/beat)", arsize  === 3'b010);
    check("arburst = INCR  (2'b01)",    arburst === 2'b01);
    check("arlock  = 2'b00 (Normal)",   arlock  === 2'b00);
    check("arprot  = 3'b000",           arprot  === 3'b000);
    // Let memory model complete this request + drain so FSM is free
    wait(mem_state == MS_IDLE);
    drain(1);

    // ============================================================
    // TC2: Single-beat burst  arlen=0
    // ============================================================
    $display("[TC2] Single-beat read (ctrl_vbl=2'b00 → arlen=0)");
    reset_ven();
    ctrl_vbl = 2'b00;
    @(posedge arvalid);
    check("arlen = 0 for 1-beat", arlen === 8'd0);
    wait(mem_state == MS_IDLE);
    drain(1);

    // ============================================================
    // TC3: 8-beat burst  arlen=7
    // ============================================================
    $display("[TC3] 8-beat burst (ctrl_vbl=2'b11 → arlen=7)");
    reset_ven();
    ctrl_vbl = 2'b11;
    @(posedge arvalid);
    check("arlen = 7 for 8-beat burst", arlen === 8'd7);
    wait(mem_state == MS_IDLE);
    drain(8);

    // ============================================================
    // TC4: Address increments by 4×(arlen+1) bytes across bursts
    // ============================================================
    $display("[TC4] Address increment across consecutive bursts");
    reset_ven();
    ctrl_vbl = 2'b00;  // 1-beat, so each AR increments by 4 bytes
    // Capture two consecutive AR transactions without draining in between
    // (the master will issue them back-to-back as FIFO has room)
    @(posedge arvalid); first_addr  = araddr;
    @(negedge arvalid); // wait for this AR to complete (arready accepted)
    @(posedge arvalid); second_addr = araddr;
    $display("  [DBG] first=0x%08x second=0x%08x delta=%0d",
             first_addr, second_addr, second_addr-first_addr);
    check("address increments by 4 bytes", second_addr === first_addr + 32'd4);
    wait(mem_state == MS_IDLE); drain(8); // drain the frame

    // ============================================================
    // TC5: ImDone / vmem_switch fires at frame boundary
    //      Frame = HPIX * VPIX = 4 * 2 = 8 beats
    // ============================================================
    $display("[TC5] ImDone / vmem_switch at frame boundary");
    reset_ven();
    ctrl_vbl  = 2'b00;  // 1 beat per burst → 8 bursts for 8-beat frame
    ctrl_vbsw = 0;
    got_switch = 0;
    // Count vmem_switch
    fork
        begin
            @(posedge vmem_switch);
            got_switch = 1;
        end
        begin
            drain(8);  // consume exactly one full frame
        end
    join
    check("vmem_switch fires after 8 beats", got_switch === 1'b1);

    // ============================================================
    // TC6: Video bank switching VBAa → VBAb
    // ============================================================
    $display("[TC6] Video bank switching (VBAa/VBAb)");
    reset_ven();
    ctrl_vbl  = 2'b00;
    ctrl_vbsw = 1;

    // After reset_ven, vmemA=VBAa. First AR should be at VBAa.
    @(posedge arvalid);
    $display("  [DBG] Frame1 araddr=0x%08x  VBAa<<2=0x%08x",
             araddr, {VBAa, 2'b00});
    // Accept the first arvalid regardless of exact beat (may be frame start)
    check("Frame1 AR is within VBAa framebuffer",
          araddr >= {VBAa, 2'b00} && araddr < {VBAb, 2'b00});
    wait(mem_state == MS_IDLE); drain(1);

    // Drain the rest of frame 1 (7 more beats) and wait for switch
    for (loop_b = 1; loop_b < 8; loop_b = loop_b + 1) begin
        wait(!fb_empty);
        @(posedge clk); fb_rreq <= 1;
        @(posedge clk); fb_rreq <= 0;
        @(posedge clk);
    end
    // Wait for the vmem_switch pulse
    tcnt = 0;
    while (!vmem_switch && tcnt < 2000) begin @(posedge clk); tcnt = tcnt+1; end
    @(posedge clk);
    check("stat_avmp = 1 after frame1", stat_avmp === 1'b1);

    // TC6b: After vmem_switch + dImDoneStrb (2 cycles), vmemA = VBAb.
    // Wait for master to issue the first AR in frame2.
    // Drain outstanding frame1 beats from FIFO first.
    repeat(8) @(posedge clk);  // allow dImDoneStrb and vmemA reload
    // Wait for next arvalid and verify it's in VBAb space
    tcnt = 0;
    while (!arvalid && tcnt < 5000) begin @(posedge clk); tcnt = tcnt+1; end
    $display("  [DBG] Frame2 araddr=0x%08x  VBAb<<2=0x%08x (after %0d cycles)",
             araddr, {VBAb, 2'b00}, tcnt);
    check("Frame2 AR is within VBAb framebuffer", araddr >= {VBAb, 2'b00});
    drain(1);
    ctrl_vbsw = 0;


    // ============================================================
    // TC7: AXI error (rresp=SLVERR) → sint pulse
    // ============================================================
    $display("[TC7] AXI error (rresp=SLVERR) -> sint");
    reset_ven();
    ctrl_vbl   = 2'b00;
    inject_err = 1;       // next memory response will be SLVERR
    // Use timeout-safe wait: sint is a 1-cycle pulse
    tcnt = 0;
    while (!sint && tcnt < 2000) begin @(posedge clk); tcnt = tcnt+1; end
    check("sint asserted on SLVERR", tcnt < 2000);

    // ============================================================
    // Summary
    // ============================================================
    $display("\n========================================");
    $display(" Results: %0d passed, %0d failed", pass_count, fail_count);
    $display("========================================\n");
    if (fail_count == 0) $display("ALL TESTS PASSED\n");
    else                 $display("SOME TESTS FAILED\n");

    #200;
    $finish;
end

initial begin
    #2000000;
    $display("[ERROR] Timeout!");
    $finish;
end

endmodule
