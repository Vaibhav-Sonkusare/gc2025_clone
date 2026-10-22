// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTbSoc_edited.h for the primary calling header

#include "VmkTbSoc_edited__pch.h"
#include "VmkTbSoc_edited__Syms.h"
#include "VmkTbSoc_edited___024unit.h"

extern "C" unsigned int init_rbb_jtag(unsigned char dummy);

VL_INLINE_OPT void VmkTbSoc_edited___024unit____Vdpiimwrap_init_rbb_jtag_TOP____024unit(CData/*7:0*/ dummy, IData/*31:0*/ &init_rbb_jtag__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VmkTbSoc_edited___024unit____Vdpiimwrap_init_rbb_jtag_TOP____024unit\n"); );
    // Body
    unsigned char dummy__Vcvt;
    for (size_t dummy__Vidx = 0; dummy__Vidx < 1; ++dummy__Vidx) dummy__Vcvt = dummy;
    unsigned int init_rbb_jtag__Vfuncrtn__Vcvt;
    init_rbb_jtag__Vfuncrtn__Vcvt = init_rbb_jtag(dummy__Vcvt);
    init_rbb_jtag__Vfuncrtn = init_rbb_jtag__Vfuncrtn__Vcvt;
}

extern "C" unsigned int init_rbb_jtag_loop(int client_fd);

VL_INLINE_OPT void VmkTbSoc_edited___024unit____Vdpiimwrap_init_rbb_jtag_loop_TOP____024unit(IData/*31:0*/ client_fd, IData/*31:0*/ &init_rbb_jtag_loop__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VmkTbSoc_edited___024unit____Vdpiimwrap_init_rbb_jtag_loop_TOP____024unit\n"); );
    // Body
    int client_fd__Vcvt;
    for (size_t client_fd__Vidx = 0; client_fd__Vidx < 1; ++client_fd__Vidx) client_fd__Vcvt = client_fd;
    unsigned int init_rbb_jtag_loop__Vfuncrtn__Vcvt;
    init_rbb_jtag_loop__Vfuncrtn__Vcvt = init_rbb_jtag_loop(client_fd__Vcvt);
    init_rbb_jtag_loop__Vfuncrtn = init_rbb_jtag_loop__Vfuncrtn__Vcvt;
}

extern "C" unsigned char get_frame(int client_fd);

VL_INLINE_OPT void VmkTbSoc_edited___024unit____Vdpiimwrap_get_frame_TOP____024unit(IData/*31:0*/ client_fd, CData/*7:0*/ &get_frame__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VmkTbSoc_edited___024unit____Vdpiimwrap_get_frame_TOP____024unit\n"); );
    // Body
    int client_fd__Vcvt;
    for (size_t client_fd__Vidx = 0; client_fd__Vidx < 1; ++client_fd__Vidx) client_fd__Vcvt = client_fd;
    unsigned char get_frame__Vfuncrtn__Vcvt;
    get_frame__Vfuncrtn__Vcvt = get_frame(client_fd__Vcvt);
    get_frame__Vfuncrtn = (0xffU & get_frame__Vfuncrtn__Vcvt);
}

extern "C" void send_tdo(char tdo, int client_fd);

VL_INLINE_OPT void VmkTbSoc_edited___024unit____Vdpiimwrap_send_tdo_TOP____024unit(CData/*7:0*/ tdo, IData/*31:0*/ client_fd) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VmkTbSoc_edited___024unit____Vdpiimwrap_send_tdo_TOP____024unit\n"); );
    // Body
    char tdo__Vcvt;
    for (size_t tdo__Vidx = 0; tdo__Vidx < 1; ++tdo__Vidx) tdo__Vcvt = tdo;
    int client_fd__Vcvt;
    for (size_t client_fd__Vidx = 0; client_fd__Vidx < 1; ++client_fd__Vidx) client_fd__Vcvt = client_fd;
    send_tdo(tdo__Vcvt, client_fd__Vcvt);
}
