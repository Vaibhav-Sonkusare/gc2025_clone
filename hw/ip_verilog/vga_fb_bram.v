module vga_fb_bram #(
    parameter AW = 17     // 2**17 = 131072 words > 76800 needed
)(
    input  wire         axi_aclk,
    input  wire         axi_aresetn,

    // AXI4 Full slave -- wired in place of the SoC crossbar,
    // directly to vga_axi_top's m_axi_* master port
    input  wire [31:0]  s_axi_araddr,
    input  wire [ 7:0]  s_axi_arlen,
    input  wire         s_axi_arvalid,
    output reg          s_axi_arready,

    output reg  [31:0]  s_axi_rdata,
    output wire [ 1:0]  s_axi_rresp,
    output reg          s_axi_rlast,
    output reg          s_axi_rvalid,
    input  wire         s_axi_rready   // ignored: this master holds rready
                                        // high for the whole burst, so no
                                        // backpressure handling is needed here
);

    assign s_axi_rresp = 2'b00; // always OKAY

    // ================================================================
    // Framebuffer BRAM
    // ================================================================
    wire [AW-1:0] rd_addr;

    reg  [AW-1:0] init_addr;
    reg           init_we;
    reg           init_done;

    localparam TOTAL_WORDS = 17'd76800; // 640*480/4
    localparam BAND_WORDS  = 17'd25600; // TOTAL_WORDS/3

    wire [7:0]  pattern_byte = (init_addr < BAND_WORDS)      ? 8'd0  // red idx
                              : (init_addr < 2*BAND_WORDS)    ? 8'd1  // green idx
                              :                                 8'd2; // blue idx
    wire [31:0] init_data = {4{pattern_byte}};

    always @(posedge axi_aclk) begin
        if (!axi_aresetn) begin
            init_addr <= {AW{1'b0}};
            init_we   <= 1'b0;
            init_done <= 1'b0;
        end else if (!init_done) begin
            init_we <= 1'b1;
            if (init_we) begin
                if (init_addr == TOTAL_WORDS-1)
                    init_done <= 1'b1;
                else
                    init_addr <= init_addr + 1'b1;
            end
        end else begin
            init_we <= 1'b0;
        end
    end

    (* ram_style = "block" *) reg [31:0] fb_mem [0:TOTAL_WORDS-1];
    reg [31:0] rd_data;
    always @(posedge axi_aclk) begin
        if (init_we) fb_mem[init_addr] <= init_data;
        rd_data <= fb_mem[rd_addr];
    end

    // ================================================================
    // AXI4 read FSM: 2 cycles/beat (address, then capture) -- simple and
    // correct rather than fully pipelined; still far more bandwidth than
    // a 25.175 MHz pixel stream needs.
    // ================================================================
    localparam ST_IDLE = 2'd0, ST_ADDR = 2'd1, ST_DATA = 2'd2;
    reg [1:0]    state;
    reg [AW-1:0] addr_ptr;
    reg [7:0]    beats_left;

    assign rd_addr = addr_ptr;

    always @(posedge axi_aclk) begin
        if (!axi_aresetn) begin
            state         <= ST_IDLE;
            s_axi_arready <= 1'b0;
            s_axi_rvalid  <= 1'b0;
            s_axi_rlast   <= 1'b0;
        end else begin
            case (state)
                ST_IDLE: begin
                    s_axi_rvalid <= 1'b0;
                    if (s_axi_arvalid && init_done) begin
                        s_axi_arready <= 1'b1;
                        addr_ptr      <= s_axi_araddr[AW+1:2]; // word addr
                        beats_left    <= s_axi_arlen;
                        state         <= ST_ADDR;
                    end
                end
                ST_ADDR: begin
                    s_axi_arready <= 1'b0;
                    s_axi_rvalid  <= 1'b0;
                    state         <= ST_DATA;   // addr_ptr now presented to BRAM
                end
                ST_DATA: begin
                    s_axi_rdata  <= rd_data;    // valid: 1 cyc after ST_ADDR
                    s_axi_rvalid <= 1'b1;
                    s_axi_rlast  <= (beats_left == 8'd0);
                    if (beats_left == 8'd0) begin
                        state <= ST_IDLE;
                    end else begin
                        addr_ptr   <= addr_ptr + 1'b1;
                        beats_left <= beats_left - 1'b1;
                        state      <= ST_ADDR;
                    end
                end
                default: state <= ST_IDLE;
            endcase
        end
    end

endmodule