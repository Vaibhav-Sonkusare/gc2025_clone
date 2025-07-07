# <b>Ganga</b>

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
  $ git clone https://gitlab.com/shaktiproject/sos.git
  $ cd sos/
  $ make build BOARD=<board>
```

<b>Supported Boards:</b>


1. ARTY-A7-100T which can be passed as BOARD=arty_a7_ganga


