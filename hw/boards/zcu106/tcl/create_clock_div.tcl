#set curdir [ file dirname [ file normalize [ info script ] ] ]
#source $curdir/env.tcl
#
#open_project $ip_project_dir/$ip_project.xpr
#set_property "simulator_language" "Mixed" [current_project]
#set_property "target_language" "Verilog" [current_project]

puts "\nDEBUG: Creating Clock Divider from Clock Wizard\n"

if { [get_ips -quiet clk_divider] eq "" } {
    create_ip -name clk_wiz -vendor xilinx.com -library ip -module_name clk_divider 
} else {
    reset_run clk_divider_synth_1
}

set_property -dict [list \
                        CONFIG.CLKOUT1_USED {true} \
                        CONFIG.CLKOUT2_USED {true} \
                        CONFIG.CLKOUT3_USED {true} \
                        CONFIG.CLKOUT1_DRIVES {BUFG} \
                        CONFIG.CLKOUT2_DRIVES {BUFG} \
                        CONFIG.CLKOUT3_DRIVES {BUFG} \
                        CONFIG.CLKOUT1_REQUESTED_OUT_FREQ {50.000} \
                        CONFIG.CLKOUT2_REQUESTED_OUT_FREQ {100.000} \
                        CONFIG.CLKOUT3_REQUESTED_OUT_FREQ {300.12} \
                        CONFIG.RESET_TYPE {ACTIVE_LOW} \
                        CONFIG.MMCM_DIVCLK_DIVIDE {1} \
                        CONFIG.MMCM_CLKOUT0_DIVIDE_F {24.000} \
                        CONFIG.MMCM_CLKOUT1_DIVIDE {12} \
                        CONFIG.MMCM_CLKOUT2_DIVIDE {4} \
                        CONFIG.NUM_OUT_CLKS {3} \
                        CONFIG.RESET_PORT {resetn} \
                        CONFIG.CLKOUT1_JITTER {132.683} \
                        CONFIG.CLKOUT2_JITTER {115.831} \
                        CONFIG.CLKOUT2_PHASE_ERROR {87.180} \
                        CONFIG.CLKOUT3_JITTER {94.862} \
                        CONFIG.CLKOUT3_PHASE_ERROR {87.180}] [get_ips clk_divider]

generate_target {instantiation_template} [get_ips clk_divider]
create_ip_run [get_ips clk_divider]
#launch_run clk_divider_synth_1
#wait_on_run clk_divider_synth_1
#exit
