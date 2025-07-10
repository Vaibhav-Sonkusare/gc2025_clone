# <b>Shakti on Shakti</b>

### <b>Maintained by : RISE/Shakti Lab, Indian Institute of Technology, Madras</b>

Please follow the following steps to generate bitstream and MCS for the supported boards.

The serial communication happens using uart0 connected to the FPGA which
communicate to the host system through the micro-USB port.

The debug interface of the processor is connected to the Xilinx JTAG tap, which in-turn is time
multiplexed with uart0, and is connected to the micro-USB port. This configuration let’s us to
not have dedicated JTAG pins, thereby eliminating the need for an external JTAG Debug probe (like J-Link).

The DDR controller (of Xilinx) uses the default pin configuration as specified by Digilent.

The Ethernet controller (of Xilinx) uses the default ping configuraion as specified by Digilent

For more SoC related details please view README.rst

<b>To Build MCS File:</b>

```
  $ git clone https://gitlab.com/shaktiproject/gc2025.git
  $ cd gc2025/hw_yamuna/
  $ make build BOARD=arty_a7_yamuna XLEN_build=32
```

<b>Supported Boards:</b>


1. ARTY-A7-100T which can be passed as BOARD=arty_a7
2. ARTY-A7-100T with FPU which can be passed as BOARD=arty\_a7_fpu
3. Virtix Ultrascale+ VCU118 which can be passed as BOARD=vcu118
4. proFPGA using Virtix Ultrascale which can be passed as BOARD=profpga

Note:
1. To run simulation with linux as payload change the BRAM size to 2^28 in TbSoc.bsv
2. Do not run for any other board after building for ARTY-A7-100T-FPU.
