## This file is a general .xdc for the Arty A7-100 Rev. D
## To use it in a project:
## - uncomment the lines corresponding to used pins
## - rename the used ports (in each line, after get_ports) according to the top level signal names in the project

set_property CLOCK_DEDICATED_ROUTE BACKBONE [get_nets sys_clk_IBUF]

set_property -dict { PACKAGE_PIN G4  IOSTANDARD LVCMOS15 } [get_ports { sys_rst }]; #IO_L12N_T1_MRCC_35 Sch=cpu_resetn

### UART
set_property -dict { PACKAGE_PIN AA19  IOSTANDARD LVCMOS33 } [get_ports { uart0_SOUT }]; #IO_L15P_T2_DQS_RDWR_B_14 Sch=uart_rx_out
set_property -dict { PACKAGE_PIN V18   IOSTANDARD LVCMOS33 } [get_ports { uart0_SIN }]; #IO_L14P_T2_SRCC_14 Sch=uart_tx_in# set_property -dict {PACKAGE_PIN AD20 IOSTANDARD LVCMOS18} [get_ports CLK];

