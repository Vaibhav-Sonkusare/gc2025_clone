`timescale 1ns/1ps

module gpio_tb;

    // Parameters
    localparam WIDTH = 32;

    // DUT I/O
    reg                  clk;
    reg                  rst_n;
    reg  [WIDTH-1:0]     gpio_ip;
    wire [WIDTH-1:0]     gpio_op;
    wire [WIDTH-1:0]     gpio_en;
    
    // Instantiate DUT
    gpio #(
        .WIDTH(WIDTH)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .gpio_ip(gpio_ip),
        .gpio_op(gpio_op),
        .gpio_en(gpio_en)
    );

    // Internal access signals (regs inside DUT are made accessible via hierarchical ref)
    // NOTE: In real SoC, these would be memory-mapped registers.
    // Here, we drive them directly from testbench for simplicity.
    wire [WIDTH-1:0] dir      = dut.dir;
    wire [WIDTH-1:0] set      = dut.set;
    wire [WIDTH-1:0] clear    = dut.clear;
    wire [WIDTH-1:0] read_val = dut.read_data;
    wire [WIDTH-1:0] gpio_out = dut.gpio_out;

    
    // Clock generation
    always #5 clk = ~clk;  // 100 MHz

    // Test stimulus
    initial begin
        $display("=== GPIO TEST START ===");
        clk = 0;
        rst_n = 0;
        gpio_ip = 0;

        // Initialize DUT internal registers
        dut.dir   = 32'b0;
        dut.set   = 32'b0;
        dut.clear = 32'b0;

        // Apply reset
        #20;
        rst_n = 1;
        #10;

        // Step 1: Configure direction (lower 16 bits output, upper 16 bits input)
        $display("[%0t] Setting DIR...", $time);
        dut.dir = 32'h0000_FFFF;  // bits[15:0] -> output, bits[31:16] -> input
        #10;

        // Step 2: Set some output bits high
        $display("[%0t] Setting output bits 0,2,4,6 high...", $time);
        dut.set = 32'h0000_0055;  // binary: 0101_0101
        #10;
        dut.set = 0;  // clear set control after one cycle

        // Step 3: Clear some bits low
        $display("[%0t] Clearing output bits 2 and 6...", $time);
        dut.clear = 32'h0000_0044;
        #10;
        dut.clear = 0;

        // Step 4: Simulate external inputs
        $display("[%0t] Driving external GPIO inputs...", $time);
        gpio_ip = 32'hABCD_0000;  // upper bits act as inputs
        #10;

        // Step 5: Read current internal state
        $display("[%0t] gpio_out   = %h", $time, gpio_out);
        $display("[%0t] gpio_en    = %h", $time, gpio_en);
        $display("[%0t] gpio_op    = %h", $time, gpio_op);
        $display("[%0t] read_data  = %h", $time, read_val);

        // Step 6: Toggle direction mid-way
        $display("[%0t] Changing DIR to all output...", $time);
        dut.dir = 32'hFFFF_FFFF;
        #10;
        dut.set = 32'hAAAA_AAAA;
        #10;
        dut.set = 0;

        // Observe
        $display("[%0t] gpio_out   = %h", $time, gpio_out);
        $display("[%0t] gpio_op    = %h", $time, gpio_op);
        $display("[%0t] gpio_en    = %h", $time, gpio_en);

        // Step 7: Finish
        #20;
        $display("=== GPIO TEST COMPLETE ===");
        $finish;
    end

endmodule

