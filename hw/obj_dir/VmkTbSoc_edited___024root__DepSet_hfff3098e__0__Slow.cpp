// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTbSoc_edited.h for the primary calling header

#include "VmkTbSoc_edited__pch.h"
#include "VmkTbSoc_edited__Syms.h"
#include "VmkTbSoc_edited___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VmkTbSoc_edited___024root___dump_triggers__stl(VmkTbSoc_edited___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VmkTbSoc_edited___024root___eval_triggers__stl(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VmkTbSoc_edited___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
