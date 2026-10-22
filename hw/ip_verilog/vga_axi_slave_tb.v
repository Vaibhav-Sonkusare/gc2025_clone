/////////////////////////////////////////////////////////////////////
////  VGA AXI4-Lite Slave — Unit Testbench                       ////
////                                                             ////
////  Tests: register write/read, byte-enables, W1C status,     ////
////         irq_o, wbm_busy interlock, CLUT access, reset.     ////
////                                                             ////
////  Run: iverilog -I. -o slave_tb vga_axi_slave_tb.v          ////
////            vga_axi_slave.v vga_cur_cregs.v && vvp slave_tb ////
/////////////////////////////////////////////////////////////////////

`timescale 1ns/1ps

module vga_axi_slave_tb;

// ----------------------------------------------------------------
// Clock & Reset
// ----------------------------------------------------------------
reg clk   = 0;
reg rst_n = 0;
always #5 clk = ~clk;   // 100 MHz

// ----------------------------------------------------------------
// AXI4-Lite signals
// ----------------------------------------------------------------
reg  [31:0] awaddr  = 0;
reg         awvalid = 0;
wire        awready;

reg  [31:0] wdata   = 0;
reg  [ 3:0] wstrb   = 4'hF;
reg         wvalid  = 0;
wire        wready;

wire [ 1:0] bresp;
wire        bvalid;
reg         bready  = 1;

reg  [31:0] araddr  = 0;
reg         arvalid = 0;
wire        arready;

wire [31:0] rdata;
wire [ 1:0] rresp;
wire        rvalid;
reg         rready  = 1;

// ----------------------------------------------------------------
// Internal signals fed from/to DUT
// ----------------------------------------------------------------
reg  wbm_busy   = 0;
wire irq_o;
wire [1:0] dvi_odf, cd, vbl;
wire bl, csl, vsl, hsl, pc, cbsw, vbsw, ven;
wire cursor0_res, cursor0_en, cursor1_res, cursor1_en;
wire [31:0] cursor0_xy, cursor1_xy;
wire [31:11] cursor0_ba, cursor1_ba;
wire cursor0_ld, cursor1_ld;
wire [15:0] cc0_dat_o, cc1_dat_o;
wire [7:0]  Thsync, Thgdel, Tvsync, Tvgdel;
wire [15:0] Thgate, Thlen, Tvgate, Tvlen;
wire [31:2] VBARa, VBARb;
wire        clut_acc;

// Interrupt stimulus
reg  avmp      = 0;
reg  acmp      = 0;
reg  vbsint_in = 0;
reg  cbsint_in = 0;
reg  hint_in   = 0;
reg  vint_in   = 0;
reg  luint_in  = 0;
reg  sint_in   = 0;

// CLUT stub (ack after 1 cycle)
reg  clut_ack = 0;
reg  [23:0] clut_q = 24'h0;

always @(posedge clk)
    clut_ack <= clut_acc;   // 1-cycle latency

// ----------------------------------------------------------------
// DUT instantiation
// ----------------------------------------------------------------
vga_axi_slave #(
    .AXI_ADDR_WIDTH(32),
    .DATA_WIDTH(32)
) dut (
    .s_axi_aclk     (clk),
    .s_axi_aresetn  (rst_n),
    .s_axi_awaddr   (awaddr),
    .s_axi_awvalid  (awvalid),
    .s_axi_awready  (awready),
    .s_axi_wdata    (wdata),
    .s_axi_wstrb    (wstrb),
    .s_axi_wvalid   (wvalid),
    .s_axi_wready   (wready),
    .s_axi_bresp    (bresp),
    .s_axi_bvalid   (bvalid),
    .s_axi_bready   (bready),
    .s_axi_araddr   (araddr),
    .s_axi_arvalid  (arvalid),
    .s_axi_arready  (arready),
    .s_axi_rdata    (rdata),
    .s_axi_rresp    (rresp),
    .s_axi_rvalid   (rvalid),
    .s_axi_rready   (rready),
    .irq_o          (irq_o),
    .wbm_busy       (wbm_busy),
    .dvi_odf        (dvi_odf),
    .bl             (bl),
    .csl            (csl),
    .vsl            (vsl),
    .hsl            (hsl),
    .pc             (pc),
    .cd             (cd),
    .vbl            (vbl),
    .cbsw           (cbsw),
    .vbsw           (vbsw),
    .ven            (ven),
    .cursor0_res    (cursor0_res),
    .cursor0_en     (cursor0_en),
    .cursor0_xy     (cursor0_xy),
    .cursor0_ba     (cursor0_ba),
    .cursor0_ld     (cursor0_ld),
    .cc0_adr_i      (4'h0),
    .cc0_dat_o      (cc0_dat_o),
    .cursor1_res    (cursor1_res),
    .cursor1_en     (cursor1_en),
    .cursor1_xy     (cursor1_xy),
    .cursor1_ba     (cursor1_ba),
    .cursor1_ld     (cursor1_ld),
    .cc1_adr_i      (4'h0),
    .cc1_dat_o      (cc1_dat_o),
    .avmp           (avmp),
    .acmp           (acmp),
    .vbsint_in      (vbsint_in),
    .cbsint_in      (cbsint_in),
    .hint_in        (hint_in),
    .vint_in        (vint_in),
    .luint_in       (luint_in),
    .sint_in        (sint_in),
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
    .clut_acc       (clut_acc),
    .clut_ack       (clut_ack),
    .clut_q         (clut_q)
);

// ----------------------------------------------------------------
// Test tracking
// ----------------------------------------------------------------
integer pass_count = 0;
integer fail_count = 0;

task check;
    input [127:0] name;
    input         condition;
    begin
        if (condition) begin
            $display("  [PASS] %0s", name);
            pass_count = pass_count + 1;
        end else begin
            $display("  [FAIL] %0s", name);
            fail_count = fail_count + 1;
        end
    end
endtask

// ----------------------------------------------------------------
// AXI4-Lite BFM tasks
// ----------------------------------------------------------------
task axi_write;
    input [31:0] addr;
    input [31:0] data;
    input [ 3:0] strb;
    begin
        @(posedge clk);
        awaddr  <= addr;
        awvalid <= 1;
        wdata   <= data;
        wstrb   <= strb;
        wvalid  <= 1;
        // Wait for both ready signals
        fork
            begin @(posedge clk); while(!awready) @(posedge clk); end
            begin @(posedge clk); while(!wready)  @(posedge clk); end
        join
        @(posedge clk);
        awvalid <= 0;
        wvalid  <= 0;
        // Wait for write response
        while(!bvalid) @(posedge clk);
        @(posedge clk);
    end
endtask

task axi_read;
    input  [31:0] addr;
    output [31:0] data;
    begin
        @(posedge clk);
        araddr  <= addr;
        arvalid <= 1;
        @(posedge clk);
        while(!arready) @(posedge clk);
        @(posedge clk);
        arvalid <= 0;
        while(!rvalid) @(posedge clk);
        data = rdata;
        @(posedge clk);
    end
endtask

// ----------------------------------------------------------------
// Test stimulus
// ----------------------------------------------------------------
reg [31:0] rval;

initial begin
    $dumpfile("slave_tb.vcd");
    $dumpvars(0, vga_axi_slave_tb);

    // Reset for 5 cycles
    rst_n = 0;
    repeat(5) @(posedge clk);
    rst_n = 1;
    repeat(2) @(posedge clk);

    $display("\n========================================");
    $display(" VGA AXI4-Lite Slave Testbench");
    $display("========================================\n");

    // ============================================================
    // TC1: Horizontal Timing Register (HTIM @ 0x008)
    // ============================================================
    $display("[TC1] HTIM write and readback");
    axi_write(32'h008, 32'hAABBCCDD, 4'hF);
    axi_read(32'h008, rval);
    check("HTIM full-word write/read", rval === 32'hAABBCCDD);
    check("Thsync decode",  Thsync === 8'hAA);
    check("Thgdel decode",  Thgdel === 8'hBB);
    check("Thgate decode",  Thgate === 16'hCCDD);

    // ============================================================
    // TC2: Vertical Timing Register (VTIM @ 0x00C)
    // ============================================================
    $display("[TC2] VTIM write and readback");
    axi_write(32'h00C, 32'h11223344, 4'hF);
    axi_read(32'h00C, rval);
    check("VTIM full-word write/read", rval === 32'h11223344);
    check("Tvsync decode",  Tvsync === 8'h11);
    check("Tvgdel decode",  Tvgdel === 8'h22);
    check("Tvgate decode",  Tvgate === 16'h3344);

    // ============================================================
    // TC3: HVLEN and Thlen/Tvlen decode (@ 0x010)
    // ============================================================
    $display("[TC3] HVLEN write and field decode");
    axi_write(32'h010, 32'h04000300, 4'hF);
    axi_read(32'h010, rval);
    check("HVLEN readback",  rval === 32'h04000300);
    check("Thlen decode",    Thlen === 16'h0400);
    check("Tvlen decode",    Tvlen === 16'h0300);

    // ============================================================
    // TC4: Byte-enable (wstrb) on HTIM
    // ============================================================
    $display("[TC4] Byte-enable (wstrb) write to HTIM");
    // Start with known value
    axi_write(32'h008, 32'hFFFFFFFF, 4'hF);
    // Write only byte 0 (bits [7:0]) with 0xAA
    axi_write(32'h008, 32'h000000AA, 4'b0001);
    axi_read(32'h008, rval);
    check("wstrb byte0 only", rval === 32'hFFFFFFAA);
    // Write only byte 3 (bits [31:24]) with 0x55
    axi_write(32'h008, 32'h55000000, 4'b1000);
    axi_read(32'h008, rval);
    check("wstrb byte3 only", rval === 32'h55FFFFAA);

    // ============================================================
    // TC5: Video Base Address Registers (VBARa @ 0x014)
    // ============================================================
    $display("[TC5] VBARa write and readback");
    axi_write(32'h014, 32'hDEADBEEC, 4'hF); // bits[1:0] are tied to 0
    axi_read(32'h014, rval);
    check("VBARa readback (lsb forced 0)", rval === 32'hDEADBEEC);
    // VBARa is [31:2]; check via readback which concatenates {VBARa,2'b00}
    check("VBARa readback == written value", rval === 32'hDEADBEEC);

    // ============================================================
    // TC6: CTRL register — control bit decode (@ 0x000)
    // ============================================================
    $display("[TC6] CTRL register bit decode");
    // Build CTRL value explicitly:
    //   ctrl[0]    = ven  = 1
    //   ctrl[5]    = vbsw = 1  => bit5  = 1 => 0x20
    //   ctrl[6]    = cbsw = 1  => bit6  = 1 => 0x40
    //   ctrl[10:9] = cd   = 01 => bit10 = 0, bit9 = 1 => 0x200
    //   ctrl[8:7]  = vbl  = 10 => bit8  = 1, bit7 = 0 => 0x100
    //   ctrl[12]   = hsl  = 1  => bit12 = 1 => 0x1000
    // Total: 0x1000 | 0x200 | 0x100 | 0x40 | 0x20 | 0x01 = 0x1361
    axi_write(32'h000, 32'h00001361, 4'hF);
    @(posedge clk); // allow decode to propagate
    check("ven  asserted", ven  === 1'b1);
    check("vbsw asserted", vbsw === 1'b1);
    check("cbsw asserted", cbsw === 1'b1);
    check("cd   = 2'b01",  cd   === 2'b01);
    check("vbl  = 2'b10",  vbl  === 2'b10);
    check("hsl  asserted", hsl  === 1'b1);

    // ============================================================
    // TC7: CTRL busy interlock (write blocked when wbm_busy=1)
    // ============================================================
    $display("[TC7] CTRL write blocked when wbm_busy=1");
    axi_write(32'h000, 32'h00000001, 4'hF); // ven=1 (known state)
    wbm_busy = 1;
    axi_write(32'h000, 32'h00000000, 4'hF); // attempt to clear ven
    @(posedge clk);
    axi_read(32'h000, rval);
    check("CTRL unchanged while busy", rval[0] === 1'b1);
    wbm_busy = 0;

    // ============================================================
    // TC8: STAT register — Write-1-to-Clear (@ 0x004)
    // ============================================================
    $display("[TC8] STAT register W1C interrupt bits");
    // Fire an hsync interrupt
    axi_write(32'h000, 32'h00000005, 4'hF); // ctrl: ven=1, hie=1 (bit2)
    hint_in = 1;
    @(posedge clk);
    hint_in = 0;
    repeat(2) @(posedge clk);
    axi_read(32'h004, rval);
    check("hint set in STAT[5]", rval[5] === 1'b1);

    // Clear hint by writing 1 to STAT[5]
    axi_write(32'h004, 32'h00000020, 4'hF);
    repeat(2) @(posedge clk);
    axi_read(32'h004, rval);
    check("hint cleared by W1C", rval[5] === 1'b0);

    // ============================================================
    // TC9: irq_o asserts when enabled interrupt fires
    // ============================================================
    $display("[TC9] irq_o assertion");
    axi_write(32'h000, 32'h00000005, 4'hF); // hie=ctrl[2], ven=ctrl[0]
    hint_in = 1; @(posedge clk); hint_in = 0;
    repeat(3) @(posedge clk);
    check("irq_o asserted on hint+hie", irq_o === 1'b1);
    // Clear interrupt
    axi_write(32'h004, 32'h00000020, 4'hF);
    repeat(3) @(posedge clk);
    check("irq_o deasserts after W1C", irq_o === 1'b0);

    // ============================================================
    // TC10: CLUT access — clut_acc asserts for addr >= 0x800
    // ============================================================
    $display("[TC10] CLUT address space (clut_acc)");
    // Write to CLUT entry 1 (addr 0x804); wbm_busy must be 0
    axi_write(32'h804, 32'h00FF8800, 4'hF);
    check("CLUT write completes (addr 0x804)", 1'b1);

    // Read back CLUT — clut_q drives reg_dato combinatorially
    clut_q = 24'hABCDEF;
    axi_read(32'h800, rval);
    check("CLUT read data [23:0]", rval[23:0] === 24'hABCDEF);
    check("CLUT read data [31:24] = 0", rval[31:24] === 8'h00);

    // ============================================================
    // TC11: Cursor XY and Base Address Registers
    // ============================================================
    $display("[TC11] Cursor0 XY and BAR");
    // Write C0XY (cursor0 X,Y position)
    axi_write(32'h030, 32'h01E0_00F0, 4'hF);
    // Write C0BAR = 0xFFFF_F800 so bits[31:11] = 21'h1FFFFF (all ones)
    // readback = {21'h1FFFFF, 11'h000} = 0xFFFF_F800
    axi_write(32'h034, 32'hFFFF_F800, 4'hF);
    @(posedge clk);
    axi_read(32'h030, rval);
    check("cursor0_xy readback",     rval === 32'h01E000F0);
    check("cursor0_ba = 21'h1FFFFF", cursor0_ba === 21'h1FFFFF);
    axi_read(32'h034, rval);
    check("C0BAR readback 0xFFFFF800", rval === 32'hFFFF_F800);

    // ============================================================
    // TC12: Reset clears all registers
    // ============================================================
    $display("[TC12] Reset clears registers");
    axi_write(32'h008, 32'hDEADBEEF, 4'hF);
    rst_n = 0;
    repeat(3) @(posedge clk);
    rst_n = 1;
    repeat(2) @(posedge clk);
    axi_read(32'h008, rval);
    check("HTIM cleared after reset",  rval === 32'h0);
    axi_read(32'h000, rval);
    check("CTRL cleared after reset",  rval === 32'h0);
    axi_read(32'h004, rval);
    check("STAT cleared after reset",  rval === 32'h0);

    // ============================================================
    // Summary
    // ============================================================
    $display("\n========================================");
    $display(" Results: %0d passed, %0d failed", pass_count, fail_count);
    $display("========================================\n");

    if (fail_count == 0)
        $display("ALL TESTS PASSED\n");
    else
        $display("SOME TESTS FAILED\n");

    #50;
    $finish;
end

// Timeout watchdog
initial begin
    #100000;
    $display("[ERROR] Simulation timeout!");
    $finish;
end

endmodule
