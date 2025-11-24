## This file is a general .xdc for the ZCU106 Rev1.0 XDC 02/10/2018
## To use it in a project:
## - uncomment the lines corresponding to used pins
## - rename the used ports (in each line, after get_ports) according to the top level signal names in the project

set_property CLOCK_DEDICATED_ROUTE BACKBONE [get_nets sys_clk_IBUF]
set_property CLOCK_DEDICATED_ROUTE FALSE [get_nets pin_tck_IBUF]
set_property CLOCK_DEDICATED_ROUTE FALSE [get_nets external_clk]

set_property SEVERITY {Warning} [get_drc_checks NSTD-1]
set_property SEVERITY {Warning} [get_drc_checks UCIO-1]



## CPU reset
set_property PACKAGE_PIN G13      [get_ports "sys_rst" ] ;# Bank  68 VCCO - VADJ_FMC - IO_T2U_N12_68
set_property IOSTANDARD  LVCMOS18 [get_ports "sys_rst" ] ;# Bank  68 VCCO - VADJ_FMC - IO_T2U_N12_68


## PMOD0
#0
set_property PACKAGE_PIN B23      [get_ports "pin_tck"] ;# Bank  28 VCCO - VADJ_FMC - IO_T3U_N12_28
set_property IOSTANDARD  LVCMOS18 [get_ports "pin_tck"] ;# Bank  28 VCCO - VADJ_FMC - IO_T3U_N12_28
#1
set_property PACKAGE_PIN A23      [get_ports "pin_trst"] ;# Bank  28 VCCO - VADJ_FMC - IO_L23N_T3U_N9_28
set_property IOSTANDARD  LVCMOS18 [get_ports "pin_trst"] ;# Bank  28 VCCO - VADJ_FMC - IO_L23N_T3U_N9_28
#2
set_property PACKAGE_PIN F25      [get_ports "pin_tdi"] ;# Bank  28 VCCO - VADJ_FMC - IO_T2U_N12_28
set_property IOSTANDARD  LVCMOS18 [get_ports "pin_tdi"] ;# Bank  28 VCCO - VADJ_FMC - IO_T2U_N12_28
#3
set_property PACKAGE_PIN E20      [get_ports "pin_tms"] ;# Bank  28 VCCO - VADJ_FMC - IO_T1U_N12_28
set_property IOSTANDARD  LVCMOS18 [get_ports "pin_tms"] ;# Bank  28 VCCO - VADJ_FMC - IO_T1U_N12_28
#4
set_property PACKAGE_PIN K24      [get_ports "pin_tdo"] ;# Bank  28 VCCO - VADJ_FMC - IO_L2N_T0L_N3_28
set_property IOSTANDARD  LVCMOS18 [get_ports "pin_tdo"] ;# Bank  28 VCCO - VADJ_FMC - IO_L2N_T0L_N3_28
#5
set_property PACKAGE_PIN L23      [get_ports "i2c0_sda"] ;# Bank  28 VCCO - VADJ_FMC - IO_L2P_T0L_N2_28
set_property IOSTANDARD  LVCMOS18 [get_ports "i2c0_sda"] ;# Bank  28 VCCO - VADJ_FMC - IO_L2P_T0L_N2_28
#6
set_property PACKAGE_PIN L22      [get_ports "i2c0_scl"] ;# Bank  28 VCCO - VADJ_FMC - IO_L1N_T0L_N1_DBC_28
set_property IOSTANDARD  LVCMOS18 [get_ports "i2c0_scl"] ;# Bank  28 VCCO - VADJ_FMC - IO_L1N_T0L_N1_DBC_28
#7
set_property PACKAGE_PIN D7       [get_ports "external_clk"] ;# Bank  68 VCCO - VADJ_FMC - IO_T1U_N12_68
set_property IOSTANDARD  LVCMOS18 [get_ports "external_clk"] ;# Bank  68 VCCO - VADJ_FMC - IO_T1U_N12_68

## PMOD1 
#0
set_property PACKAGE_PIN AN8      [get_ports "gptimer0_in"] ;# Bank  66 VCCO - VCC1V2   - IO_L4N_T0U_N7_DBC_AD7N_66
set_property IOSTANDARD  LVCMOS12 [get_ports "gptimer0_in"] ;# Bank  66 VCCO - VCC1V2   - IO_L4N_T0U_N7_DBC_AD7N_66
#1
set_property PACKAGE_PIN AN9      [get_ports "gptimer0_out"] ;# Bank  66 VCCO - VCC1V2   - IO_L4P_T0U_N6_DBC_AD7P_66
set_property IOSTANDARD  LVCMOS12 [get_ports "gptimer0_out"] ;# Bank  66 VCCO - VCC1V2   - IO_L4P_T0U_N6_DBC_AD7P_66
#2
set_property PACKAGE_PIN AP11     [get_ports "gptimer1_in"] ;# Bank  66 VCCO - VCC1V2   - IO_L3N_T0L_N5_AD15N_66
set_property IOSTANDARD  LVCMOS12 [get_ports "gptimer1_in"] ;# Bank  66 VCCO - VCC1V2   - IO_L3N_T0L_N5_AD15N_66
#3
set_property PACKAGE_PIN AN11     [get_ports "gptimer1_out"] ;# Bank  66 VCCO - VCC1V2   - IO_L3P_T0L_N4_AD15P_66
set_property IOSTANDARD  LVCMOS12 [get_ports "gptimer1_out"] ;# Bank  66 VCCO - VCC1V2   - IO_L3P_T0L_N4_AD15P_66
# #4
# set_property PACKAGE_PIN AP9      [get_ports "spi0_nss"] ;# Bank  66 VCCO - VCC1V2   - IO_L2N_T0L_N3_66
# set_property IOSTANDARD  LVCMOS12 [get_ports "spi0_nss"] ;# Bank  66 VCCO - VCC1V2   - IO_L2N_T0L_N3_66
# #5
# set_property PACKAGE_PIN AP10     [get_ports "spi0_mosi"] ;# Bank  66 VCCO - VCC1V2   - IO_L2P_T0L_N2_66
# set_property IOSTANDARD  LVCMOS12 [get_ports "spi0_mosi"] ;# Bank  66 VCCO - VCC1V2   - IO_L2P_T0L_N2_66
# #6
# set_property PACKAGE_PIN AP12     [get_ports "spi0_miso"] ;# Bank  66 VCCO - VCC1V2   - IO_L1N_T0L_N1_DBC_66
# set_property IOSTANDARD  LVCMOS12 [get_ports "spi0_miso"] ;# Bank  66 VCCO - VCC1V2   - IO_L1N_T0L_N1_DBC_66
# #7
# set_property PACKAGE_PIN AN12     [get_ports "spi0_sclk"] ;# Bank  66 VCCO - VCC1V2   - IO_L1P_T0L_N0_DBC_66
# set_property IOSTANDARD  LVCMOS12 [get_ports "spi0_sclk"] ;# Bank  66 VCCO - VCC1V2   - IO_L1P_T0L_N0_DBC_66

### UART
# set_property PACKAGE_PIN AH17      [get_ports "uart0_SOUT"] ;# Bank  64 VCCO - VCC1V2   - IO_L13N_T2L_N1_GC_QBC_64
# set_property IOSTANDARD  LVCMOS12  [get_ports "uart0_SOUT"] ;# Bank  64 VCCO - VCC1V2   - IO_L13N_T2L_N1_GC_QBC_64
# set_property PACKAGE_PIN AL17      [get_ports "uart0_SIN"] ;# Bank  64 VCCO - VCC1V2   - IO_T1U_N12_64
# set_property IOSTANDARD  LVCMOS12  [get_ports "uart0_SIN"] ;# Bank  64 VCCO - VCC1V2   - IO_T1U_N12_64




# ##GPIO DIP Switches
# set_property PACKAGE_PIN B13      [get_ports "io7_cell"] ;# Bank  67 VCCO - VADJ_FMC - IO_L4N_T0U_N7_DBC_AD7N_67
# set_property IOSTANDARD  LVCMOS18 [get_ports "io7_cell"] ;# Bank  67 VCCO - VADJ_FMC - IO_L4N_T0U_N7_DBC_AD7N_67
# set_property PACKAGE_PIN B14      [get_ports "io8_cell"] ;# Bank  67 VCCO - VADJ_FMC - IO_L4P_T0U_N6_DBC_AD7P_67
# set_property IOSTANDARD  LVCMOS18 [get_ports "io8_cell"] ;# Bank  67 VCCO - VADJ_FMC - IO_L4P_T0U_N6_DBC_AD7P_67
# set_property PACKAGE_PIN A14      [get_ports "io9_cell"] ;# Bank  67 VCCO - VADJ_FMC - IO_L3N_T0L_N5_AD15N_67
# set_property IOSTANDARD  LVCMOS18 [get_ports "io9_cell"] ;# Bank  67 VCCO - VADJ_FMC - IO_L3N_T0L_N5_AD15N_67
# set_property PACKAGE_PIN A15      [get_ports "io10_cell"] ;# Bank  67 VCCO - VADJ_FMC - IO_L3P_T0L_N4_AD15P_67
# set_property IOSTANDARD  LVCMOS18 [get_ports "io10_cell"] ;# Bank  67 VCCO - VADJ_FMC - IO_L3P_T0L_N4_AD15P_67
# set_property PACKAGE_PIN B15      [get_ports "gpio_4"] ;# Bank  67 VCCO - VADJ_FMC - IO_L2N_T0L_N3_67
# set_property IOSTANDARD  LVCMOS18 [get_ports "gpio_4"] ;# Bank  67 VCCO - VADJ_FMC - IO_L2N_T0L_N3_67
# set_property PACKAGE_PIN B16      [get_ports "io12_cell"] ;# Bank  67 VCCO - VADJ_FMC - IO_L2P_T0L_N2_67
# set_property IOSTANDARD  LVCMOS18 [get_ports "io12_cell"] ;# Bank  67 VCCO - VADJ_FMC - IO_L2P_T0L_N2_67
# set_property PACKAGE_PIN A16      [get_ports "io13_cell"] ;# Bank  67 VCCO - VADJ_FMC - IO_L1N_T0L_N1_DBC_67
# set_property IOSTANDARD  LVCMOS18 [get_ports "io13_cell"] ;# Bank  67 VCCO - VADJ_FMC - IO_L1N_T0L_N1_DBC_67
# set_property PACKAGE_PIN A17      [get_ports "gpio_7"] ;# Bank  67 VCCO - VADJ_FMC - IO_L1P_T0L_N0_DBC_67
# set_property IOSTANDARD  LVCMOS18 [get_ports "gpio_7"] ;# Bank  67 VCCO - VADJ_FMC - IO_L1P_T0L_N0_DBC_67


# ##GPIO Switches
# set_property PACKAGE_PIN AG13     [get_ports "gpio_8"] ;# Bank  66 VCCO - VCC1V2   - IO_L15P_T2L_N4_AD11P_66
# set_property IOSTANDARD  LVCMOS12 [get_ports "gpio_8"] ;# Bank  66 VCCO - VCC1V2   - IO_L15P_T2L_N4_AD11P_66
# set_property PACKAGE_PIN AC14     [get_ports "io16_cell"] ;# Bank  66 VCCO - VCC1V2   - IO_T3U_N12_66
# set_property IOSTANDARD  LVCMOS12 [get_ports "io16_cell"] ;# Bank  66 VCCO - VCC1V2   - IO_T3U_N12_66
# set_property PACKAGE_PIN AK12     [get_ports "gpio_14"] ;# Bank  66 VCCO - VCC1V2   - IO_L9P_T1L_N4_AD12P_66
# set_property IOSTANDARD  LVCMOS12 [get_ports "gpio_14"] ;# Bank  66 VCCO - VCC1V2   - IO_L9P_T1L_N4_AD12P_66
# set_property PACKAGE_PIN AL10     [get_ports "gpio_15"] ;# Bank  66 VCCO - VCC1V2   - IO_L8N_T1L_N3_AD5N_66
# set_property IOSTANDARD  LVCMOS12 [get_ports "gpio_15"] ;# Bank  66 VCCO - VCC1V2   - IO_L8N_T1L_N3_AD5N_66
# set_property PACKAGE_PIN AP20     [get_ports "gpio_24"] ;# Bank  65 VCCO - VCC1V2   - IO_L1N_T0L_N1_DBC_65
# set_property IOSTANDARD  LVCMOS12 [get_ports "gpio_24"] ;# Bank  65 VCCO - VCC1V2   - IO_L1N_T0L_N1_DBC_65

# ## LEDs
# set_property PACKAGE_PIN AL11     [get_ports "gpio_16"] ;# Bank  66 VCCO - VCC1V2   - IO_L8P_T1L_N2_AD5P_66
# set_property IOSTANDARD  LVCMOS12 [get_ports "gpio_16"] ;# Bank  66 VCCO - VCC1V2   - IO_L8P_T1L_N2_AD5P_66
# set_property PACKAGE_PIN AL13     [get_ports "gpio_17"] ;# Bank  66 VCCO - VCC1V2   - IO_L7N_T1L_N1_QBC_AD13N_66
# set_property IOSTANDARD  LVCMOS12 [get_ports "gpio_17"] ;# Bank  66 VCCO - VCC1V2   - IO_L7N_T1L_N1_QBC_AD13N_66
# set_property PACKAGE_PIN AK13     [get_ports "gpio_18"] ;# Bank  66 VCCO - VCC1V2   - IO_L7P_T1L_N0_QBC_AD13P_66
# set_property IOSTANDARD  LVCMOS12 [get_ports "gpio_18"] ;# Bank  66 VCCO - VCC1V2   - IO_L7P_T1L_N0_QBC_AD13P_66
# set_property PACKAGE_PIN AE15     [get_ports "gpio_19"] ;# Bank  64 VCCO - VCC1V2   - IO_L19N_T3L_N1_DBC_AD9N_64
# set_property IOSTANDARD  LVCMOS12 [get_ports "gpio_19"] ;# Bank  64 VCCO - VCC1V2   - IO_L19N_T3L_N1_DBC_AD9N_64
# set_property PACKAGE_PIN AM8      [get_ports "gpio_20"] ;# Bank  66 VCCO - VCC1V2   - IO_L6N_T0U_N11_AD6N_66
# set_property IOSTANDARD  LVCMOS12 [get_ports "gpio_20"] ;# Bank  66 VCCO - VCC1V2   - IO_L6N_T0U_N11_AD6N_66
# set_property PACKAGE_PIN AM9      [get_ports "gpio_21"] ;# Bank  66 VCCO - VCC1V2   - IO_L6P_T0U_N10_AD6P_66
# set_property IOSTANDARD  LVCMOS12 [get_ports "gpio_21"] ;# Bank  66 VCCO - VCC1V2   - IO_L6P_T0U_N10_AD6P_66
# set_property PACKAGE_PIN AM10     [get_ports "gpio_22"] ;# Bank  66 VCCO - VCC1V2   - IO_L5N_T0U_N9_AD14N_66
# set_property IOSTANDARD  LVCMOS12 [get_ports "gpio_22"] ;# Bank  66 VCCO - VCC1V2   - IO_L5N_T0U_N9_AD14N_66
# set_property PACKAGE_PIN AM11     [get_ports "gpio_23"] ;# Bank  66 VCCO - VCC1V2   - IO_L5P_T0U_N8_AD14P_66
# set_property IOSTANDARD  LVCMOS12 [get_ports "gpio_23"] ;# Bank  66 VCCO - VCC1V2   - IO_L5P_T0U_N8_AD14P_66


# ## FMC Connector HPC1
# set_property PACKAGE_PIN A21      [get_ports "gpio_25"] ;# Bank  28 VCCO - VADJ_FMC - IO_L21N_T3L_N5_AD8N_28
# set_property IOSTANDARD  LVDS     [get_ports "gpio_25"] ;# Bank  28 VCCO - VADJ_FMC - IO_L21N_T3L_N5_AD8N_28
# set_property PACKAGE_PIN A20      [get_ports "gpio_26"] ;# Bank  28 VCCO - VADJ_FMC - IO_L21P_T3L_N4_AD8P_28
# set_property IOSTANDARD  LVDS     [get_ports "gpio_26"] ;# Bank  28 VCCO - VADJ_FMC - IO_L21P_T3L_N4_AD8P_28
# set_property PACKAGE_PIN C19      [get_ports "gpio_27"] ;# Bank  28 VCCO - VADJ_FMC - IO_L20N_T3L_N3_AD1N_28
# set_property IOSTANDARD  LVDS     [get_ports "gpio_27"] ;# Bank  28 VCCO - VADJ_FMC - IO_L20N_T3L_N3_AD1N_28
# set_property PACKAGE_PIN C18      [get_ports "gpio_28"] ;# Bank  28 VCCO - VADJ_FMC - IO_L20P_T3L_N2_AD1P_28
# set_property IOSTANDARD  LVDS     [get_ports "gpio_28"] ;# Bank  28 VCCO - VADJ_FMC - IO_L20P_T3L_N2_AD1P_28
# set_property PACKAGE_PIN A19      [get_ports "io20_cell"] ;# Bank  28 VCCO - VADJ_FMC - IO_L19N_T3L_N1_DBC_AD9N_28
# set_property IOSTANDARD  LVDS     [get_ports "io20_cell"] ;# Bank  28 VCCO - VADJ_FMC - IO_L19N_T3L_N1_DBC_AD9N_28
# set_property PACKAGE_PIN A18      [get_ports "io18_cell"] ;# Bank  28 VCCO - VADJ_FMC - IO_L19P_T3L_N0_DBC_AD9P_28
# set_property IOSTANDARD  LVDS     [get_ports "io18_cell"] ;# Bank  28 VCCO - VADJ_FMC - IO_L19P_T3L_N0_DBC_AD9P_28
# set_property PACKAGE_PIN G26      [get_ports "io19_cell"] ;# Bank  28 VCCO - VADJ_FMC - IO_L18N_T2U_N11_AD2N_28
# set_property IOSTANDARD  LVDS     [get_ports "io19_cell"] ;# Bank  28 VCCO - VADJ_FMC - IO_L18N_T2U_N11_AD2N_28
# set_property PACKAGE_PIN G25      [get_ports "io17_cell"] ;# Bank  28 VCCO - VADJ_FMC - IO_L18P_T2U_N10_AD2P_28
# set_property IOSTANDARD  LVDS     [get_ports "io17_cell"] ;# Bank  28 VCCO - VADJ_FMC - IO_L18P_T2U_N10_AD2P_28
# set_property PACKAGE_PIN C23      [get_ports "gptimer2_in"] ;# Bank  28 VCCO - VADJ_FMC - IO_L17N_T2U_N9_AD10N_28
# set_property IOSTANDARD  LVDS     [get_ports "gptimer2_in"] ;# Bank  28 VCCO - VADJ_FMC - IO_L17N_T2U_N9_AD10N_28
# set_property PACKAGE_PIN D22      [get_ports "gptimer2_out"] ;# Bank  28 VCCO - VADJ_FMC - IO_L17P_T2U_N8_AD10P_28
# set_property IOSTANDARD  LVDS     [get_ports "gptimer2_out"] ;# Bank  28 VCCO - VADJ_FMC - IO_L17P_T2U_N8_AD10P_28
# set_property PACKAGE_PIN C22      [get_ports "gptimer3_in"] ;# Bank  28 VCCO - VADJ_FMC - IO_L15N_T2L_N5_AD11N_28
# set_property IOSTANDARD  LVDS     [get_ports "gptimer3_in"] ;# Bank  28 VCCO - VADJ_FMC - IO_L15N_T2L_N5_AD11N_28
# set_property PACKAGE_PIN C21      [get_ports "gptimer3_out"] ;# Bank  28 VCCO - VADJ_FMC - IO_L15P_T2L_N4_AD11P_28
# set_property IOSTANDARD  LVDS     [get_ports "gptimer3_out"] ;# Bank  28 VCCO - VADJ_FMC - IO_L15P_T2L_N4_AD11P_28
# set_property PACKAGE_PIN E22      [get_ports "i2c1_scl"] ;# Bank  28 VCCO - VADJ_FMC - IO_L11N_T1U_N9_GC_28
# set_property IOSTANDARD  LVDS     [get_ports "i2c1_scl"] ;# Bank  28 VCCO - VADJ_FMC - IO_L11N_T1U_N9_GC_28
# set_property PACKAGE_PIN F22      [get_ports "i2c1_sda"] ;# Bank  28 VCCO - VADJ_FMC - IO_L11P_T1U_N8_GC_28
# set_property IOSTANDARD  LVDS     [get_ports "i2c1_sda"] ;# Bank  28 VCCO - VADJ_FMC - IO_L11P_T1U_N8_GC_28
# set_property PACKAGE_PIN F20      [get_ports "gpio_30"] ;# Bank  28 VCCO - VADJ_FMC - IO_L10N_T1U_N7_QBC_AD4N_28
# set_property IOSTANDARD  LVDS     [get_ports "gpio_30"] ;# Bank  28 VCCO - VADJ_FMC - IO_L10N_T1U_N7_QBC_AD4N_28
# set_property PACKAGE_PIN G20      [get_ports "gpio_31"] ;# Bank  28 VCCO - VADJ_FMC - IO_L10P_T1U_N6_QBC_AD4P_28
# set_property IOSTANDARD  LVDS     [get_ports "gpio_31"] ;# Bank  28 VCCO - VADJ_FMC - IO_L10P_T1U_N6_QBC_AD4P_28