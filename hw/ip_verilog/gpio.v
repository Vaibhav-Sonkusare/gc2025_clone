//==============================================================
// Simple GPIO Module
// Features:
//  - Configurable direction (input/output)
//  - Set and Clear operations
//  - Read input values
//==============================================================
module gpio #(
    parameter WIDTH = 32  // Number of GPIO pins
)(
    input  wire              clk,
    input  wire              rst_n,

    // GPIO physical pins
    input  wire [WIDTH-1:0]  gpio_ip,
    output wire  [WIDTH-1:0]  gpio_op,
    output wire  [WIDTH-1:0]  gpio_en
);

    // Internal register to hold output values
    reg [WIDTH-1:0] gpio_out;
    
    // Control Registers
    reg [WIDTH-1:0] dir;        // 1 = output, 0 = input
    reg [WIDTH-1:0] set;        // Bit mask to set output high
    reg [WIDTH-1:0] clear;      // Bit mask to set output low
    reg [WIDTH-1:0] read_data;  // Read current GPIO Input pin value

    //==============================================================
    // Update output values using SET and CLEAR
    //==============================================================
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            gpio_out <= {WIDTH{1'b0}};
            dir      <= {WIDTH{1'b0}};
            set      <= {WIDTH{1'b0}};
            clear    <= {WIDTH{1'b0}};
            read_data <= {WIDTH{1'b0}};
        end
        else begin
            // Set bits high
            gpio_out <= (gpio_out | set) & ~clear;
            read_data <= gpio_ip;
        end
    end

    //==============================================================
    // Tri-state buffer logic for GPIO pins
    //==============================================================
    genvar i;
    generate
        for (i = 0; i < WIDTH; i = i + 1) begin : GPIO_DIR
            assign gpio_op[i] = dir[i] ? gpio_out[i] : 1'b0;  // Output or Hi-Z
            assign gpio_en [i] = dir[i];
        end
    endgenerate


endmodule

