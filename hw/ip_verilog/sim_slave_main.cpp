// =================================================================
// Verilator C++ simulation harness — tick-based clock driver
// Works with --timing to properly drive posedge/negedge events.
// =================================================================
#include "Vvga_axi_slave_tb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

static vluint64_t sim_time = 0;

// Called by Verilated code when $time is needed
double sc_time_stamp() { return sim_time; }

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vvga_axi_slave_tb* dut = new Vvga_axi_slave_tb;

    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("slave_tb.vcd");

    // Run until $finish or timeout (200,000 half-periods = 100,000 ns)
    const vluint64_t MAX_TIME = 200000ULL;

    while (!Verilated::gotFinish() && sim_time < MAX_TIME) {
        // Advance simulation by one time unit (half-period)
        dut->eval();
        tfp->dump(sim_time);
        sim_time++;
    }

    if (!Verilated::gotFinish())
        printf("[WARN] Simulation timed out at t=%llu\n",
               (unsigned long long)sim_time);

    tfp->close();
    dut->final();
    delete dut;
    return 0;
}
