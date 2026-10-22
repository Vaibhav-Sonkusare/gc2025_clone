// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VmkTbSoc_edited.h for the primary calling header

#ifndef VERILATED_VMKTBSOC_EDITED___024UNIT_H_
#define VERILATED_VMKTBSOC_EDITED___024UNIT_H_  // guard

#include "verilated.h"


class VmkTbSoc_edited__Syms;

class alignas(VL_CACHE_LINE_BYTES) VmkTbSoc_edited___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VmkTbSoc_edited__Syms* const vlSymsp;

    // CONSTRUCTORS
    VmkTbSoc_edited___024unit(VmkTbSoc_edited__Syms* symsp, const char* v__name);
    ~VmkTbSoc_edited___024unit();
    VL_UNCOPYABLE(VmkTbSoc_edited___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
