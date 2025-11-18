# <b>GC2025</b>

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

<b>To Build MCS File for Yamuna:</b>

```
  $ git clone https://gitlab.com/shaktiproject/gc2025.git
  $ cd gc2025/hw
  $ make build BOARD=arty_a7_yamuna XLEN_build=32
```
For nexys_video support pass BOARD=nexys_video 

<b>To Build MCS File for Ganga:</b>

```
  $ git clone https://gitlab.com/shaktiproject/gc2025.git
  $ cd gc2025/hw
  $ make build BOARD=arty_a7_ganga
```
For nexys_video support pass BOARD=nexys_video 

<b>Simulation for Yamuna SoC:</b>

```
  $ git clone https://gitlab.com/shaktiproject/gc2025.git
  $ cd gc2025/hw
  $ make build_sim BOARD=arty_a7_yamuna XLEN_build=32
```
For nexys_video support pass BOARD=nexys_video 

<b>GDB Simulation for Yamuna SoC:</b>

```
  $ git clone https://gitlab.com/shaktiproject/gc2025.git
  $ cd gc2025/hw
  $ make build_sim_gdb BOARD=arty_a7_yamuna XLEN_build=32
```
For nexys_video support pass BOARD=nexys_video 

<b>Simulation for Ganga SoC:</b>

```
  $ git clone https://gitlab.com/shaktiproject/gc2025.git
  $ cd gc2025/hw
  $ make build_sim BOARD=arty_a7_ganga
```
For nexys_video support pass BOARD=nexys_video 

<b>GDB Simulation for Ganga SoC:</b>

```
  $ git clone https://gitlab.com/shaktiproject/gc2025.git
  $ cd gc2025/hw
  $ make build_sim_gdb BOARD=arty_a7_ganga
```
For nexys_video support pass BOARD=nexys_video 

<b>To Perform Simulation (code.mem):</b>

```
After building Simulation for Ganga/Yamuna SoC, to generate the code.mem follow the steps below,

.. code-block:: shell-session
  
  $ elf2hex 4 32768 hello.shakti 2147483648 > code.mem #Only for Yamuna SoC 
  $ elf2hex 8 32768 hello.shakti 2147483648 > code.mem #Only for Ganga SoC

Place the generated code.mem in the bin directory, then follow the below steps,

.. code-block:: shell-session
  $ cd bin
  $ ./out +trace  #to enable waveform dumping in the logs directory

The print statements in the code will be printed in the app_log file in the bin directory
```

<b>To Build MCS File for Nexys A7:</b>

```
  $ git clone https://gitlab.com/shaktiproject/gc2025.git
  $ cd gc2025/hw
  $ make build BOARD=nexys_a7 XLEN_build=32
```

<b>To Build RTL for Yamuna [ASIC]:</b>

```
  $ git clone https://gitlab.com/shaktiproject/gc2025.git
  $ cd gc2025/hw
  $ make yamuna_asic XLEN_build=32
```

<b>Supported Boards:</b>


1. ARTY-A7-100T which can be passed as BOARD=arty_a7
2. ARTY-A7-100T with FPU which can be passed as BOARD=arty\_a7_fpu
3. Virtix Ultrascale+ VCU118 which can be passed as BOARD=vcu118
4. proFPGA using Virtix Ultrascale which can be passed as BOARD=profpga

Note:
1. To run simulation with linux as payload change the BRAM size to 2^28 in TbSoc.bsv
2. Do not run for any other board after building for ARTY-A7-100T-FPU.
