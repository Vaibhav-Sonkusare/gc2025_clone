// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VMKTBSOC_EDITED__DPI_H_
#define VERILATED_VMKTBSOC_EDITED__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at build/hw/verilog/mkTbSoc_edited.v:14:39
    extern unsigned char get_frame(int client_fd);
    // DPI import at build/hw/verilog/mkTbSoc_edited.v:12:39
    extern unsigned int init_rbb_jtag(unsigned char dummy);
    // DPI import at build/hw/verilog/mkTbSoc_edited.v:13:39
    extern unsigned int init_rbb_jtag_loop(int client_fd);
    // DPI import at build/hw/verilog/mkTbSoc_edited.v:15:39
    extern void send_tdo(char tdo, int client_fd);

#ifdef __cplusplus
}
#endif

#endif  // guard
