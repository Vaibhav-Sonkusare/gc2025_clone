//==============================================================
// Simple GPIO Module
// Features:
//  - Configurable direction (input/output)
//  - Set and Clear operations
//  - Read input values
//==============================================================

`include "gpio_defs.v"

module gpio_axilite #(
    parameter WIDTH = 32,  // Number of GPIO pins
    parameter AXI_ADDR_WIDTH = 32,
    parameter ADDR_WIDTH = 8,
    parameter DATA_WIDTH = 32
)(
    input  wire              clk,
    input  wire              rst_n,

    // GPIO physical pins
    input  wire [WIDTH-1:0]  gpio_ip,
    output wire  [WIDTH-1:0]  gpio_op,
    output wire  [WIDTH-1:0]  gpio_en,
    
    //AXI Lite Signals
    input  wire                   s_axi_aclk,
    input  wire                   s_axi_aresetn,

    // Write address channel
    input  wire [AXI_ADDR_WIDTH-1:0]  s_axi_awaddr,
    input  wire                   s_axi_awvalid,
    output reg                    s_axi_awready,

    // Write data channel
    input  wire [DATA_WIDTH-1:0]  s_axi_wdata,
    input  wire [(DATA_WIDTH/8)-1:0] s_axi_wstrb,
    input  wire                   s_axi_wvalid,
    output reg                    s_axi_wready,

    // Write response channel
    output reg [1:0]              s_axi_bresp,
    output reg                    s_axi_bvalid,
    input  wire                   s_axi_bready,

    // Read address channel
    input  wire [AXI_ADDR_WIDTH-1:0]  s_axi_araddr,
    input  wire                   s_axi_arvalid,
    output reg                    s_axi_arready,

    // Read data channel
    output reg [DATA_WIDTH-1:0]   s_axi_rdata,
    output reg [1:0]              s_axi_rresp,
    output reg                    s_axi_rvalid,
    input  wire                   s_axi_rready
);

    // Internal register to hold output values
    reg [WIDTH-1:0] gpio_out;
    
    // Control Registers
    reg [WIDTH-1:0] dir;        // 1 = output, 0 = input
    reg [WIDTH-1:0] set;        // Bit mask to set output high
    reg [WIDTH-1:0] clear;      // Bit mask to set output low
    reg [WIDTH-1:0] read_data;  // Read current GPIO Input pin value

    // Write Address and Read Address registers
    reg [ADDR_WIDTH-1:0] awaddr_reg;
    reg [ADDR_WIDTH-1:0] araddr_reg;
    

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
    
     // AXI4-Lite write address handshake
    always @(posedge s_axi_aclk or negedge s_axi_aresetn) begin
        if (!s_axi_aresetn) begin
            s_axi_awready <= 0;
            awaddr_reg <= 0;
        end else begin
            if (~s_axi_awready && s_axi_awvalid) begin
                s_axi_awready <= 1;
                awaddr_reg <= s_axi_awaddr[7:0];
            end else begin
                s_axi_awready <= 0;
            end
        end
    end

    // AXI4-Lite write data handshake
    always @(posedge s_axi_aclk or negedge s_axi_aresetn) begin
        if (!s_axi_aresetn) begin
            s_axi_wready <= 0;
        end else begin
            if (~s_axi_wready && s_axi_wvalid) begin
                s_axi_wready <= 1;
            end 
            else begin
                s_axi_wready <= 0;
            end
        end
    end
    
    always @(posedge s_axi_aclk or negedge s_axi_aresetn) begin
    	if (!s_axi_aresetn) 
    	  begin
            s_axi_wready <= 0;
            dir <= 0;
            set <= 0;
            clear <= 0;
            read_data <= 0;
          end
    	else if (s_axi_wready) 
    	  begin
        	case (awaddr_reg[7:0])

                    `DIRECTION:
                    begin
                        if (s_axi_wstrb[0]) dir[7:0]   <= s_axi_wdata[7:0];
                        if (s_axi_wstrb[1]) dir[15:8]  <= s_axi_wdata[15:8];
                        if (s_axi_wstrb[2]) dir[23:16] <= s_axi_wdata[23:16];
                        if (s_axi_wstrb[3]) dir[31:24] <= s_axi_wdata[31:24];
                    end

                    `SET:
                    begin
                        if (s_axi_wstrb[0]) set[7:0]   <= s_axi_wdata[7:0];
                        if (s_axi_wstrb[1]) set[15:8]  <= s_axi_wdata[15:8];
                        if (s_axi_wstrb[2]) set[23:16] <= s_axi_wdata[23:16];
                        if (s_axi_wstrb[3]) set[31:24] <= s_axi_wdata[31:24];
                    end

                    `CLEAR:
                    begin
                        if (s_axi_wstrb[0]) clear[7:0]   <= s_axi_wdata[7:0];
                        if (s_axi_wstrb[1]) clear[15:8]  <= s_axi_wdata[15:8];
                        if (s_axi_wstrb[2]) clear[23:16] <= s_axi_wdata[23:16];
                        if (s_axi_wstrb[3]) clear[31:24] <= s_axi_wdata[31:24];
                    end

                    `DATA_IN:
                    begin
                        if (s_axi_wstrb[0]) read_data[7:0]   <= s_axi_wdata[7:0];
                        if (s_axi_wstrb[1]) read_data[15:8]  <= s_axi_wdata[15:8];
                        if (s_axi_wstrb[2]) read_data[23:16] <= s_axi_wdata[23:16];
                        if (s_axi_wstrb[3]) read_data[31:24] <= s_axi_wdata[31:24];
                    end
        	endcase
    	  end
    end
    
    // Write response logic
    always @(posedge s_axi_aclk or negedge s_axi_aresetn) begin
        if (!s_axi_aresetn) begin
            s_axi_bvalid <= 0;
            s_axi_bresp  <= 2'b00; // OKAY
        end else begin
            if (s_axi_awready && s_axi_awvalid &&
                s_axi_wready && s_axi_wvalid && ~s_axi_bvalid) begin
                s_axi_bvalid <= 1;
                s_axi_bresp  <= 2'b00; // OKAY
            end else if (s_axi_bready && s_axi_bvalid) begin
                s_axi_bvalid <= 0;
            end
        end
    end

    // AXI4-Lite read address handshake
    always @(posedge s_axi_aclk or negedge s_axi_aresetn) begin
        if (!s_axi_aresetn) begin
            s_axi_arready <= 0;
            araddr_reg <= 0;
        end else begin
            if (~s_axi_arready && s_axi_arvalid) begin
                s_axi_arready <= 1;
                araddr_reg <= s_axi_araddr[7:0];
            end else begin
                s_axi_arready <= 0;
            end
        end
    end
    
    // AXI4-Lite read data channel
    always @(posedge s_axi_aclk or negedge s_axi_aresetn) begin
        if (!s_axi_aresetn) begin
            s_axi_rvalid <= 0;
            s_axi_rresp  <= 2'b00;
            s_axi_rdata <= 32'b0;
        end else begin
            if (s_axi_arready && s_axi_arvalid && ~s_axi_rvalid) begin
                s_axi_rvalid <= 1;
                s_axi_rresp  <= 2'b00; // OKAY
                   case (araddr_reg[7:0])
                        `DIRECTION:
                        begin
                            s_axi_rdata   <= dir;
                        end

                        `SET:
                        begin
                            s_axi_rdata   <= set;
                        end

                        `CLEAR:
                        begin
                            s_axi_rdata   <= clear;
                        end

                        `DATA_IN:
                        begin
                            s_axi_rdata   <= read_data;
                        end
                        default :
                            s_axi_rdata = 32'b0;
                    endcase
            end 
            else if (s_axi_rvalid && s_axi_rready) begin
                s_axi_rvalid <= 0;
            end
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

