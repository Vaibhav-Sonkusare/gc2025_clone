set_property SRC_FILE_INFO {cfile:/home/vaibhav/Documents/shakti/gc2025_ganga_sim_gdb/hw/constraints.xdc rfile:../../../../../constraints.xdc id:1} [current_design]
set_property src_info {type:XDC file:1 line:6 export:INPUT save:INPUT read:READ} [current_design]
set_property CLOCK_DEDICATED_ROUTE BACKBONE [get_nets sys_clk_IBUF]
set_property src_info {type:XDC file:1 line:8 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN G4  IOSTANDARD LVCMOS15 } [get_ports { sys_rst }]; #IO_L12N_T1_MRCC_35 Sch=cpu_resetn
set_property src_info {type:XDC file:1 line:11 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN AA19  IOSTANDARD LVCMOS33 } [get_ports { uart0_SOUT }]; #IO_L15P_T2_DQS_RDWR_B_14 Sch=uart_rx_out
set_property src_info {type:XDC file:1 line:12 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN V18   IOSTANDARD LVCMOS33 } [get_ports { uart0_SIN }]; #IO_L14P_T2_SRCC_14 Sch=uart_tx_in# set_property -dict {PACKAGE_PIN AD20 IOSTANDARD LVCMOS18} [get_ports CLK];
set_property src_info {type:XDC file:1 line:15 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN AB22  IOSTANDARD LVCMOS33 } [get_ports { i2c0_sda }]; #IO_L10N_T1_D15_14 Sch=ja[1]
set_property src_info {type:XDC file:1 line:16 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN AB21  IOSTANDARD LVCMOS33 } [get_ports { i2c0_scl }]; #IO_L10P_T1_D14_14 Sch=ja[2]
set_property src_info {type:XDC file:1 line:17 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN AB20  IOSTANDARD LVCMOS33 } [get_ports { external_clk }]; #IO_L15N_T2_DQS_DOUT_CSO_B_14 Sch=ja[3]
set_property src_info {type:XDC file:1 line:18 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN AB18  IOSTANDARD LVCMOS33 } [get_ports { gptimer0_in  }]; #IO_L17N_T2_A13_D29_14 Sch=ja[4]
set_property src_info {type:XDC file:1 line:19 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN Y21   IOSTANDARD LVCMOS33 } [get_ports { gptimer0_out }]; #IO_L9P_T1_DQS_14 Sch=ja[7]
set_property src_info {type:XDC file:1 line:20 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN AA21  IOSTANDARD LVCMOS33 } [get_ports { gptimer1_in  }]; #IO_L8N_T1_D12_14 Sch=ja[8]
set_property src_info {type:XDC file:1 line:21 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN AA20  IOSTANDARD LVCMOS33 } [get_ports { gptimer1_out }]; #IO_L8P_T1_D11_14 Sch=ja[9]
set_property src_info {type:XDC file:1 line:22 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN AA18  IOSTANDARD LVCMOS33 } [get_ports { gpio_29 }]; #IO_L17P_T2_A14_D30_14 Sch=ja[10]
set_property src_info {type:XDC file:1 line:60 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN V9  IOSTANDARD LVCMOS33 } [get_ports { vga_r[0] }]; #jb_p[1] R0
set_property src_info {type:XDC file:1 line:61 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN V7  IOSTANDARD LVCMOS33 } [get_ports { vga_r[1] }]; #jb_p[2] R1
set_property src_info {type:XDC file:1 line:62 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN W9  IOSTANDARD LVCMOS33 } [get_ports { vga_r[2] }]; #jb_p[3] R2
set_property src_info {type:XDC file:1 line:63 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN Y8  IOSTANDARD LVCMOS33 } [get_ports { vga_r[3] }]; #jb_p[4] R3
set_property src_info {type:XDC file:1 line:64 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN V8  IOSTANDARD LVCMOS33 } [get_ports { vga_g[0] }]; #jb_n[1] G0
set_property src_info {type:XDC file:1 line:65 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN W7  IOSTANDARD LVCMOS33 } [get_ports { vga_g[1] }]; #jb_n[2] G1
set_property src_info {type:XDC file:1 line:66 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN Y9  IOSTANDARD LVCMOS33 } [get_ports { vga_g[2] }]; #jb_n[3] G2
set_property src_info {type:XDC file:1 line:67 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN Y7  IOSTANDARD LVCMOS33 } [get_ports { vga_g[3] }]; #jb_n[4] G3
set_property src_info {type:XDC file:1 line:69 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN Y6  IOSTANDARD LVCMOS33 } [get_ports { vga_b[0] }]; #jc_p[1] B0
set_property src_info {type:XDC file:1 line:70 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN AA8 IOSTANDARD LVCMOS33 } [get_ports { vga_b[1] }]; #jc_p[2] B1
set_property src_info {type:XDC file:1 line:71 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN R6  IOSTANDARD LVCMOS33 } [get_ports { vga_b[2] }]; #jc_p[3] B2
set_property src_info {type:XDC file:1 line:72 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN AB7 IOSTANDARD LVCMOS33 } [get_ports { vga_b[3] }]; #jc_p[4] B3
set_property src_info {type:XDC file:1 line:73 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN AA6 IOSTANDARD LVCMOS33 } [get_ports { vga_hs }];    #jc_n[1] HS
set_property src_info {type:XDC file:1 line:74 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN AB8 IOSTANDARD LVCMOS33 } [get_ports { vga_vs }];    #jc_n[2] VS
set_property src_info {type:XDC file:1 line:77 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN T14   IOSTANDARD LVCMOS25 } [get_ports { gpio_16 }]; #IO_L15P_T2_DQS_13 Sch=led[0]
set_property src_info {type:XDC file:1 line:78 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN T15   IOSTANDARD LVCMOS25 } [get_ports { gpio_17 }]; #IO_L15N_T2_DQS_13 Sch=led[1]
set_property src_info {type:XDC file:1 line:79 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN T16   IOSTANDARD LVCMOS25 } [get_ports { gpio_18 }]; #IO_L17P_T2_13 Sch=led[2]
set_property src_info {type:XDC file:1 line:80 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN U16   IOSTANDARD LVCMOS25 } [get_ports { gpio_19 }]; #IO_L17N_T2_13 Sch=led[3]
set_property src_info {type:XDC file:1 line:81 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN V15   IOSTANDARD LVCMOS25 } [get_ports { gpio_20 }]; #IO_L14N_T2_SRCC_13 Sch=led[4]
set_property src_info {type:XDC file:1 line:82 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN W16   IOSTANDARD LVCMOS25 } [get_ports { gpio_21 }]; #IO_L16N_T2_13 Sch=led[5]
set_property src_info {type:XDC file:1 line:83 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN W15   IOSTANDARD LVCMOS25 } [get_ports { gpio_22 }]; #IO_L16P_T2_13 Sch=led[6]
set_property src_info {type:XDC file:1 line:84 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN Y13   IOSTANDARD LVCMOS25 } [get_ports { gpio_23 }]; #IO_L5P_T0_13 Sch=led[7]
set_property src_info {type:XDC file:1 line:88 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN B22 IOSTANDARD LVCMOS12 } [get_ports { gpio_24 }]; #IO_L20N_T3_16 Sch=btnc
set_property src_info {type:XDC file:1 line:89 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN D22 IOSTANDARD LVCMOS12 } [get_ports { gpio_25 }]; #IO_L22N_T3_16 Sch=btnd
set_property src_info {type:XDC file:1 line:90 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN C22 IOSTANDARD LVCMOS12 } [get_ports { gpio_26 }]; #IO_L20P_T3_16 Sch=btnl
set_property src_info {type:XDC file:1 line:91 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN D14 IOSTANDARD LVCMOS12 } [get_ports { gpio_27 }]; #IO_L6P_T0_16 Sch=btnr
set_property src_info {type:XDC file:1 line:92 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN F15 IOSTANDARD LVCMOS12 } [get_ports { gpio_28 }]; #IO_0_16 Sch=btnu
set_property src_info {type:XDC file:1 line:95 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN W19   IOSTANDARD LVCMOS33 } [get_ports { io20_cell }]; #IO_L12P_T1_MRCC_14 Sch=sd_cclk
set_property src_info {type:XDC file:1 line:97 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN W20   IOSTANDARD LVCMOS33 } [get_ports { io18_cell }]; #IO_L12N_T1_MRCC_14 Sch=sd_cmd
set_property src_info {type:XDC file:1 line:98 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN V19   IOSTANDARD LVCMOS33 } [get_ports { io19_cell }]; #IO_L14N_T2_SRCC_14 Sch=sd_d[0]
set_property src_info {type:XDC file:1 line:101 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN U18   IOSTANDARD LVCMOS33 } [get_ports { io17_cell }]; #IO_L18N_T2_A11_D27_14 Sch=sd_d[3]
set_property src_info {type:XDC file:1 line:105 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN L18   IOSTANDARD LVCMOS12 } [get_ports { gptimer2_in  }]; #IO_L16N_T2_A27_15 Sch=fmc_la_n[02]
set_property src_info {type:XDC file:1 line:106 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN M18   IOSTANDARD LVCMOS12 } [get_ports { gptimer2_out }]; #IO_L16P_T2_A28_15 Sch=fmc_la_p[02]
set_property src_info {type:XDC file:1 line:107 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN N19   IOSTANDARD LVCMOS12 } [get_ports { gptimer3_in  }]; #IO_L17N_T2_A25_15 Sch=fmc_la_n[03]
set_property src_info {type:XDC file:1 line:108 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN N18   IOSTANDARD LVCMOS12 } [get_ports { gptimer3_out }]; #IO_L17P_T2_A26_15 Sch=fmc_la_p[03]
set_property src_info {type:XDC file:1 line:109 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN M20   IOSTANDARD LVCMOS12 } [get_ports { i2c1_scl     }]; #IO_L18N_T2_A23_15 Sch=fmc_la_n[04]
set_property src_info {type:XDC file:1 line:110 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN N20   IOSTANDARD LVCMOS12 } [get_ports { i2c1_sda     }]; #IO_L18P_T2_A24_15 Sch=fmc_la_p[04]
set_property src_info {type:XDC file:1 line:111 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN L21   IOSTANDARD LVCMOS12 } [get_ports { gpio_30 }]; #IO_L10N_T1_AD11N_15 Sch=fmc_la_n[05]
set_property src_info {type:XDC file:1 line:112 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN M21   IOSTANDARD LVCMOS12 } [get_ports { gpio_31 }]; #IO_L10P_T1_AD11P_15 Sch=fmc_la_p[05]
set_property src_info {type:XDC file:1 line:114 export:INPUT save:INPUT read:READ} [current_design]
set_clock_groups -asynchronous -group [get_clocks clk_out1_clk_divider] -group [get_clocks clk_out4_clk_divider]
