// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTbSoc_edited.h for the primary calling header

#include "VmkTbSoc_edited__pch.h"
#include "VmkTbSoc_edited___024root.h"

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__50(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__50\n"); );
    // Body
    if (vlSelf->__Vdlyvset__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__fifoMem__v0) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__fifoMem[vlSelf->__Vdlyvdim0__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__fifoMem__v0] 
            = vlSelf->__Vdlyvval__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__fifoMem__v0;
    }
    if (vlSelf->__Vdlyvset__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__fifoMem__v0) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__fifoMem[vlSelf->__Vdlyvdim0__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__fifoMem__v0] 
            = vlSelf->__Vdlyvval__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__fifoMem__v0;
    }
    if (vlSelf->__Vdlyvset__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__fifoMem__v0) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__fifoMem[vlSelf->__Vdlyvdim0__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__fifoMem__v0] 
            = vlSelf->__Vdlyvval__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__fifoMem__v0;
    }
    if (vlSelf->__Vdlyvset__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__fifoMem__v0) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__fifoMem[vlSelf->__Vdlyvdim0__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__fifoMem__v0] 
            = vlSelf->__Vdlyvval__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__fifoMem__v0;
    }
    if (vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) {
        if (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__MUX_rg_start_address_write_1___05FSEL_1) 
             | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__ff_lower_order_bits_ENQ))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_start_address 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_start_address_D_IN;
        }
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_start_address = 0U;
    }
}

extern const VlWide<10>/*319:0*/ VmkTbSoc_edited__ConstPool__CONST_h021016e1_0;
extern const VlWide<10>/*319:0*/ VmkTbSoc_edited__ConstPool__CONST_h3c95891d_0;

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_comb__TOP__15(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_comb__TOP__15\n"); );
    // Init
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT____VdfgRegularize_h708c710d_0_9;
    mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT____VdfgRegularize_h708c710d_0_9 = 0;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_61;
    VlWide<3>/*95:0*/ __Vtemp_65;
    VlWide<3>/*95:0*/ __Vtemp_67;
    VlWide<3>/*95:0*/ __Vtemp_99;
    VlWide<3>/*95:0*/ __Vtemp_101;
    VlWide<3>/*95:0*/ __Vtemp_103;
    VlWide<3>/*95:0*/ __Vtemp_136;
    VlWide<3>/*95:0*/ __Vtemp_156;
    VlWide<3>/*95:0*/ __Vtemp_158;
    VlWide<3>/*95:0*/ __Vtemp_160;
    VlWide<3>/*95:0*/ __Vtemp_181;
    VlWide<3>/*95:0*/ __Vtemp_206;
    VlWide<3>/*95:0*/ __Vtemp_208;
    VlWide<3>/*95:0*/ __Vtemp_255;
    VlWide<3>/*95:0*/ __Vtemp_269;
    VlWide<3>/*95:0*/ __Vtemp_271;
    VlWide<3>/*95:0*/ __Vtemp_277;
    VlWide<3>/*95:0*/ __Vtemp_281;
    VlWide<3>/*95:0*/ __Vtemp_284;
    VlWide<3>/*95:0*/ __Vtemp_332;
    VlWide<3>/*95:0*/ __Vtemp_334;
    VlWide<3>/*95:0*/ __Vtemp_366;
    VlWide<3>/*95:0*/ __Vtemp_376;
    VlWide<3>/*95:0*/ __Vtemp_378;
    VlWide<3>/*95:0*/ __Vtemp_384;
    VlWide<3>/*95:0*/ __Vtemp_389;
    VlWide<3>/*95:0*/ __Vtemp_391;
    VlWide<7>/*223:0*/ __Vtemp_414;
    VlWide<10>/*319:0*/ __Vtemp_419;
    VlWide<10>/*319:0*/ __Vtemp_420;
    VlWide<3>/*95:0*/ __Vtemp_448;
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__word___05Fh14925 
        = ((1U == (3U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[0U] 
                         >> 1U))) ? (((QData)((IData)(
                                                      vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[0U])) 
                                                      >> 3U)))
            : ((2U == (3U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[0U] 
                             >> 1U))) ? ((((QData)((IData)(
                                                           vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) 
                                           << 0x3dU) 
                                          | (((QData)((IData)(
                                                              vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[1U])) 
                                              << 0x1dU) 
                                             | ((QData)((IData)(
                                                                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[0U])) 
                                                >> 3U))) 
                                         | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9171 
                                            << 1U))
                : ((~ (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[2U])) 
                        << 0x2fU) | (((QData)((IData)(
                                                      vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[1U])) 
                                      << 0xfU) | ((QData)((IData)(
                                                                  vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[0U])) 
                                                  >> 0x11U)))) 
                   & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9171 
                      << 1U))));
    if ((0x400U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_34[0U] = 0U;
        __Vtemp_34[1U] = 0U;
        __Vtemp_34[2U] = 0U;
        __Vtemp_103[0U] = 0U;
    } else if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_34[0U] = 0U;
        __Vtemp_34[1U] = 0U;
        __Vtemp_34[2U] = 0U;
        __Vtemp_103[0U] = 0U;
    } else if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_34[0U] = 0U;
        __Vtemp_34[1U] = 0U;
        __Vtemp_34[2U] = 0U;
        __Vtemp_103[0U] = 0U;
    } else if ((0x80U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        if ((0x40U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_34[0U] = 0U;
            __Vtemp_34[1U] = 0U;
            __Vtemp_34[2U] = 0U;
        } else if ((0x20U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            if ((0x10U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                __Vtemp_34[0U] = 0U;
                __Vtemp_34[1U] = 0U;
                __Vtemp_34[2U] = 0U;
            } else {
                __Vtemp_34[0U] = 0U;
                __Vtemp_34[1U] = 0U;
                __Vtemp_34[2U] = ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                   ? 0U : 2U);
            }
        } else if ((0x10U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_34[0U] = ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                               ? 0U : 0xaU);
            __Vtemp_34[1U] = 0U;
            __Vtemp_34[2U] = 2U;
        } else {
            __Vtemp_34[0U] = 0U;
            __Vtemp_34[1U] = 0U;
            __Vtemp_34[2U] = ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                               ? 2U : 0U);
        }
        __Vtemp_103[0U] = 0U;
    } else {
        __Vtemp_34[0U] = 0U;
        __Vtemp_34[1U] = 0U;
        __Vtemp_34[2U] = 0U;
        __Vtemp_103[0U] = ((0x40U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                            ? 0U : ((0x20U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                     ? 0U : ((0x10U 
                                              & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                              ? ((8U 
                                                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                                  ? 0U
                                                  : 
                                                 (1U 
                                                  | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_minstret) 
                                                     << 1U)))
                                              : ((8U 
                                                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                                  ? 0U
                                                  : 
                                                 (1U 
                                                  | ((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mcycle) 
                                                     << 1U))))));
    }
    if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_65[2U] = 0U;
        __Vtemp_99[1U] = 0U;
    } else if ((0x80U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_65[2U] = 0U;
        __Vtemp_99[1U] = 0U;
    } else if ((0x40U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_65[2U] = 0U;
        __Vtemp_99[1U] = 0U;
    } else if ((0x20U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_65[2U] = 0U;
        __Vtemp_99[1U] = 0U;
    } else if ((0x10U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        if ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_65[2U] = 0U;
            __Vtemp_99[1U] = 0U;
        } else {
            __Vtemp_65[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_minstret 
                                             >> 0x20U)) 
                                    >> 0x1fU));
            __Vtemp_99[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_minstret) 
                               >> 0x1fU) | ((IData)(
                                                    (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_minstret 
                                                     >> 0x20U)) 
                                            << 1U));
        }
    } else if ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_65[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_time 
                                         >> 0x20U)) 
                                >> 0x1fU));
        __Vtemp_99[1U] = 0U;
    } else {
        __Vtemp_65[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mcycle 
                                         >> 0x20U)) 
                                >> 0x1fU));
        __Vtemp_99[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mcycle) 
                           >> 0x1fU) | ((IData)((vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mcycle 
                                                 >> 0x20U)) 
                                        << 1U));
    }
    if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_67[0U] = 0U;
        __Vtemp_101[2U] = 0U;
    } else if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_67[0U] = 0U;
        __Vtemp_101[2U] = 0U;
    } else if ((0x80U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_67[0U] = 0U;
        __Vtemp_101[2U] = 0U;
    } else if ((0x40U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_67[0U] = 0U;
        __Vtemp_101[2U] = 0U;
    } else if ((0x20U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_67[0U] = 0U;
        __Vtemp_101[2U] = 0U;
    } else if ((0x10U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        if ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_67[0U] = 0U;
            __Vtemp_101[2U] = 0U;
        } else {
            __Vtemp_67[0U] = (1U | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_minstret) 
                                    << 1U));
            __Vtemp_101[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_minstret 
                                              >> 0x20U)) 
                                     >> 0x1fU));
        }
    } else if ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_67[0U] = (1U | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_time) 
                                << 1U));
        __Vtemp_101[2U] = 0U;
    } else {
        __Vtemp_67[0U] = (1U | ((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mcycle) 
                                << 1U));
        __Vtemp_101[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mcycle 
                                          >> 0x20U)) 
                                 >> 0x1fU));
    }
    if ((0x10U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        if ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_156[1U] = (((IData)((QData)((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpaddr3))) 
                                >> 0x1fU) | ((IData)(
                                                     ((QData)((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpaddr3)) 
                                                      >> 0x20U)) 
                                             << 1U));
            __Vtemp_206[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mtval_warl) 
                                >> 0x1fU) | ((IData)(
                                                     (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mtval_warl 
                                                      >> 0x20U)) 
                                             << 1U));
            __Vtemp_255[1U] = 0U;
            __Vtemp_269[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mideleg_warl) 
                                >> 0x1fU) | ((IData)(
                                                     (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mideleg_warl 
                                                      >> 0x20U)) 
                                             << 1U));
            __Vtemp_332[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_stval_warl) 
                                >> 0x1fU) | ((IData)(
                                                     (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_stval_warl 
                                                      >> 0x20U)) 
                                             << 1U));
            __Vtemp_366[1U] = 0U;
        } else {
            __Vtemp_156[1U] = (((IData)((QData)((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpaddr2))) 
                                >> 0x1fU) | ((IData)(
                                                     ((QData)((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpaddr2)) 
                                                      >> 0x20U)) 
                                             << 1U));
            __Vtemp_206[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mcause) 
                                >> 0x1fU) | ((IData)(
                                                     (vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mcause 
                                                      >> 0x20U)) 
                                             << 1U));
            __Vtemp_255[1U] = (((IData)((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mcounteren_warl))) 
                                >> 0x1fU) | ((IData)(
                                                     ((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mcounteren_warl)) 
                                                      >> 0x20U)) 
                                             << 1U));
            __Vtemp_269[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_medeleg_warl) 
                                >> 0x1fU) | ((IData)(
                                                     (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_medeleg_warl 
                                                      >> 0x20U)) 
                                             << 1U));
            __Vtemp_332[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_scause) 
                                >> 0x1fU) | ((IData)(
                                                     (vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_scause 
                                                      >> 0x20U)) 
                                             << 1U));
            __Vtemp_366[1U] = (((IData)((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_scounteren_warl))) 
                                >> 0x1fU) | ((IData)(
                                                     ((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_scounteren_warl)) 
                                                      >> 0x20U)) 
                                             << 1U));
        }
    } else if ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_156[1U] = (((IData)((QData)((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpaddr1))) 
                            >> 0x1fU) | ((IData)(((QData)((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpaddr1)) 
                                                  >> 0x20U)) 
                                         << 1U));
        __Vtemp_206[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mepc_warl) 
                            >> 0x1fU) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mepc_warl 
                                                  >> 0x20U)) 
                                         << 1U));
        __Vtemp_255[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mtvec) 
                            >> 0x1fU) | ((IData)((vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mtvec 
                                                  >> 0x20U)) 
                                         << 1U));
        __Vtemp_269[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_misa) 
                            >> 0x1fU) | ((IData)((vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_misa 
                                                  >> 0x20U)) 
                                         << 1U));
        __Vtemp_332[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_sepc_warl) 
                            >> 0x1fU) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_sepc_warl 
                                                  >> 0x20U)) 
                                         << 1U));
        __Vtemp_366[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_stvec) 
                            >> 0x1fU) | ((IData)((vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_stvec 
                                                  >> 0x20U)) 
                                         << 1U));
    } else {
        __Vtemp_156[1U] = (((IData)((QData)((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpaddr0))) 
                            >> 0x1fU) | ((IData)(((QData)((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpaddr0)) 
                                                  >> 0x20U)) 
                                         << 1U));
        __Vtemp_206[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mscratch_warl) 
                            >> 0x1fU) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mscratch_warl 
                                                  >> 0x20U)) 
                                         << 1U));
        __Vtemp_255[1U] = (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9373 
                                     << 1U)) >> 0x1fU) 
                           | ((IData)(((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9373 
                                        << 1U) >> 0x20U)) 
                              << 1U));
        __Vtemp_269[1U] = (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9002 
                                     << 1U)) >> 0x1fU) 
                           | ((IData)(((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9002 
                                        << 1U) >> 0x20U)) 
                              << 1U));
        __Vtemp_332[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_sscratch_warl) 
                            >> 0x1fU) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_sscratch_warl 
                                                  >> 0x20U)) 
                                         << 1U));
        __Vtemp_366[1U] = (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9457 
                                     << 1U)) >> 0x1fU) 
                           | ((IData)(((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9457 
                                        << 1U) >> 0x20U)) 
                              << 1U));
    }
    if ((0x40U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_61[1U] = 0U;
        __Vtemp_160[0U] = 0U;
        __Vtemp_378[1U] = ((0x20U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                            ? 0U : ((0x10U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                     ? ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                         ? 0U : (((IData)(
                                                          (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9824 
                                                           << 4U)) 
                                                  >> 0x1fU) 
                                                 | ((IData)(
                                                            ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9824 
                                                              << 4U) 
                                                             >> 0x20U)) 
                                                    << 1U)))
                                     : 0U));
    } else if ((0x20U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_61[1U] = 0U;
        __Vtemp_160[0U] = 0U;
        __Vtemp_378[1U] = __Vtemp_366[1U];
    } else if ((0x10U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        if ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_61[1U] = 0U;
            __Vtemp_160[0U] = (1U | ((IData)((QData)((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpaddr3))) 
                                     << 1U));
        } else {
            __Vtemp_61[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_minstret) 
                               >> 0x1fU) | ((IData)(
                                                    (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_minstret 
                                                     >> 0x20U)) 
                                            << 1U));
            __Vtemp_160[0U] = (1U | ((IData)((QData)((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpaddr2))) 
                                     << 1U));
        }
        __Vtemp_378[1U] = 0U;
    } else if ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_61[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_time) 
                           >> 0x1fU) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_time 
                                                 >> 0x20U)) 
                                        << 1U));
        __Vtemp_160[0U] = (1U | ((IData)((QData)((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpaddr1))) 
                                 << 1U));
        __Vtemp_378[1U] = 0U;
    } else {
        __Vtemp_61[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mcycle) 
                           >> 0x1fU) | ((IData)((vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mcycle 
                                                 >> 0x20U)) 
                                        << 1U));
        __Vtemp_160[0U] = (1U | ((IData)((QData)((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpaddr0))) 
                                 << 1U));
        __Vtemp_378[1U] = (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh12311 
                                     << 1U)) >> 0x1fU) 
                           | ((IData)(((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh12311 
                                        << 1U) >> 0x20U)) 
                              << 1U));
    }
    if ((0x20U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_158[2U] = 0U;
        if ((0x10U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_208[0U] = 0U;
            __Vtemp_208[2U] = 0U;
            if ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                __Vtemp_271[0U] = 0U;
                __Vtemp_271[2U] = 0U;
                __Vtemp_376[0U] = 0U;
                __Vtemp_376[2U] = 0U;
            } else {
                __Vtemp_271[0U] = (1U | ((IData)((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mcounteren_warl))) 
                                         << 1U));
                __Vtemp_271[2U] = (2U | ((IData)(((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mcounteren_warl)) 
                                                  >> 0x20U)) 
                                         >> 0x1fU));
                __Vtemp_376[0U] = (1U | ((IData)((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_scounteren_warl))) 
                                         << 1U));
                __Vtemp_376[2U] = (2U | ((IData)(((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_scounteren_warl)) 
                                                  >> 0x20U)) 
                                         >> 0x1fU));
            }
            __Vtemp_334[0U] = 0U;
            __Vtemp_334[2U] = 0U;
        } else if ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_208[0U] = 0U;
            __Vtemp_208[2U] = 0U;
            __Vtemp_271[0U] = (1U | ((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mtvec) 
                                     << 1U));
            __Vtemp_271[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mtvec 
                                              >> 0x20U)) 
                                     >> 0x1fU));
            __Vtemp_334[0U] = 0U;
            __Vtemp_334[2U] = 0U;
            __Vtemp_376[0U] = (1U | ((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_stvec) 
                                     << 1U));
            __Vtemp_376[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_stvec 
                                              >> 0x20U)) 
                                     >> 0x1fU));
        } else {
            __Vtemp_208[0U] = (1U | ((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mip) 
                                     << 1U));
            __Vtemp_208[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mip 
                                              >> 0x20U)) 
                                     >> 0x1fU));
            __Vtemp_271[0U] = (1U | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9373 
                                              << 1U)) 
                                     << 1U));
            __Vtemp_271[2U] = (2U | ((IData)(((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9373 
                                               << 1U) 
                                              >> 0x20U)) 
                                     >> 0x1fU));
            __Vtemp_334[0U] = (1U | ((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_sip) 
                                     << 1U));
            __Vtemp_334[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_sip 
                                              >> 0x20U)) 
                                     >> 0x1fU));
            __Vtemp_376[0U] = (1U | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9457 
                                              << 1U)) 
                                     << 1U));
            __Vtemp_376[2U] = (2U | ((IData)(((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9457 
                                               << 1U) 
                                              >> 0x20U)) 
                                     >> 0x1fU));
        }
    } else if ((0x10U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        if ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_158[2U] = (2U | ((IData)(((QData)((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpaddr3)) 
                                              >> 0x20U)) 
                                     >> 0x1fU));
            __Vtemp_208[0U] = (1U | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mtval_warl) 
                                     << 1U));
            __Vtemp_208[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mtval_warl 
                                              >> 0x20U)) 
                                     >> 0x1fU));
            __Vtemp_271[0U] = (1U | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mideleg_warl) 
                                     << 1U));
            __Vtemp_271[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mideleg_warl 
                                              >> 0x20U)) 
                                     >> 0x1fU));
            __Vtemp_334[0U] = (1U | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_stval_warl) 
                                     << 1U));
            __Vtemp_334[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_stval_warl 
                                              >> 0x20U)) 
                                     >> 0x1fU));
        } else {
            __Vtemp_158[2U] = (2U | ((IData)(((QData)((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpaddr2)) 
                                              >> 0x20U)) 
                                     >> 0x1fU));
            __Vtemp_208[0U] = (1U | ((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mcause) 
                                     << 1U));
            __Vtemp_208[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mcause 
                                              >> 0x20U)) 
                                     >> 0x1fU));
            __Vtemp_271[0U] = (1U | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_medeleg_warl) 
                                     << 1U));
            __Vtemp_271[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_medeleg_warl 
                                              >> 0x20U)) 
                                     >> 0x1fU));
            __Vtemp_334[0U] = (1U | ((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_scause) 
                                     << 1U));
            __Vtemp_334[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_scause 
                                              >> 0x20U)) 
                                     >> 0x1fU));
        }
        __Vtemp_376[0U] = 0U;
        __Vtemp_376[2U] = 0U;
    } else if ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_158[2U] = (2U | ((IData)(((QData)((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpaddr1)) 
                                          >> 0x20U)) 
                                 >> 0x1fU));
        __Vtemp_208[0U] = (1U | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mepc_warl) 
                                 << 1U));
        __Vtemp_208[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mepc_warl 
                                          >> 0x20U)) 
                                 >> 0x1fU));
        __Vtemp_271[0U] = (((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_misa) 
                            << 1U) | (1U & (((~ (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_misa_extensions_warl 
                                                 >> 2U)) 
                                             | (IData)(
                                                       (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__IF_ma_core_req_req_BITS_2_TO_1_20_EQ_1_21_THEN_ETC___05F_d428 
                                                        >> 2U))) 
                                            | (~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[0U]))));
        __Vtemp_271[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_misa 
                                          >> 0x20U)) 
                                 >> 0x1fU));
        __Vtemp_334[0U] = (1U | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_sepc_warl) 
                                 << 1U));
        __Vtemp_334[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_sepc_warl 
                                          >> 0x20U)) 
                                 >> 0x1fU));
        __Vtemp_376[0U] = 0U;
        __Vtemp_376[2U] = 0U;
    } else {
        __Vtemp_158[2U] = (2U | ((IData)(((QData)((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpaddr0)) 
                                          >> 0x20U)) 
                                 >> 0x1fU));
        __Vtemp_208[0U] = (1U | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mscratch_warl) 
                                 << 1U));
        __Vtemp_208[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mscratch_warl 
                                          >> 0x20U)) 
                                 >> 0x1fU));
        __Vtemp_271[0U] = (1U | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9002 
                                          << 1U)) << 1U));
        __Vtemp_271[2U] = (2U | ((IData)(((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9002 
                                           << 1U) >> 0x20U)) 
                                 >> 0x1fU));
        __Vtemp_334[0U] = (1U | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_sscratch_warl) 
                                 << 1U));
        __Vtemp_334[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_sscratch_warl 
                                          >> 0x20U)) 
                                 >> 0x1fU));
        __Vtemp_376[0U] = (1U | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh12311 
                                          << 1U)) << 1U));
        __Vtemp_376[2U] = (2U | ((IData)(((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh12311 
                                           << 1U) >> 0x20U)) 
                                 >> 0x1fU));
    }
    if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_181[1U] = 0U;
        if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_384[0U] = 0U;
            __Vtemp_384[1U] = 0U;
            __Vtemp_384[2U] = 0U;
        } else if ((0x80U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_384[0U] = 0U;
            __Vtemp_384[1U] = 0U;
            __Vtemp_384[2U] = 0U;
        } else if ((0x40U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_384[0U] = 0U;
            __Vtemp_384[1U] = 0U;
            __Vtemp_384[2U] = 0U;
        } else {
            __Vtemp_384[0U] = __Vtemp_334[0U];
            __Vtemp_384[1U] = ((0x20U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                ? ((0x10U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                    ? 0U : ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                             ? 0U : 
                                            (((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_sip) 
                                              >> 0x1fU) 
                                             | ((IData)(
                                                        (vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_sip 
                                                         >> 0x20U)) 
                                                << 1U))))
                                : __Vtemp_332[1U]);
            __Vtemp_384[2U] = __Vtemp_334[2U];
        }
    } else if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_181[1U] = ((0x80U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                            ? ((0x40U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                ? 0U : ((0x20U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                         ? 0U : __Vtemp_156[1U]))
                            : ((0x40U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                ? 0U : ((0x20U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                         ? 0U : ((0x10U 
                                                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                                   ? 0U
                                                   : 
                                                  (((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpcfg0) 
                                                    >> 0x1fU) 
                                                   | ((IData)(
                                                              (vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpcfg0 
                                                               >> 0x20U)) 
                                                      << 1U)))))));
        __Vtemp_384[0U] = 0U;
        __Vtemp_384[1U] = 0U;
        __Vtemp_384[2U] = 0U;
    } else {
        __Vtemp_181[1U] = 0U;
        if ((0x80U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_384[0U] = 0U;
            __Vtemp_384[1U] = 0U;
            __Vtemp_384[2U] = 0U;
        } else if ((0x40U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            if ((0x20U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                __Vtemp_384[0U] = 0U;
                __Vtemp_384[1U] = __Vtemp_378[1U];
                __Vtemp_384[2U] = 0U;
            } else if ((0x10U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                if ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                    __Vtemp_384[0U] = 0U;
                    __Vtemp_384[1U] = __Vtemp_378[1U];
                    __Vtemp_384[2U] = 0U;
                } else {
                    __Vtemp_384[0U] = (1U | ((IData)(
                                                     (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9824 
                                                      << 4U)) 
                                             << 1U));
                    __Vtemp_384[1U] = __Vtemp_378[1U];
                    __Vtemp_384[2U] = (2U | ((IData)(
                                                     ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9824 
                                                       << 4U) 
                                                      >> 0x20U)) 
                                             >> 0x1fU));
                }
            } else {
                __Vtemp_384[0U] = 0U;
                __Vtemp_384[1U] = __Vtemp_378[1U];
                __Vtemp_384[2U] = 0U;
            }
        } else {
            __Vtemp_384[0U] = __Vtemp_376[0U];
            __Vtemp_384[1U] = __Vtemp_378[1U];
            __Vtemp_384[2U] = __Vtemp_376[2U];
        }
    }
    if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        if ((0x80U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_277[0U] = 0U;
            __Vtemp_277[1U] = 0U;
            __Vtemp_277[2U] = 0U;
        } else if ((0x40U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_277[0U] = 0U;
            __Vtemp_277[1U] = 0U;
            __Vtemp_277[2U] = 0U;
        } else if ((0x20U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_277[0U] = 0U;
            __Vtemp_277[1U] = 0U;
            __Vtemp_277[2U] = 0U;
        } else if ((0x10U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_277[0U] = 0U;
            __Vtemp_277[1U] = 0U;
            __Vtemp_277[2U] = 0U;
        } else if ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_277[0U] = 0U;
            __Vtemp_277[1U] = 0U;
            __Vtemp_277[2U] = 0U;
        } else {
            __Vtemp_277[0U] = 1U;
            __Vtemp_277[1U] = 0U;
            __Vtemp_277[2U] = 2U;
        }
    } else if ((0x80U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_277[0U] = 0U;
        __Vtemp_277[1U] = 0U;
        __Vtemp_277[2U] = 0U;
    } else if ((0x40U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        if ((0x20U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_277[0U] = 0U;
            __Vtemp_277[1U] = 0U;
            __Vtemp_277[2U] = 0U;
        } else if ((0x10U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            if ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                __Vtemp_277[0U] = 0U;
                __Vtemp_277[1U] = 0U;
                __Vtemp_277[2U] = 0U;
            } else {
                __Vtemp_277[0U] = (1U | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9795 
                                                  << 4U)) 
                                         << 1U));
                __Vtemp_277[1U] = (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9795 
                                             << 4U)) 
                                    >> 0x1fU) | ((IData)(
                                                         ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9795 
                                                           << 4U) 
                                                          >> 0x20U)) 
                                                 << 1U));
                __Vtemp_277[2U] = (2U | ((IData)(((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9795 
                                                   << 4U) 
                                                  >> 0x20U)) 
                                         >> 0x1fU));
            }
        } else {
            __Vtemp_277[0U] = 0U;
            __Vtemp_277[1U] = 0U;
            __Vtemp_277[2U] = 0U;
        }
    } else {
        __Vtemp_277[0U] = __Vtemp_271[0U];
        __Vtemp_277[1U] = ((0x20U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                            ? __Vtemp_255[1U] : __Vtemp_269[1U]);
        __Vtemp_277[2U] = __Vtemp_271[2U];
    }
    if ((0x400U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_281[0U] = 0U;
            __Vtemp_281[2U] = 0U;
        } else if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            if ((0x80U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                __Vtemp_281[0U] = __Vtemp_160[0U];
                __Vtemp_281[2U] = ((0x40U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                    ? 0U : __Vtemp_158[2U]);
            } else if ((0x40U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                __Vtemp_281[0U] = 0U;
                __Vtemp_281[2U] = 0U;
            } else if ((0x20U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                __Vtemp_281[0U] = 0U;
                __Vtemp_281[2U] = 0U;
            } else if ((0x10U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                __Vtemp_281[0U] = 0U;
                __Vtemp_281[2U] = 0U;
            } else if ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                __Vtemp_281[0U] = 0U;
                __Vtemp_281[2U] = 0U;
            } else {
                __Vtemp_281[0U] = (1U | ((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpcfg0) 
                                         << 1U));
                __Vtemp_281[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpcfg0 
                                                  >> 0x20U)) 
                                         >> 0x1fU));
            }
        } else {
            __Vtemp_281[0U] = 0U;
            __Vtemp_281[2U] = 0U;
        }
    } else if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_281[0U] = 0U;
            __Vtemp_281[2U] = 0U;
        } else if ((0x80U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_281[0U] = 0U;
            __Vtemp_281[2U] = 0U;
        } else if ((0x40U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_281[0U] = 0U;
            __Vtemp_281[2U] = 0U;
        } else {
            __Vtemp_281[0U] = __Vtemp_208[0U];
            __Vtemp_281[2U] = __Vtemp_208[2U];
        }
    } else {
        __Vtemp_281[0U] = __Vtemp_277[0U];
        __Vtemp_281[2U] = __Vtemp_277[2U];
    }
    if ((0x1000U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        if ((0x800U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_136[0U] = __Vtemp_103[0U];
            if ((0x400U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                __Vtemp_136[1U] = 0U;
                __Vtemp_136[2U] = 0U;
            } else {
                __Vtemp_136[1U] = ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                    ? 0U : __Vtemp_99[1U]);
                __Vtemp_136[2U] = __Vtemp_101[2U];
            }
            __Vtemp_391[0U] = __Vtemp_281[0U];
        } else {
            __Vtemp_136[0U] = 0U;
            __Vtemp_136[1U] = 0U;
            __Vtemp_136[2U] = 0U;
            __Vtemp_391[0U] = 0U;
        }
    } else if ((0x800U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        __Vtemp_136[0U] = 0U;
        __Vtemp_136[1U] = 0U;
        __Vtemp_136[2U] = 0U;
        __Vtemp_391[0U] = ((0x400U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                            ? ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                ? 0U : ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                         ? 0U : ((0x80U 
                                                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                                  ? 0U
                                                  : 
                                                 ((0x40U 
                                                   & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                                      ? 0U
                                                      : 
                                                     (1U 
                                                      | ((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_satp) 
                                                         << 1U)))))))))
                            : __Vtemp_384[0U]);
    } else {
        if ((0x400U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_136[0U] = 0U;
            __Vtemp_136[1U] = 0U;
            __Vtemp_136[2U] = 0U;
        } else if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_136[0U] = 0U;
            __Vtemp_136[1U] = 0U;
            __Vtemp_136[2U] = 0U;
        } else if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_136[0U] = 0U;
            __Vtemp_136[1U] = 0U;
            __Vtemp_136[2U] = 0U;
        } else if ((0x80U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_136[0U] = 0U;
            __Vtemp_136[1U] = 0U;
            __Vtemp_136[2U] = 0U;
        } else if ((0x40U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_136[0U] = 0U;
            __Vtemp_136[1U] = 0U;
            __Vtemp_136[2U] = 0U;
        } else if ((0x20U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_136[0U] = 0U;
            __Vtemp_136[1U] = 0U;
            __Vtemp_136[2U] = 0U;
        } else if ((0x10U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_136[0U] = 0U;
            __Vtemp_136[1U] = 0U;
            __Vtemp_136[2U] = 0U;
        } else if ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_136[0U] = 0U;
            __Vtemp_136[1U] = 0U;
            __Vtemp_136[2U] = 0U;
        } else {
            __Vtemp_136[0U] = 0x2fU;
            __Vtemp_136[1U] = 0U;
            __Vtemp_136[2U] = 2U;
        }
        __Vtemp_391[0U] = 0U;
    }
    if ((0x800U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        if ((0x400U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            __Vtemp_284[1U] = __Vtemp_181[1U];
            if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                __Vtemp_389[1U] = 0U;
                __Vtemp_389[2U] = 0U;
            } else if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                __Vtemp_389[1U] = 0U;
                __Vtemp_389[2U] = 0U;
            } else if ((0x80U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                __Vtemp_389[1U] = 0U;
                __Vtemp_389[2U] = 0U;
            } else if ((0x40U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                __Vtemp_389[1U] = 0U;
                __Vtemp_389[2U] = 0U;
            } else if ((0x20U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                __Vtemp_389[1U] = 0U;
                __Vtemp_389[2U] = 0U;
            } else if ((0x10U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                __Vtemp_389[1U] = 0U;
                __Vtemp_389[2U] = 0U;
            } else if ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                __Vtemp_389[1U] = 0U;
                __Vtemp_389[2U] = 0U;
            } else {
                __Vtemp_389[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_satp) 
                                    >> 0x1fU) | ((IData)(
                                                         (vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_satp 
                                                          >> 0x20U)) 
                                                 << 1U));
                __Vtemp_389[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_satp 
                                                  >> 0x20U)) 
                                         >> 0x1fU));
            }
        } else {
            __Vtemp_284[1U] = ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                ? ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                    ? 0U : ((0x80U 
                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                             ? 0U : 
                                            ((0x40U 
                                              & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                              ? 0U : 
                                             ((0x20U 
                                               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                               ? ((0x10U 
                                                   & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                                   ? 0U
                                                   : 
                                                  ((8U 
                                                    & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mip) 
                                                     >> 0x1fU) 
                                                    | ((IData)(
                                                               (vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mip 
                                                                >> 0x20U)) 
                                                       << 1U))))
                                               : __Vtemp_206[1U]))))
                                : __Vtemp_277[1U]);
            __Vtemp_389[1U] = __Vtemp_384[1U];
            __Vtemp_389[2U] = __Vtemp_384[2U];
        }
    } else {
        __Vtemp_284[1U] = 0U;
        __Vtemp_389[1U] = 0U;
        __Vtemp_389[2U] = 0U;
    }
    if ((0x4000U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        if ((0x2000U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            if ((0x1000U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                if ((0x800U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[0U] 
                        = __Vtemp_34[0U];
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[1U] 
                        = __Vtemp_34[1U];
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[2U] 
                        = __Vtemp_34[2U];
                } else {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[0U] = 0U;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[1U] = 0U;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[2U] = 0U;
                }
            } else if ((0x800U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[0U] = 0U;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[1U] = 0U;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[2U] = 0U;
            } else if ((0x400U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[0U] = 0U;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[1U] = 0U;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[2U] = 0U;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[0U] 
                    = __Vtemp_67[0U];
                if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[1U] = 0U;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[2U] = 0U;
                } else {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[1U] 
                        = ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                            ? 0U : ((0x80U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                                     ? 0U : __Vtemp_61[1U]));
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[2U] 
                        = __Vtemp_65[2U];
                }
            }
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[0U] 
                = __Vtemp_136[0U];
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[1U] 
                = __Vtemp_136[1U];
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[2U] 
                = __Vtemp_136[2U];
        }
    } else if ((0x2000U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[0U] = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[1U] = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[2U] = 0U;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[0U] 
            = __Vtemp_391[0U];
        if ((0x1000U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[1U] 
                = __Vtemp_284[1U];
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[2U] 
                = ((0x800U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_ma_core_req_req[2U])
                    ? __Vtemp_281[2U] : 0U);
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[1U] 
                = __Vtemp_389[1U];
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[2U] 
                = __Vtemp_389[2U];
        }
    }
    vlSelf->mkTbSoc__DOT__wdata___05Fh89444 = ((0x800U 
                                                & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                ? (
                                                   (0x400U 
                                                    & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                    ? 
                                                   ((0x200U 
                                                     & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                     ? 
                                                    ((0x100U 
                                                      & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                      ? 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                       ? 0ULL
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                        ? 0ULL
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                         ? 0ULL
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                          ? 
                                                         ((8U 
                                                           & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                           ? 0ULL
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                            ? 0ULL
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? 0ULL
                                                              : 5ULL)
                                                             : 0ULL)))
                                                          : 0ULL))))
                                                      : 0ULL)
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                      ? 0ULL
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                       ? 0ULL
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                        ? 0ULL
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                         ? 0ULL
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                          ? 0ULL
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                           ? 0ULL
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                            ? 0ULL
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                             ? 0ULL
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_time
                                                              : 0ULL))))))))))
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                     ? 
                                                    ((0x100U 
                                                      & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                      ? 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                       ? 0ULL
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                        ? 0ULL
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                         ? 0ULL
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                          ? 0ULL
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                           ? 0ULL
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? 0ULL
                                                              : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp2_rg_mhpmcounter6_warl)
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp2_rg_mhpmcounter5_warl
                                                              : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp2_rg_mhpmcounter4_warl))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp2_rg_mhpmcounter3_warl
                                                              : vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_minstret)
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? 0ULL
                                                              : vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mcycle))))))))
                                                      : 0ULL)
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                      ? 0ULL
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                       ? 0ULL
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                        ? 0ULL
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                         ? 0ULL
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                          ? 0ULL
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                           ? 0ULL
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                            ? 0ULL
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                             ? 0ULL
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? 0ULL
                                                              : 0x17ULL)))))))))))
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                    ? 
                                                   ((0x200U 
                                                     & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                     ? 
                                                    ((0x100U 
                                                      & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                      ? 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                       ? 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                        ? 0ULL
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                         ? 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                          ? 
                                                         ((8U 
                                                           & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                           ? 0ULL
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                            ? 0ULL
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp2_rg_dscratch1_warl
                                                              : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp2_rg_dscratch0_warl)
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp2_rg_dpc_warl
                                                              : vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_dcsr))))
                                                          : 0ULL)
                                                         : 0ULL))
                                                       : 0ULL)
                                                      : 0ULL)
                                                     : 0ULL)
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                     ? 
                                                    ((0x100U 
                                                      & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                      ? 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                       ? 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                        ? 0ULL
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                         ? 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                          ? 
                                                         ((8U 
                                                           & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                           ? 0ULL
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                            ? 0ULL
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? (QData)((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpaddr3))
                                                              : (QData)((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpaddr2)))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? (QData)((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpaddr1))
                                                              : (QData)((IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpaddr0))))))
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                           ? 0ULL
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                            ? 0ULL
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                             ? 0ULL
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? 0ULL
                                                              : vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_pmpcfg0)))))
                                                         : 0ULL))
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                        ? 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                         ? 0ULL
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                          ? 0ULL
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                           ? 0ULL
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                             ? 0ULL
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? 0ULL
                                                              : vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mip))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mtval_warl
                                                              : vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mcause)
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mepc_warl
                                                              : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mscratch_warl))))))
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                         ? 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                          ? 0ULL
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                           ? 0ULL
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? 0ULL
                                                              : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp2_rg_mhpmevent6_warl)
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp2_rg_mhpmevent5_warl
                                                              : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp2_rg_mhpmevent4_warl))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp2_rg_mhpmevent3_warl
                                                              : 0ULL)
                                                             : 0ULL))))
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                          ? 0ULL
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                           ? 
                                                          ((4U 
                                                            & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                            ? 0ULL
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? 0ULL
                                                              : 
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9795 
                                                              << 4U))
                                                             : 0ULL))
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? 0ULL
                                                              : (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mcounteren_warl)))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mtvec
                                                              : 
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9373 
                                                              << 1U)))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mideleg_warl
                                                              : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_medeleg_warl)
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_misa
                                                              : 
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9002 
                                                              << 1U)))))))))
                                                      : 0ULL)
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                      ? 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                       ? 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                        ? 0ULL
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                         ? 0ULL
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                          ? 0ULL
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                           ? 0ULL
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                            ? 0ULL
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                             ? 0ULL
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? 0ULL
                                                              : vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_satp)))))))
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                        ? 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                         ? 0ULL
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                          ? 0ULL
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                           ? 0ULL
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                             ? 0ULL
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? 0ULL
                                                              : vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_sip))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_stval_warl
                                                              : vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_scause)
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_sepc_warl
                                                              : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_sscratch_warl))))))
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                         ? 0ULL
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                          ? 0ULL
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                           ? 
                                                          ((4U 
                                                            & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                            ? 0ULL
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? 0ULL
                                                              : 
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9824 
                                                              << 4U))
                                                             : 0ULL))
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                             ? 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? 0ULL
                                                              : (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_scounteren_warl)))
                                                             : 
                                                            ((1U 
                                                              & (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218))
                                                              ? vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_stvec
                                                              : 
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9457 
                                                              << 1U)))
                                                            : 0ULL))))))
                                                      : 0ULL))));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2_tx_tx_commitlog_enq_ena) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[0U] 
            = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__op2___05Fh3646) 
                << 1U) | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__wEpoch));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[1U] 
            = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__op2___05Fh3646) 
                >> 0x1fU) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__op2___05Fh3646 
                                      >> 0x20U)) << 1U));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U] 
            = (0x40U | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__registerfile_read_rs2_addr) 
                         << 1U) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__op2___05Fh3646 
                                            >> 0x20U)) 
                                   >> 0x1fU)));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_wfi_D_IN 
            = ((7U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__IF_rg_microtrap_9_OR_chk_interrupt_7_BIT_0_8_A_ETC___05F_d67)) 
               & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__MUX_rg_stall_write_1___05FVAL_2));
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2[2U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_wfi_D_IN = 0U;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__wr_resume_wfi_whas___05F74_AND_wr_resume_wfi_wget___05FETC___05F_d180 
        = ((0ULL != ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9373 
                      << 1U) & vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_mip)) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT____VdfgRegularize_h3b2c5113_18_0));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_microtrap_D_IN 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2_EN_common_ma_clear_stall)) 
           & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_microtrap)) 
              & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_133) 
                 & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__MUX_rg_stall_write_1___05FVAL_2))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__anydata___05Fh5518 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_EN_ma_core_req)
             ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[2U])) 
                 << 0x3fU) | (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[1U])) 
                               << 0x1fU) | ((QData)((IData)(
                                                            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[0U])) 
                                            >> 1U)))
             : 0ULL) | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_ff_fwd_request__DOT__empty_reg)
                         ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp2_rg_resp_to_core_wget[2U])) 
                             << 0x3fU) | (((QData)((IData)(
                                                           vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp2_rg_resp_to_core_wget[1U])) 
                                           << 0x1fU) 
                                          | ((QData)((IData)(
                                                             vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp2_rg_resp_to_core_wget[0U])) 
                                             >> 1U)))
                         : 0ULL));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT____VdfgRegularize_h708c710d_0_7 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_EN_ma_core_req) 
            & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[2U] 
               >> 1U)) | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_ff_fwd_request__DOT__empty_reg) 
                          & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp2_rg_resp_to_core_wget[2U] 
                             >> 1U)));
    vlSelf->mkTbSoc__DOT__NOT_IF_soc_soc_sb_commitlog___05F60_BITS_210_TO_20_ETC___05F_d1454 
        = ((IData)(vlSelf->mkTbSoc__DOT____VdfgRegularize_h1026f1f7_28_46) 
           & ((0x301U == (IData)(vlSelf->mkTbSoc__DOT___theResult___05F___05F_1___05Fh89218)) 
              & (vlSelf->mkTbSoc__DOT__wdata___05Fh89444 
                 != vlSelf->mkTbSoc__DOT__rg_prev_misa)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_wfi_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_wfi_D_IN) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_wfi) 
              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__wr_resume_wfi_whas___05F74_AND_wr_resume_wfi_wget___05FETC___05F_d180)));
    mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT____VdfgRegularize_h708c710d_0_9 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT____VdfgRegularize_h708c710d_0_7) 
           | (0U == (7U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[0U])));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__wr_total_count_D_IN 
        = (((((~ (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem_receive_core_req_put[0U] 
                  >> 2U)) & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dtlb_EN_put_core_request_put) 
                             & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dtlb__DOT____VdfgRegularize_hdf0c9a13_0_22))) 
             & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dtlb__DOT__new_value___05Fh4349)) 
            << 0x1eU) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem_mv_itlb_perf_counters) 
                          << 0x1dU) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__MUX_ff_mem_wr_request_enq_1___05FSEL_2) 
                                        << 0x1cU) | 
                                       (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_ma_request_read_write) 
                                         << 0x1bU) 
                                        | ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT____VdfgRegularize_h9be507e3_2_72) 
                                             & (0x400U 
                                                == 
                                                (0x600U 
                                                 & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U]))) 
                                            << 0x1aU) 
                                           | ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT____VdfgRegularize_h9be507e3_2_72) 
                                                & (0x200U 
                                                   == 
                                                   (0x600U 
                                                    & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U]))) 
                                               << 0x19U) 
                                              | ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT____VdfgRegularize_h9be507e3_2_72) 
                                                   & (0U 
                                                      == 
                                                      (0x600U 
                                                       & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U]))) 
                                                  << 0x18U) 
                                                 | ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_request_ENQ) 
                                                      & (0x400U 
                                                         == 
                                                         (0x600U 
                                                          & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U]))) 
                                                     << 0x17U) 
                                                    | ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_request_ENQ) 
                                                         & (0x200U 
                                                            == 
                                                            (0x600U 
                                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U]))) 
                                                        << 0x16U) 
                                                       | ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_request_ENQ) 
                                                            & (0U 
                                                               == 
                                                               (0x600U 
                                                                & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U]))) 
                                                           << 0x15U) 
                                                          | ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_request_ENQ) 
                                                               & (0x200U 
                                                                  == 
                                                                  (0x600U 
                                                                   & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U]))) 
                                                              << 0x14U) 
                                                             | ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_mem_rd_request_ENQ) 
                                                                  & (0U 
                                                                     == 
                                                                     (0x600U 
                                                                      & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U]))) 
                                                                 << 0x13U) 
                                                                | ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache_EN_receive_core_req_put) 
                                                                     & (0x800U 
                                                                        == 
                                                                        (0xc00U 
                                                                         & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem_receive_core_req_put[2U]))) 
                                                                    << 0x12U) 
                                                                   | ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache_EN_receive_core_req_put) 
                                                                        & (0x400U 
                                                                           == 
                                                                           (0xc00U 
                                                                            & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem_receive_core_req_put[2U]))) 
                                                                       << 0x11U) 
                                                                      | ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache_EN_receive_core_req_put) 
                                                                           & (0U 
                                                                              == 
                                                                              (0xc00U 
                                                                               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem_receive_core_req_put[2U]))) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache__DOT__MUX_m_data_ma_request_1___05FSEL_2) 
                                                                             << 0xfU) 
                                                                            | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache__DOT__ff_pending_io_req_ENQ) 
                                                                                << 0xeU) 
                                                                               | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache__DOT__wr_total_read_fb_hits_whas) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache__DOT__ff_pending_req_ENQ) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache_EN_put_core_req_put) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_perfmonitors_mv_count_exestalls) 
                                                                                << 0xaU) 
                                                                                | (((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT____VdfgRegularize_h005b4445_1_19) 
                                                                                & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_system_instr)) 
                                                                                | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__MUX_tx_commitlog_w_data_wset_1___05FPSEL_2) 
                                                                                & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT____VdfgRegularize_h005b4445_1_19) 
                                                                                | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_103)))) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__mbox_EN_ma_inputs) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__rg_eEpoch_EN) 
                                                                                & (2U 
                                                                                == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_D_OUT))) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__rg_eEpoch_EN) 
                                                                                & (2U 
                                                                                != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_D_OUT))) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_csr_wait_EN) 
                                                                                & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT____VdfgRegularize_h708c710d_0_7) 
                                                                                & (0U 
                                                                                != 
                                                                                (7U 
                                                                                & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[0U])))) 
                                                                                << 4U) 
                                                                                | ((0xffffff8U 
                                                                                & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__MUX_rg_epoch_write_1___05FSEL_1) 
                                                                                << 3U) 
                                                                                & ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_trapout_D_OUT[2U] 
                                                                                >> 4U) 
                                                                                & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT____VdfgRegularize_h708c710d_0_24) 
                                                                                << 3U)))) 
                                                                                | ((0xffffffcU 
                                                                                & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__MUX_csr_mav_upd_on_trap_1___05FSEL_1) 
                                                                                << 2U) 
                                                                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_trapout_D_OUT[2U] 
                                                                                >> 4U))) 
                                                                                | ((((~ 
                                                                                (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_trapout_D_OUT[2U] 
                                                                                >> 6U)) 
                                                                                & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__MUX_csr_mav_upd_on_trap_1___05FSEL_1)) 
                                                                                << 1U) 
                                                                                | ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_106)) 
                                                                                & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0_EN_common_ma_update_eEpoch)))))))))))))))))))))))))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__MUX_rg_commitlog_1_wset_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_csr_wait_EN) 
           & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT____VdfgRegularize_h708c710d_0_9));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_rx_rx_systemout_from_stage4_deq_ena 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__CAN_FIRE_RL_rl_writeback_system) 
           & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_epoch_1_EQ_IF_rx_fuid_w_data_whas___05F1_THEN_r_ETC___05F_d24)) 
              | (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT____VdfgRegularize_h708c710d_0_9)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_EN_ma_incr_minstret 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__MUX_rg_commitlog_1_wset_1___05FSEL_1) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__MUX_rg_commitlog_1_wset_1___05FSEL_2) 
              | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__MUX_rg_commitlog_1_wset_1___05FSEL_3)));
    __Vtemp_414[1U] = (((IData)(((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[0U])
                                  ? ((0U == (0x1fU 
                                             & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U] 
                                                >> 3U)))
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_core_io_response[4U])) 
                                                 << 0x3cU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_core_io_response[3U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_core_io_response[2U])) 
                                                      >> 4U))))
                                  : (((QData)((IData)(
                                                      vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[2U])) 
                                      << 0x3bU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[1U])) 
                                                    << 0x1bU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[0U])) 
                                                      >> 5U))))) 
                        >> 0xfU) | ((IData)((((8U & 
                                               vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[0U])
                                               ? ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U] 
                                                       >> 3U)))
                                                   ? 0ULL
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_core_io_response[4U])) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_core_io_response[3U])) 
                                                       << 0x1cU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_core_io_response[2U])) 
                                                         >> 4U))))
                                               : (((QData)((IData)(
                                                                   vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[2U])) 
                                                   << 0x3bU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[1U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[0U])) 
                                                        >> 5U)))) 
                                             >> 0x20U)) 
                                    << 0x11U));
    __Vtemp_419[2U] = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__MUX_rg_commitlog_1_wset_1___05FSEL_3)
                        ? (((IData)((((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[0U])
                                       ? ((0U == (0x1fU 
                                                  & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U] 
                                                     >> 3U)))
                                           ? 0ULL : 
                                          (((QData)((IData)(
                                                            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_core_io_response[4U])) 
                                            << 0x3cU) 
                                           | (((QData)((IData)(
                                                               vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_core_io_response[3U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_core_io_response[2U])) 
                                                 >> 4U))))
                                       : (((QData)((IData)(
                                                           vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[2U])) 
                                           << 0x3bU) 
                                          | (((QData)((IData)(
                                                              vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[1U])) 
                                              << 0x1bU) 
                                             | ((QData)((IData)(
                                                                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[0U])) 
                                                >> 5U)))) 
                                     >> 0x20U)) >> 0xfU) 
                           | (0xfffe0000U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[2U]))
                        : VmkTbSoc_edited__ConstPool__CONST_h021016e1_0[2U]);
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__MUX_rg_commitlog_1_wset_1___05FSEL_2) {
        __Vtemp_420[0U] = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__anydata___05Fh5518) 
                            << 2U) | (3U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[0U]));
        __Vtemp_420[3U] = (((IData)(((0U == (7U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[0U]))
                                      ? (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9002 
                                         << 1U) : (
                                                   ((QData)((IData)(
                                                                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[4U])) 
                                                    << 0x39U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[3U])) 
                                                       << 0x19U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[2U])) 
                                                         >> 7U))))) 
                            >> 0x19U) | ((IData)(((
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[0U]))
                                                    ? 
                                                   (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9002 
                                                    << 1U)
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[4U])) 
                                                     << 0x39U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[3U])) 
                                                        << 0x19U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[2U])) 
                                                          >> 7U)))) 
                                                  >> 0x20U)) 
                                         << 7U));
        __Vtemp_420[4U] = ((((0U == (7U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[0U]))
                              ? 0x300U : (0xfffU & 
                                          (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[4U] 
                                           >> 7U))) 
                            << 7U) | ((IData)((((0U 
                                                 == 
                                                 (7U 
                                                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[0U]))
                                                 ? 
                                                (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9002 
                                                 << 1U)
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[4U])) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[3U])) 
                                                     << 0x19U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[2U])) 
                                                       >> 7U)))) 
                                               >> 0x20U)) 
                                      >> 0x19U));
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__MUX_rg_commitlog_1_wset_1___05FSEL_3) {
        __Vtemp_420[0U] = (((IData)(((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[0U])
                                      ? ((0U == (0x1fU 
                                                 & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U] 
                                                    >> 3U)))
                                          ? 0ULL : 
                                         (((QData)((IData)(
                                                           vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_core_io_response[4U])) 
                                           << 0x3cU) 
                                          | (((QData)((IData)(
                                                              vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_core_io_response[3U])) 
                                              << 0x1cU) 
                                             | ((QData)((IData)(
                                                                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_core_io_response[2U])) 
                                                >> 4U))))
                                      : (((QData)((IData)(
                                                          vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[2U])) 
                                          << 0x3bU) 
                                         | (((QData)((IData)(
                                                             vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[1U])) 
                                             << 0x1bU) 
                                            | ((QData)((IData)(
                                                               vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[0U])) 
                                               >> 5U))))) 
                            << 0x11U) | (0x1ffffU & 
                                         vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[0U]));
        __Vtemp_420[3U] = ((0x1ffffU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[3U]) 
                           | (0xfffe0000U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[3U]));
        __Vtemp_420[4U] = ((0x1ffffU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[4U]) 
                           | (0xfffe0000U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[4U]));
    } else {
        __Vtemp_420[0U] = VmkTbSoc_edited__ConstPool__CONST_h021016e1_0[0U];
        __Vtemp_420[3U] = VmkTbSoc_edited__ConstPool__CONST_h021016e1_0[3U];
        __Vtemp_420[4U] = VmkTbSoc_edited__ConstPool__CONST_h021016e1_0[4U];
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__MUX_rg_commitlog_1_wset_1___05FSEL_1) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[0U] 
            = (VmkTbSoc_edited__ConstPool__CONST_h3c95891d_0[0U] 
               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[0U]);
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[1U] 
            = (VmkTbSoc_edited__ConstPool__CONST_h3c95891d_0[1U] 
               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[1U]);
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[2U] 
            = (VmkTbSoc_edited__ConstPool__CONST_h3c95891d_0[2U] 
               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[2U]);
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[3U] 
            = (VmkTbSoc_edited__ConstPool__CONST_h3c95891d_0[3U] 
               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[3U]);
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[4U] 
            = (VmkTbSoc_edited__ConstPool__CONST_h3c95891d_0[4U] 
               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[4U]);
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[5U] 
            = (VmkTbSoc_edited__ConstPool__CONST_h3c95891d_0[5U] 
               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[5U]);
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[6U] 
            = (VmkTbSoc_edited__ConstPool__CONST_h3c95891d_0[6U] 
               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[6U]);
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[7U] 
            = (VmkTbSoc_edited__ConstPool__CONST_h3c95891d_0[7U] 
               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[7U]);
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[8U] 
            = (VmkTbSoc_edited__ConstPool__CONST_h3c95891d_0[8U] 
               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[8U]);
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[9U] 
            = (0x200000U | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv) 
                             << 0x13U) | (VmkTbSoc_edited__ConstPool__CONST_h3c95891d_0[9U] 
                                          & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[9U])));
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[0U] 
            = __Vtemp_420[0U];
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__MUX_rg_commitlog_1_wset_1___05FSEL_2) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[1U] 
                = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__anydata___05Fh5518) 
                    >> 0x1eU) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__anydata___05Fh5518 
                                          >> 0x20U)) 
                                 << 2U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[2U] 
                = (((IData)(((0U == (7U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[0U]))
                              ? (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9002 
                                 << 1U) : (((QData)((IData)(
                                                            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[4U])) 
                                            << 0x39U) 
                                           | (((QData)((IData)(
                                                               vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[3U])) 
                                               << 0x19U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[2U])) 
                                                 >> 7U))))) 
                    << 7U) | ((0x7cU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[2U]) 
                              | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__anydata___05Fh5518 
                                          >> 0x20U)) 
                                 >> 0x1eU)));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[3U] 
                = __Vtemp_420[3U];
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[4U] 
                = __Vtemp_420[4U];
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[5U] = 0U;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[6U] 
                = (0x40000U | (0xfff80000U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[6U]));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[7U] 
                = ((0x7ffffU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[7U]) 
                   | (0xfff80000U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[7U]));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[8U] 
                = ((0x7ffffU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[8U]) 
                   | (0xfff80000U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[8U]));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[9U] 
                = (0x200000U | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv) 
                                 << 0x13U) | (0x7ffffU 
                                              & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[9U])));
        } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__MUX_rg_commitlog_1_wset_1___05FSEL_3) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[1U] 
                = __Vtemp_414[1U];
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[2U] 
                = __Vtemp_419[2U];
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[3U] 
                = __Vtemp_420[3U];
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[4U] 
                = __Vtemp_420[4U];
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[5U] 
                = ((0x1ffffU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[5U]) 
                   | (0xfffe0000U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[5U]));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[6U] 
                = (0x20000U | ((0xfff80000U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[6U]) 
                               | (0x1ffffU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[6U])));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[7U] 
                = ((0x7ffffU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[7U]) 
                   | (0xfff80000U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[7U]));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[8U] 
                = ((0x7ffffU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[8U]) 
                   | (0xfff80000U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[8U]));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[9U] 
                = (0x200000U | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_prv) 
                                 << 0x13U) | (0x7ffffU 
                                              & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[9U])));
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[1U] 
                = VmkTbSoc_edited__ConstPool__CONST_h021016e1_0[1U];
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[2U] 
                = __Vtemp_419[2U];
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[3U] 
                = __Vtemp_420[3U];
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[4U] 
                = __Vtemp_420[4U];
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[5U] 
                = VmkTbSoc_edited__ConstPool__CONST_h021016e1_0[5U];
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[6U] 
                = VmkTbSoc_edited__ConstPool__CONST_h021016e1_0[6U];
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[7U] 
                = VmkTbSoc_edited__ConstPool__CONST_h021016e1_0[7U];
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[8U] 
                = VmkTbSoc_edited__ConstPool__CONST_h021016e1_0[8U];
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[9U] 
                = VmkTbSoc_edited__ConstPool__CONST_h021016e1_0[9U];
        }
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout__DOT__hasodata) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_rx_rx_systemout_from_stage4_deq_ena));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_rx_rx_commitlog_deq_ena 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_rx_rx_systemout_from_stage4_deq_ena) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_rx_rx_memio_from_stage4_deq_ena) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_rx_rx_baseout_from_stage4_deq_ena) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_rx_rx_trapout_from_stage4_deq_ena))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_rx_rx_systemout_from_stage4_deq_ena) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__MUX_wr_commit_wset_1___05FSEL_2) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_rx_rx_trapout_from_stage4_deq_ena) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_rx_rx_baseout_from_stage4_deq_ena))));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__MUX_wr_commit_wset_1___05FSEL_2) {
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_epoch_1_EQ_IF_rx_fuid_w_data_whas___05F1_THEN_r_ETC___05F_d24) {
            if ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[0U])) {
                if ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_core_io_response[2U])) {
                    __Vtemp_448[0U] = 0U;
                    __Vtemp_448[1U] = (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U] 
                                       << 0x1dU);
                } else {
                    __Vtemp_448[0U] = (IData)((((QData)((IData)(
                                                                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_core_io_response[4U])) 
                                                << 0x3cU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_core_io_response[3U])) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_core_io_response[2U])) 
                                                     >> 4U))));
                    __Vtemp_448[1U] = (IData)(((((QData)((IData)(
                                                                 vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_core_io_response[4U])) 
                                                 << 0x3cU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_core_io_response[3U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_core_io_response[2U])) 
                                                      >> 4U))) 
                                               >> 0x20U));
                }
            } else {
                __Vtemp_448[0U] = (IData)((((QData)((IData)(
                                                            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[2U])) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[1U])) 
                                               << 0x1bU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[0U])) 
                                                 >> 5U))));
                __Vtemp_448[1U] = (IData)(((((QData)((IData)(
                                                             vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[2U])) 
                                             << 0x3bU) 
                                            | (((QData)((IData)(
                                                                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[1U])) 
                                                << 0x1bU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[0U])) 
                                                  >> 5U))) 
                                           >> 0x20U));
            }
        } else {
            __Vtemp_448[0U] = 0U;
            __Vtemp_448[1U] = (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U] 
                               << 0x1dU);
        }
        __Vtemp_448[2U] = ((0x3c0U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[2U] 
                                      >> 2U)) | ((0x20U 
                                                  & (((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_epoch_1_EQ_IF_rx_fuid_w_data_whas___05F1_THEN_r_ETC___05F_d24)) 
                                                      << 5U) 
                                                     | (0xffffffe0U 
                                                        & ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[0U] 
                                                            & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_core_io_response[2U]) 
                                                           << 2U)))) 
                                                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_epoch_1_EQ_IF_rx_fuid_w_data_whas___05F1_THEN_r_ETC___05F_d24)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_OUT[0U])
                                                      ? 
                                                     ((8U 
                                                       & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_core_io_response[2U])
                                                       ? 
                                                      (0x1fU 
                                                       & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U] 
                                                          >> 3U))
                                                       : 
                                                      (0x1fU 
                                                       & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U] 
                                                          >> 3U)))
                                                      : 
                                                     (0x1fU 
                                                      & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U] 
                                                         >> 3U)))
                                                     : 
                                                    (0x1fU 
                                                     & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U] 
                                                        >> 3U)))));
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_rx_rx_trapout_from_stage4_deq_ena) {
        __Vtemp_448[0U] = 0U;
        __Vtemp_448[1U] = (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U] 
                           << 0x1dU);
        __Vtemp_448[2U] = (0x20U | ((0x3c0U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[2U] 
                                               >> 2U)) 
                                    | (0x1fU & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U] 
                                                >> 3U))));
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_rx_rx_baseout_from_stage4_deq_ena) {
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_epoch_1_EQ_IF_rx_fuid_w_data_whas___05F1_THEN_r_ETC___05F_d24) {
            __Vtemp_448[0U] = (IData)((((QData)((IData)(
                                                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_baseout_D_OUT[2U])) 
                                        << 0x3aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_baseout_D_OUT[1U])) 
                                         << 0x1aU) 
                                        | ((QData)((IData)(
                                                           vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_baseout_D_OUT[0U])) 
                                           >> 6U))));
            __Vtemp_448[1U] = (IData)(((((QData)((IData)(
                                                         vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_baseout_D_OUT[2U])) 
                                         << 0x3aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_baseout_D_OUT[1U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_baseout_D_OUT[0U])) 
                                              >> 6U))) 
                                       >> 0x20U));
        } else {
            __Vtemp_448[0U] = 0U;
            __Vtemp_448[1U] = (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U] 
                               << 0x1dU);
        }
        __Vtemp_448[2U] = ((0x3c0U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[2U] 
                                      >> 2U)) | ((0x20U 
                                                  & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_epoch_1_EQ_IF_rx_fuid_w_data_whas___05F1_THEN_r_ETC___05F_d24)) 
                                                     << 5U)) 
                                                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_epoch_1_EQ_IF_rx_fuid_w_data_whas___05F1_THEN_r_ETC___05F_d24)
                                                     ? 
                                                    (0x1fU 
                                                     & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U] 
                                                        >> 3U))
                                                     : 
                                                    (0x1fU 
                                                     & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U] 
                                                        >> 3U)))));
    } else {
        __Vtemp_448[0U] = 0U;
        __Vtemp_448[1U] = 0U;
        __Vtemp_448[2U] = 0U;
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_rx_rx_systemout_from_stage4_deq_ena) {
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_epoch_1_EQ_IF_rx_fuid_w_data_whas___05F1_THEN_r_ETC___05F_d24) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[0U] 
                = (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__anydata___05Fh5518);
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[1U] 
                = (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__anydata___05Fh5518 
                           >> 0x20U));
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[0U] = 0U;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[1U] 
                = (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U] 
                   << 0x1dU);
        }
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U] 
            = ((0x3c0U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[2U] 
                          >> 2U)) | ((0x20U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_epoch_1_EQ_IF_rx_fuid_w_data_whas___05F1_THEN_r_ETC___05F_d24)) 
                                               << 5U)) 
                                     | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_epoch_1_EQ_IF_rx_fuid_w_data_whas___05F1_THEN_r_ETC___05F_d24)
                                         ? (0x1fU & 
                                            (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U] 
                                             >> 3U))
                                         : (0x1fU & 
                                            (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U] 
                                             >> 3U)))));
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[0U] 
            = __Vtemp_448[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[1U] 
            = __Vtemp_448[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U] 
            = __Vtemp_448[2U];
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_minstret_D_IN 
        = (((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv_mv_stop_count)) 
            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_EN_ma_incr_minstret))
            ? (1ULL + vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_minstret)
            : vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_minstret);
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid__DOT__hasodata) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_rx_rx_commitlog_deq_ena));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog__DOT__hasodata) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_rx_rx_commitlog_deq_ena));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__registerfile_EN_commit_rd 
        = ((~ (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U] 
               >> 5U)) & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__registerfile__DOT__initialize)) 
                          & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls 
        = ((0x1e0U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U] 
                      >> 1U)) | (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U]));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__registerfile__DOT__MUX_xrf_upd_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__registerfile_EN_commit_rd) 
           & (0U != (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])));
    if ((0x10U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
        if ((8U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
            if ((4U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
                if ((2U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
                    if ((1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                            = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_31_port1___05Fread) 
                                       >> 1U));
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                            = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_31_port1___05Fread));
                    } else {
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                            = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_30_port1___05Fread) 
                                       >> 1U));
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                            = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_30_port1___05Fread));
                    }
                } else if ((1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                        = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_29_port1___05Fread) 
                                   >> 1U));
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                        = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_29_port1___05Fread));
                } else {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                        = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_28_port1___05Fread) 
                                   >> 1U));
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                        = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_28_port1___05Fread));
                }
            } else if ((2U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
                if ((1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                        = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_27_port1___05Fread) 
                                   >> 1U));
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                        = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_27_port1___05Fread));
                } else {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                        = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_26_port1___05Fread) 
                                   >> 1U));
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                        = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_26_port1___05Fread));
                }
            } else if ((1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                    = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_25_port1___05Fread) 
                               >> 1U));
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                    = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_25_port1___05Fread));
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                    = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_24_port1___05Fread) 
                               >> 1U));
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                    = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_24_port1___05Fread));
            }
        } else if ((4U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
            if ((2U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
                if ((1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                        = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_23_port1___05Fread) 
                                   >> 1U));
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                        = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_23_port1___05Fread));
                } else {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                        = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_22_port1___05Fread) 
                                   >> 1U));
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                        = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_22_port1___05Fread));
                }
            } else if ((1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                    = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_21_port1___05Fread) 
                               >> 1U));
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                    = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_21_port1___05Fread));
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                    = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_20_port1___05Fread) 
                               >> 1U));
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                    = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_20_port1___05Fread));
            }
        } else if ((2U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
            if ((1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                    = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_19_port1___05Fread) 
                               >> 1U));
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                    = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_19_port1___05Fread));
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                    = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_18_port1___05Fread) 
                               >> 1U));
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                    = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_18_port1___05Fread));
            }
        } else if ((1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_17_port1___05Fread) 
                           >> 1U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_17_port1___05Fread));
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_16_port1___05Fread) 
                           >> 1U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_16_port1___05Fread));
        }
    } else if ((8U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
        if ((4U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
            if ((2U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
                if ((1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                        = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_15_port1___05Fread) 
                                   >> 1U));
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                        = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_15_port1___05Fread));
                } else {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                        = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_14_port1___05Fread) 
                                   >> 1U));
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                        = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_14_port1___05Fread));
                }
            } else if ((1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                    = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_13_port1___05Fread) 
                               >> 1U));
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                    = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_13_port1___05Fread));
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                    = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_12_port1___05Fread) 
                               >> 1U));
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                    = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_12_port1___05Fread));
            }
        } else if ((2U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
            if ((1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                    = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_11_port1___05Fread) 
                               >> 1U));
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                    = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_11_port1___05Fread));
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                    = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_10_port1___05Fread) 
                               >> 1U));
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                    = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_10_port1___05Fread));
            }
        } else if ((1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_9_port1___05Fread) 
                           >> 1U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_9_port1___05Fread));
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_8_port1___05Fread) 
                           >> 1U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_8_port1___05Fread));
        }
    } else if ((4U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
        if ((2U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
            if ((1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                    = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_7_port1___05Fread) 
                               >> 1U));
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                    = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_7_port1___05Fread));
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                    = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_6_port1___05Fread) 
                               >> 1U));
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                    = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_6_port1___05Fread));
            }
        } else if ((1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_5_port1___05Fread) 
                           >> 1U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_5_port1___05Fread));
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_4_port1___05Fread) 
                           >> 1U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_4_port1___05Fread));
        }
    } else if ((2U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
        if ((1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_3_port1___05Fread) 
                           >> 1U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_3_port1___05Fread));
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
                = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_2_port1___05Fread) 
                           >> 1U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
                = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_2_port1___05Fread));
        }
    } else if ((1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls))) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
            = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_1_port1___05Fread) 
                       >> 1U));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
            = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_1_port1___05Fread));
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102 
            = (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0) 
                       >> 1U));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139 
            = (1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0));
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102) 
            << 1U) | (((0xfU & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U] 
                                >> 6U)) != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102)) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_1_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (1U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_1_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_10_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (0xaU == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_10_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_11_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (0xbU == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_11_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_12_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (0xcU == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_12_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_13_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (0xdU == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_13_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_14_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (0xeU == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_14_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_15_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (0xfU == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_15_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_16_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (0x10U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_16_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_17_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (0x11U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_17_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_18_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (0x12U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_18_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_19_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (0x13U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_19_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_2_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (2U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_2_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_20_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (0x14U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_20_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_21_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (0x15U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_21_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_22_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (0x16U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_22_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_23_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (0x17U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_23_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_24_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (0x18U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_24_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_25_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (0x19U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_25_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_26_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (0x1aU == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_26_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_27_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (0x1bU == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_27_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_28_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (0x1cU == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_28_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_29_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (0x1dU == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_29_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_3_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (3U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_3_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_30_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (0x1eU == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_30_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_31_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (0x1fU == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_31_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_4_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (4U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_4_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_5_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (5U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_5_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_6_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (6U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_6_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_7_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (7U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_7_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_8_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (8U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_8_port1___05Fread));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_9_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
            & (9U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_9_port1___05Fread));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__51(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__51\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__sync_gpt_in__DOT__sSyncReg = 0U;
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__sync_gpt_in__DOT__sSyncReg = 0U;
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_comb__TOP__16(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_comb__TOP__16\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request_dDEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dNotEmptyReg) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__sNotFullReg));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_comb__TOP__17(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_comb__TOP__17\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request_dDEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dNotEmptyReg) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__sNotFullReg));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_comb__TOP__18(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_comb__TOP__18\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap_EN_response_from_dm 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM__DOT__empty_reg)) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_response_from_dm__DOT__dEnqToggle) 
              != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_response_from_dm__DOT__dDeqToggle)));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap_EN_response_from_dm) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__capture_repsonse_from_dm));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_comb__TOP__19(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_comb__TOP__19\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbbusyerror_D_IN 
        = (1U & ((0xe000000002ULL != (0x1fc00000003ULL 
                                      & vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data)) 
                 | ((~ (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                >> 0x18U))) & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbbusyerror))));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__x___05Fh9318 
        = ((~ (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                       >> 0xaU))) & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__cmderr));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__x_wget___05Fh5578 
        = (0xffffffU & ((2U == (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data)))
                         ? ((0x17U == (0x7fU & (IData)(
                                                       (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                        >> 0x22U))))
                             ? (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                        >> 2U)) : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__control)
                         : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__control));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__hamask_D_IN 
        = (1U & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__hamask) 
                  & (0U != ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__hasel) 
                            << 5U))) | (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__hasel)) 
                                              & (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                 >> 2U)))));
    vlSelf->__VdfgRegularize_hd87f99a1_4_1 = (IData)(
                                                     ((0xf000000000ULL 
                                                       == 
                                                       (0x1fc00000000ULL 
                                                        & vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data)) 
                                                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_106)));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_89 
        = (IData)((((0xe400000000ULL == (0x1fc00000000ULL 
                                         & vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data)) 
                    & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_117)) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbreadonaddr)));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_111 
        = (IData)((((0xf000000001ULL == (0x1fc00000003ULL 
                                         & vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data)) 
                    & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_117)) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbreadondata)));
    vlSelf->__VdfgRegularize_hd87f99a1_4_0 = (IData)(
                                                     ((0xe000000000ULL 
                                                       == 
                                                       (0x1fc00000000ULL 
                                                        & vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data)) 
                                                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_106)));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_110 
        = (IData)(((((0x5c00000000ULL == (0x1fffc000000ULL 
                                          & vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data)) 
                     & (0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__cmderr))) 
                    & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__busy))) 
                   & ((0x1000U <= (0xffffU & (IData)(
                                                     (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                      >> 2U)))) 
                      & (0x101fU >= (0xffffU & (IData)(
                                                       (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                        >> 2U)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v___05Fh95142 
        = ((0x40U & ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                              >> 0x22U)) - (IData)(4U)))
            ? 0U : ((0x20U & ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                       >> 0x22U)) - (IData)(4U)))
                     ? 0U : ((0x10U & ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                >> 0x22U)) 
                                       - (IData)(4U)))
                              ? 0U : ((8U & ((IData)(
                                                     (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                      >> 0x22U)) 
                                             - (IData)(4U)))
                                       ? ((4U & ((IData)(
                                                         (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                          >> 0x22U)) 
                                                 - (IData)(4U)))
                                           ? 0U : (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)) 
                                                       - (IData)(4U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_data_reg_11
                                                     : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_data_reg_10)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_data_reg_9
                                                     : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_data_reg_8)))
                                       : ((4U & ((IData)(
                                                         (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                          >> 0x22U)) 
                                                 - (IData)(4U)))
                                           ? ((2U & 
                                               ((IData)(
                                                        (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U)) 
                                                - (IData)(4U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_data_reg_7
                                                   : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_data_reg_6)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_data_reg_5
                                                   : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_data_reg_4))
                                           : ((2U & 
                                               ((IData)(
                                                        (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U)) 
                                                - (IData)(4U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_data_reg_3
                                                   : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_data_reg_2)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_data_reg_1
                                                   : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_data_reg_0)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v___05Fh95396 
        = ((0x40U & ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                              >> 0x22U)) - (IData)(0x20U)))
            ? 0U : ((0x20U & ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                       >> 0x22U)) - (IData)(0x20U)))
                     ? 0U : ((0x10U & ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                >> 0x22U)) 
                                       - (IData)(0x20U)))
                              ? 0U : ((8U & ((IData)(
                                                     (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                      >> 0x22U)) 
                                             - (IData)(0x20U)))
                                       ? ((4U & ((IData)(
                                                         (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                          >> 0x22U)) 
                                                 - (IData)(0x20U)))
                                           ? ((2U & 
                                               ((IData)(
                                                        (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U)) 
                                                - (IData)(0x20U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_progbuf_reg_15
                                                   : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_progbuf_reg_14)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_progbuf_reg_13
                                                   : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_progbuf_reg_12))
                                           : ((2U & 
                                               ((IData)(
                                                        (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U)) 
                                                - (IData)(0x20U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_progbuf_reg_11
                                                   : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_progbuf_reg_10)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_progbuf_reg_9
                                                   : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_progbuf_reg_8)))
                                       : ((4U & ((IData)(
                                                         (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                          >> 0x22U)) 
                                                 - (IData)(0x20U)))
                                           ? ((2U & 
                                               ((IData)(
                                                        (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U)) 
                                                - (IData)(0x20U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_progbuf_reg_7
                                                   : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_progbuf_reg_6)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_progbuf_reg_5
                                                   : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_progbuf_reg_4))
                                           : ((2U & 
                                               ((IData)(
                                                        (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U)) 
                                                - (IData)(0x20U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_progbuf_reg_3
                                                   : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_progbuf_reg_2)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))
                                                   ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_progbuf_reg_1
                                                   : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_progbuf_reg_0)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dtm_access_putCommand_put_BITS_1_TO_0_05_EQ_2___05FETC___05F_d1080 
        = ((2U == (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data))) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_71) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__busy)) 
                 & (0x30U >= (0x7fU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                               >> 0x22U)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_107 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_68) 
           & ((0x3fU != (0x7fU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                          >> 0x22U)))) 
              & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_63) 
                  & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__busy)) 
                     & ((0xbU >= (0xfU & ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                   >> 0x22U)) 
                                          - (IData)(4U)))) 
                        && (1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__autoexecdata) 
                                  >> (0xfU & ((IData)(
                                                      (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                       >> 0x22U)) 
                                              - (IData)(4U)))))))) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_71) 
                    & ((0x30U >= (0x7fU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                   >> 0x22U)))) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__busy)) 
                          & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__autoexecprogbuf) 
                             >> (0xfU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                 >> 0x22U))))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dtm_access_putCommand_put_BITS_1_TO_0_05_EQ_2___05FETC___05F_d1038 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_120) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_112) 
              & ((0x3aU != (0x7fU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                             >> 0x22U)))) 
                 & ((0x3bU != (0x7fU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                >> 0x22U)))) 
                    & ((0x37U != (0x7fU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                   >> 0x22U)))) 
                       & ((0x3cU != (0x7fU & (IData)(
                                                     (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                      >> 0x22U)))) 
                          & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_68) 
                             & ((4U <= (0x7fU & (IData)(
                                                        (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U)))) 
                                & ((0x3fU != (0x7fU 
                                              & (IData)(
                                                        (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U)))) 
                                   & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__busy)) 
                                      & (0x10U >= (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U))))))))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dtm_access_putCommand_put_BITS_40_TO_34_07_EQ___05FETC___05F_d828 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_110) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__hahalted));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh95715 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_63)
            ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v___05Fh95142
            : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_66)
                ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v___05Fh95396
                : 0U));
}

extern const VlUnpacked<CData/*3:0*/, 512> VmkTbSoc_edited__ConstPool__TABLE_haad81a34_0;

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_comb__TOP__20(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_comb__TOP__20\n"); );
    // Init
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__bypass_sr_D_IN 
        = ((0U != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
           & ((3U != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__tdi)));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate_EN 
        = (((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__tms)) 
            & (0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate))) 
           | ((0U != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
              & (((1U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
                  & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__tms)) 
                 | ((1U != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
                    & (((4U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
                        & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__tms)) 
                       | ((4U != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
                          & (((6U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
                              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__tms)) 
                             | ((6U != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
                                & (((0xbU == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
                                    & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__tms)) 
                                   | ((0xbU != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
                                      & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__tms) 
                                         | (0xdU != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)))))))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__idcode_sr_D_IN 
        = (((0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
            || (3U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)))
            ? 0x100039d3U : (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__tdi) 
                              << 0x1fU) | (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__idcode_sr 
                                           >> 1U)));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction_shiftreg_D_IN 
        = ((0xaU == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate))
            ? 0x15U : (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__tdi) 
                        << 4U) | (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction_shiftreg) 
                                          >> 1U))));
    __Vtableidx2 = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__tms) 
                     << 8U) | ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__tms)
                                  ? 2U : 1U) << 4U) 
                               | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate_D_IN 
        = VmkTbSoc_edited__ConstPool__TABLE_haad81a34_0
        [__Vtableidx2];
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dtmcontrol_shiftreg_D_IN 
        = ((3U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate))
            ? (0x7061U | ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__rg_dmihardreset) 
                            << 0x11U) | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__rg_dmireset) 
                                         << 0x10U)) 
                          | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmistat) 
                             << 0xaU))) : (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__tdi) 
                                            << 0x1fU) 
                                           | (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dtmcontrol_shiftreg 
                                              >> 1U)));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg_port0___05Fwrite_1 
        = ((0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate))
            ? 0ULL : ((3U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate))
                       ? (((QData)((IData)((0x3fU & (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg 
                                                             >> 0x22U))))) 
                           << 0x22U) | (((QData)((IData)(
                                                         (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM_D_OUT 
                                                          >> 2U))) 
                                         << 2U) | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmistat_D_IN))))
                       : ((4U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate))
                           ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__tdi)) 
                               << 0x27U) | (0x7fffffffffULL 
                                            & (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg 
                                               >> 1U)))
                           : (3ULL | (0xfffffffffcULL 
                                      & vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg)))));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_comb__TOP__21(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_comb__TOP__21\n"); );
    // Init
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_3;
    mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_3 = 0;
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_10 
        = ((3U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
           & (0x11U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction)));
    mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_3 
        = ((8U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
           & (0x10U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction)));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__bypass_sr_EN 
        = ((0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_7) 
              & (0x1fU == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction))));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__idcode_sr_EN 
        = ((0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_7) 
              & (1U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction))));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__IF_instruction_EQ_0x1_99_THEN_crossed_idcode_s_ETC___05F_d221 
        = (1U & ((0x10U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction))
                  ? ((8U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction))
                      ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__bypass_sr)
                      : ((4U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction))
                          ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__bypass_sr)
                          : ((2U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction))
                              ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__bypass_sr)
                              : ((1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction))
                                  ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg)
                                  : vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dtmcontrol_shiftreg))))
                  : ((8U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction))
                      ? ((4U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction))
                          ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__bypass_sr)
                          : ((2U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction))
                              ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__bypass_sr)
                              : ((1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction))
                                  ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__bypass_sr)
                                  : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_debug_tdi))))
                      : ((4U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction))
                          ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__bypass_sr)
                          : ((2U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction))
                              ? ((1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction))
                                  ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__bypass_sr)
                                  : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_bs_chain_tdi))
                              : ((1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction))
                                  ? vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__idcode_sr
                                  : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_bs_chain_tdi)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__crossed_instruction_wget___05F00_EQ_0x11_34_AND_re_ETC___05F_d148 
        = ((0x11U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction)) 
           & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__capture_repsonse_from_dm) 
                  | (0U == (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg))))) 
              & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__request_to_DM__DOT__empty_reg))));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_11 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_10) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM__DOT__empty_reg));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__rg_dmihardreset_EN 
        = ((0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
           | (IData)(mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_3));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmireset_generated_whas 
        = ((IData)(mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_3) 
           & (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dtmcontrol_shiftreg 
              >> 0x10U));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmihardreset_generated_whas 
        = ((IData)(mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_3) 
           & (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dtmcontrol_shiftreg 
              >> 0x11U));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_12 
        = ((8U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__crossed_instruction_wget___05F00_EQ_0x11_34_AND_re_ETC___05F_d148));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__rg_dmireset_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__rg_dmihardreset_EN) 
           & ((0U != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
              & (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dtmcontrol_shiftreg 
                 >> 0x10U)));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_status_EN 
        = (((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmihardreset_generated_whas)) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_10) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__capture_repsonse_from_dm) 
                  | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM__DOT__empty_reg)))) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmireset_generated_whas));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmistat_EN 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmihardreset_generated_whas)) 
           & ((3U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
              & ((0x11U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction)) 
                 & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM__DOT__empty_reg))));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__WILL_FIRE_RL_dmihardreset_generated 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap_EN_request_to_dm)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmihardreset_generated_whas));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__request_to_DM_ENQ 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmihardreset_generated_whas)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_12));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__MUX_capture_repsonse_from_dm_write_1___05FSEL_2 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmihardreset_generated_whas)) 
           & ((0U != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
              & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_11) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_12))));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate_EQ_3_8_AND_crossed_instruction_wget___05F_ETC___05F_d152 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_11) 
           | (((4U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
               & (0x11U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction))) 
              | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_12)));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__request_to_DM_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__WILL_FIRE_RL_dmihardreset_generated) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap_EN_request_to_dm));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmistat_EN) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__WILL_FIRE_RL_dmihardreset_generated));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__capture_repsonse_from_dm_D_IN 
        = ((1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmireset_generated_whas))) 
           && ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__MUX_capture_repsonse_from_dm_write_1___05FSEL_2) 
               && (3U != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate))));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__capture_repsonse_from_dm_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__MUX_capture_repsonse_from_dm_write_1___05FSEL_2) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__WILL_FIRE_RL_dmihardreset_generated) 
              | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmireset_generated_whas)));
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg_EN_port0___05Fwrite 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmihardreset_generated_whas)) 
           & ((0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
              | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate_EQ_3_8_AND_crossed_instruction_wget___05F_ETC___05F_d152)));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__52(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__52\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dDeqToggle 
        = vlSelf->__Vdly__mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dDeqToggle;
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__53(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__53\n"); );
    // Init
    CData/*3:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGrayP__34__Vfuncout;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGrayP__34__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGrayP__34__grayPin;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGrayP__34__grayPin = 0;
    CData/*2:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__35__Vfuncout;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__35__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__35__grayin;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__35__grayin = 0;
    CData/*0:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__35__parity;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__35__parity = 0;
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset_OUT_RST 
        = (1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset__DOT__reset_hold) 
                 >> 1U));
    if (vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) {
        if ((((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dNotEmptyReg)) 
              | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request_dDEQ)) 
             & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dNextNotEmpty))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__fifoMem
                [(3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dGDeqPtr))][0U];
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[1U] 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__fifoMem
                [(3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dGDeqPtr))][1U];
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[2U] 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__fifoMem
                [(3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dGDeqPtr))][2U];
        }
        if ((((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dNotEmptyReg)) 
              | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request_dDEQ)) 
             & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dNextNotEmpty))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__i = 2U;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dGDeqPtr 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dGDeqPtr1;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dNotEmptyReg = 1U;
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGrayP__34__grayPin 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dGDeqPtr1;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__g 
                = (7U & ((IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGrayP__34__grayPin) 
                         >> 1U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__p 
                = (1U & (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGrayP__34__grayPin));
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__35__parity 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__p;
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__35__grayin 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__g;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips 
                = ((6U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips)) 
                   | (1U & (~ (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__35__parity))));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT____Vlvbound_h5b28c031__0 
                = ((IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__35__parity) 
                   & (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__35__grayin));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips 
                = ((5U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips)) 
                   | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT____Vlvbound_h5b28c031__0) 
                      << 1U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__tempshift 
                = (7U & VL_SHIFTL_III(3,3,32, (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__35__grayin), 2U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips 
                = ((3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips)) 
                   | (((IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__35__parity) 
                       & (~ (IData)((0U != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__tempshift))))) 
                      << 2U));
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__35__Vfuncout 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips) 
                   ^ (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__35__grayin));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__i 
                = __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__35__Vfuncout;
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGrayP__34__Vfuncout 
                = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__i) 
                    << 1U) | (1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__p))));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dGDeqPtr1 
                = __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGrayP__34__Vfuncout;
        } else if (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request_dDEQ) 
                    & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dNextNotEmpty)))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dNotEmptyReg = 0U;
        }
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[1U] = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[2U] = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dGDeqPtr = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dGDeqPtr1 = 3U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dNotEmptyReg = 0U;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dNextNotEmpty 
        = ((7U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dGDeqPtr) 
                  >> 1U)) != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dEnqPtr));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__54(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__54\n"); );
    // Init
    CData/*3:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGrayP__14__Vfuncout;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGrayP__14__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGrayP__14__grayPin;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGrayP__14__grayPin = 0;
    CData/*2:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__15__Vfuncout;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__15__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__15__grayin;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__15__grayin = 0;
    CData/*0:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__15__parity;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__15__parity = 0;
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset_OUT_RST 
        = (1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset__DOT__reset_hold) 
                 >> 1U));
    if (vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) {
        if ((((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dNotEmptyReg)) 
              | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request_dDEQ)) 
             & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dNextNotEmpty))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__fifoMem
                [(3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dGDeqPtr))][0U];
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[1U] 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__fifoMem
                [(3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dGDeqPtr))][1U];
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[2U] 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__fifoMem
                [(3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dGDeqPtr))][2U];
        }
        if ((((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dNotEmptyReg)) 
              | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request_dDEQ)) 
             & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dNextNotEmpty))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__i = 2U;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dGDeqPtr 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dGDeqPtr1;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dNotEmptyReg = 1U;
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGrayP__14__grayPin 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dGDeqPtr1;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__g 
                = (7U & ((IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGrayP__14__grayPin) 
                         >> 1U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__p 
                = (1U & (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGrayP__14__grayPin));
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__15__parity 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__p;
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__15__grayin 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__g;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips 
                = ((6U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips)) 
                   | (1U & (~ (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__15__parity))));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT____Vlvbound_h5b28c031__0 
                = ((IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__15__parity) 
                   & (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__15__grayin));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips 
                = ((5U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips)) 
                   | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT____Vlvbound_h5b28c031__0) 
                      << 1U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__tempshift 
                = (7U & VL_SHIFTL_III(3,3,32, (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__15__grayin), 2U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips 
                = ((3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips)) 
                   | (((IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__15__parity) 
                       & (~ (IData)((0U != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__tempshift))))) 
                      << 2U));
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__15__Vfuncout 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips) 
                   ^ (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__15__grayin));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__i 
                = __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__15__Vfuncout;
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGrayP__14__Vfuncout 
                = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__i) 
                    << 1U) | (1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__p))));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dGDeqPtr1 
                = __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGrayP__14__Vfuncout;
        } else if (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request_dDEQ) 
                    & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dNextNotEmpty)))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dNotEmptyReg = 0U;
        }
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[1U] = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[2U] = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dGDeqPtr = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dGDeqPtr1 = 3U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dNotEmptyReg = 0U;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dNextNotEmpty 
        = ((7U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dGDeqPtr) 
                  >> 1U)) != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dEnqPtr));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_comb__TOP__22(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_comb__TOP__22\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__uart0_uart_rXmitDataOut_D_IN 
        = (1U & ((IData)(vlSelf->mkTbSoc__DOT__MUX_uart0_uart_rXmitDataOut_write_1___05FSEL_1)
                  ? (IData)(vlSelf->mkTbSoc__DOT__uart0_uart_vrXmitBuffer_0)
                  : ((IData)(vlSelf->mkTbSoc__DOT__WILL_FIRE_RL_uart0_uart_transmit_send_parity_bit)
                      ? ((1U == (IData)(vlSelf->mkTbSoc__DOT__uart0_rg_parity))
                          ? (~ (IData)(vlSelf->mkTbSoc__DOT__uart0_uart_rXmitParity))
                          : ((2U == (IData)(vlSelf->mkTbSoc__DOT__uart0_rg_parity)) 
                             & (IData)(vlSelf->mkTbSoc__DOT__uart0_uart_rXmitParity)))
                      : ((1U & (~ (IData)(vlSelf->mkTbSoc__DOT__WILL_FIRE_RL_uart0_uart_transmit_send_start_bit))) 
                         && (IData)(vlSelf->mkTbSoc__DOT__MUX_uart0_uart_rXmitDataOut_write_1___05FSEL_4)))));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_comb__TOP__23(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_comb__TOP__23\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__rg_client_fd_EN = ((IData)(vlSelf->mkTbSoc__DOT__WILL_FIRE_RL_rl_initial) 
                                             & (0xffffffffU 
                                                != vlSelf->mkTbSoc__DOT__b___05Fh95150));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_comb__TOP__24(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_comb__TOP__24\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__MUX_rg_start_address_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__s_xactor_f_wr_addr_DEQ) 
           & (0ULL == (0xf00000ULL & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__s_xactor_f_wr_addr__DOT__data0_reg)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__ff_lower_order_bits_ENQ 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__m_xactor_f_rd_addr__DOT__full_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__ff_lower_order_bits__DOT__not_ring_full) 
               & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_start))) 
           & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_start_address 
              < vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_end_address));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_end_address_EN) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_start_D_IN 
            = (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_start_address 
               != ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__s_xactor_f_wr_data__DOT__data0_reg[1U] 
                    << 0x13U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U] 
                                 >> 0xdU)));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_total_count_D_IN 
            = VL_SHIFTR_III(32,32,32, (((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__s_xactor_f_wr_data__DOT__data0_reg[1U] 
                                         << 0x13U) 
                                        | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U] 
                                           >> 0xdU)) 
                                       - vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_start_address), 2U);
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_start_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_total_count_D_IN 
            = (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_total_count 
               - (IData)(1U));
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_start_address_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__MUX_rg_start_address_write_1___05FSEL_1)
            ? ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__s_xactor_f_wr_data__DOT__data0_reg[1U] 
                << 0x13U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U] 
                             >> 0xdU)) : ((IData)(4U) 
                                          + vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_start_address));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_comb__TOP__25(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_comb__TOP__25\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh95821 
        = ((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                          >> 0x28U))) ? ((1U & (IData)(
                                                       (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                        >> 0x27U)))
                                          ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh95715
                                          : ((1U & (IData)(
                                                           (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                            >> 0x26U)))
                                              ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh95715
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0x25U)))
                                                  ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh95715
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x24U)))
                                                   ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh95715
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                               >> 0x23U)))
                                                    ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh95715
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh95715
                                                     : 0U))))))
            : ((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                              >> 0x27U))) ? ((1U & (IData)(
                                                           (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                            >> 0x26U)))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0x25U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x24U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                               >> 0x23U)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? 
                                                    ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbbusy)
                                                      ? 0U
                                                      : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbdata1)
                                                     : 
                                                    ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbbusy)
                                                      ? 0U
                                                      : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbdata0)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                               >> 0x23U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbaddress2
                                                     : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbaddress1)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbaddress0
                                                     : 
                                                    (0x2000040fU 
                                                     | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbbusyerror) 
                                                         << 0x16U) 
                                                        | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbbusy) 
                                                            << 0x15U) 
                                                           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbreadonaddr) 
                                                               << 0x14U) 
                                                              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbaccess) 
                                                                  << 0x11U) 
                                                                 | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbautoincrement) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbreadondata) 
                                                                        << 0xfU) 
                                                                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sberr) 
                                                                          << 0xcU)))))))))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x24U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                               >> 0x23U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbaddress3
                                                     : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh95715)
                                                    : 0U)
                                                   : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh95715))
                                              : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh95715)
                : ((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                  >> 0x26U))) ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0x25U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x24U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                               >> 0x23U)))
                                                    ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh95715
                                                    : 0U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                               >> 0x23U)))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? 0U
                                                     : 
                                                    (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__autoexecprogbuf) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__autoexecdata)))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x24U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                               >> 0x23U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? 0U
                                                     : 
                                                    (0x1000000cU 
                                                     | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__busy) 
                                                         << 0xcU) 
                                                        | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__relaxedpriv) 
                                                            << 0xbU) 
                                                           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__cmderr) 
                                                              << 8U)))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? 
                                                    ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__hasel)) 
                                                     & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__hamask))
                                                     : 0U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                               >> 0x23U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__hahalted)
                                                     : 
                                                    (0xf1ffffU 
                                                     & vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_hartinfo_reg_0))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))
                                                     ? 
                                                    (0x400000U 
                                                     | ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__ndmresetpending) 
                                                          << 0x18U) 
                                                         | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__allhavereset) 
                                                             << 0x13U) 
                                                            | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__anyhavereset) 
                                                                << 0x12U) 
                                                               | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__allresumeack) 
                                                                   << 0x11U) 
                                                                  | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__anyresumeack) 
                                                                      << 0x10U) 
                                                                     | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__allnonexistent) 
                                                                         << 0xfU) 
                                                                        | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__anynonexistent) 
                                                                            << 0xeU) 
                                                                           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__allunavail) 
                                                                               << 0xdU) 
                                                                              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__anyunavail) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__allrunning) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__anyrunning) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__allhalted) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__anyhalted) 
                                                                                << 8U) 
                                                                                | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__authenticated) 
                                                                                << 7U)))))))))))))) 
                                                        | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__authbusy) 
                                                            << 6U) 
                                                           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__hasresethaltreq) 
                                                               << 5U) 
                                                              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__confstrptrvalid) 
                                                                  << 4U) 
                                                                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__version))))))
                                                     : 
                                                    (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__hartreset) 
                                                      << 0x1dU) 
                                                     | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__ndmreset) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dmactive)))))))
                    : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh95715)));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__CASE_dtm_access_putCommand_put_BITS_1_TO_0_1_y_ETC___05Fq6 
        = ((1U == (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data)))
            ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh95821)) 
                << 2U) | (QData)((IData)((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_109) 
                                           | ((0x40U 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))) 
                                              | ((0x13U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))) 
                                                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_100) 
                                                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_105) 
                                                       | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_99))))))
                                           ? 0U : 2U))))
            : ((2U == (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data)))
                ? (QData)((IData)((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_109) 
                                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_100) 
                                       | ((0x3bU == 
                                           (0x7fU & (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0x22U)))) 
                                          | ((0x37U 
                                              == (0x7fU 
                                                  & (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0x22U)))) 
                                             | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_99)))))
                                    ? 0U : 2U))) : 0ULL));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_comb__TOP__26(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_comb__TOP__26\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg_port1___05Fread 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg_EN_port0___05Fwrite)
            ? vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg_port0___05Fwrite_1
            : vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg);
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_comb__TOP__27(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_comb__TOP__27\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module_EN_dtm_access_putCommand_put 
        = ((~ (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dmi_response 
                       >> 0x22U))) & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dEnqToggle) 
                                      != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dDeqToggle)));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__55(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__55\n"); );
    // Body
    if (vlSelf->__Vdlyvset__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__fifoMem__v0) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__fifoMem[vlSelf->__Vdlyvdim0__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__fifoMem__v0][0U] 
            = vlSelf->__Vdlyvval__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__fifoMem__v0[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__fifoMem[vlSelf->__Vdlyvdim0__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__fifoMem__v0][1U] 
            = vlSelf->__Vdlyvval__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__fifoMem__v0[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__fifoMem[vlSelf->__Vdlyvdim0__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__fifoMem__v0][2U] 
            = vlSelf->__Vdlyvval__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__fifoMem__v0[2U];
    }
    if (vlSelf->__Vdlyvset__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__fifoMem__v0) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__fifoMem[vlSelf->__Vdlyvdim0__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__fifoMem__v0][0U] 
            = vlSelf->__Vdlyvval__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__fifoMem__v0[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__fifoMem[vlSelf->__Vdlyvdim0__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__fifoMem__v0][1U] 
            = vlSelf->__Vdlyvval__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__fifoMem__v0[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__fifoMem[vlSelf->__Vdlyvdim0__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__fifoMem__v0][2U] 
            = vlSelf->__Vdlyvval__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__fifoMem__v0[2U];
    }
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_comb__TOP__28(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_comb__TOP__28\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request_dDEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__sNotFullReg) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dNotEmptyReg) 
              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__dNotEmptyReg)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_divider_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request_dDEQ) 
           & (IData)((0x82ULL == (0x1fe3ULL & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__dDoutReg))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_duty_cycle_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request_dDEQ) 
           & (IData)((0x202ULL == (0x1fe3ULL & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__dDoutReg))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_period_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request_dDEQ) 
           & (IData)((0x282ULL == (0x1fe3ULL & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__dDoutReg))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request_dDEQ) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT____VdfgRegularize_h4bf44f78_14_21));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_capture_input_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_2) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_cntr_overflow_intr_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
           & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
              >> 0x15U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_cntr_underflow_intr_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
           & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
              >> 0x16U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_pwm_fall_intr_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
           & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
              >> 0x13U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_pwm_rise_intr_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
           & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
              >> 0x14U));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__56(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__56\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset = ((IData)(vlSelf->RST_N) 
                                                 & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__ndm_reset__DOT__rst));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_comb__TOP__29(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_comb__TOP__29\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request_dDEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__sNotFullReg) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dNotEmptyReg) 
              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__dNotEmptyReg)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_divider_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request_dDEQ) 
           & (IData)((0x82ULL == (0x1fe3ULL & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__dDoutReg))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_duty_cycle_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request_dDEQ) 
           & (IData)((0x202ULL == (0x1fe3ULL & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__dDoutReg))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_period_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request_dDEQ) 
           & (IData)((0x282ULL == (0x1fe3ULL & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__dDoutReg))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request_dDEQ) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT____VdfgRegularize_h4bf44f78_14_21));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_capture_input_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_2) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_cntr_overflow_intr_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
           & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
              >> 0x15U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_cntr_underflow_intr_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
           & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
              >> 0x16U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_pwm_fall_intr_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
           & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
              >> 0x13U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_pwm_rise_intr_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
           & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
              >> 0x14U));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_comb__TOP__30(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_comb__TOP__30\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__autoexecdata_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module_EN_dtm_access_putCommand_put) 
           & (IData)(((0x6000000002ULL == (0x1fc00000003ULL 
                                           & vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data)) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_114))));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__rg_sbwrite_en_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module_EN_dtm_access_putCommand_put) 
           & ((2U == (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data))) 
              & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_1)));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__rg_sbread_en_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module_EN_dtm_access_putCommand_put) 
           & (((2U == (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data))) 
               & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_89)) 
              | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_111)));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbbusy_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module_EN_dtm_access_putCommand_put) 
           & (((2U == (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data))) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_89) 
                  | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_1))) 
              | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_111)));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_50 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module_EN_dtm_access_putCommand_put) 
            & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_124) 
                & ((0x16U == (0x7fU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                               >> 0x22U)))) 
                   | ((0x17U == (0x7fU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                  >> 0x22U)))) 
                      | ((0x18U == (0x7fU & (IData)(
                                                    (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                     >> 0x22U)))) 
                         | ((0x19U != (0x7fU & (IData)(
                                                       (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                        >> 0x22U)))) 
                            & ((0x1aU != (0x7fU & (IData)(
                                                          (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                           >> 0x22U)))) 
                               & ((0x1bU != (0x7fU 
                                             & (IData)(
                                                       (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                        >> 0x22U)))) 
                                  & ((0x1cU != (0x7fU 
                                                & (IData)(
                                                          (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                           >> 0x22U)))) 
                                     & ((0x1dU != (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))) 
                                        & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_119) 
                                           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_112) 
                                              & ((0x3aU 
                                                  != 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0x22U)))) 
                                                 & ((0x3bU 
                                                     != 
                                                     (0x7fU 
                                                      & (IData)(
                                                                (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                 >> 0x22U)))) 
                                                    & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_121) 
                                                       & ((0x3dU 
                                                           != 
                                                           (0x7fU 
                                                            & (IData)(
                                                                      (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                       >> 0x22U)))) 
                                                          & ((0x3eU 
                                                              != 
                                                              (0x7fU 
                                                               & (IData)(
                                                                         (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                          >> 0x22U)))) 
                                                             & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_118))))))))))))))))) 
               | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_123) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_68) 
                     & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_118))))) 
           & ((0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__cmderr)) 
              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__busy)));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbaccess_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module_EN_dtm_access_putCommand_put) 
           & ((2U == (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data))) 
              & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_0)));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__busy_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module_EN_dtm_access_putCommand_put) 
           & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_46) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dtm_access_putCommand_put_BITS_40_TO_34_07_EQ___05FETC___05F_d828) 
                  | ((0x17U != (0x7fU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                 >> 0x22U)))) 
                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_108) 
                        & ((0x1aU != (0x7fU & (IData)(
                                                      (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                       >> 0x22U)))) 
                           & ((0x1bU != (0x7fU & (IData)(
                                                         (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                          >> 0x22U)))) 
                              & ((0x1cU != (0x7fU & (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0x22U)))) 
                                 & ((0x1dU != (0x7fU 
                                               & (IData)(
                                                         (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                          >> 0x22U)))) 
                                    & ((0x34U != (0x7fU 
                                                  & (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0x22U)))) 
                                       & ((0x35U != 
                                           (0x7fU & (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0x22U)))) 
                                          & ((0x38U 
                                              != (0x7fU 
                                                  & (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0x22U)))) 
                                             & ((0x39U 
                                                 != 
                                                 (0x7fU 
                                                  & (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0x22U)))) 
                                                & ((0x3aU 
                                                    != 
                                                    (0x7fU 
                                                     & (IData)(
                                                               (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                >> 0x22U)))) 
                                                   & ((0x3bU 
                                                       != 
                                                       (0x7fU 
                                                        & (IData)(
                                                                  (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                   >> 0x22U)))) 
                                                      & ((0x37U 
                                                          != 
                                                          (0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                      >> 0x22U)))) 
                                                         & ((0x3cU 
                                                             != 
                                                             (0x7fU 
                                                              & (IData)(
                                                                        (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                         >> 0x22U)))) 
                                                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_107))))))))))))))))) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_123) 
                 & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_107))));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sberr_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbaccess_EN)
            ? ((~ (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                           >> 0xeU))) & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sberr))
            : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__master_xactor_f_wr_resp_DEQ)
                ? ((2U == (3U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__master_xactor_f_wr_resp__DOT__data0_reg) 
                                 >> 4U))) ? 7U : ((3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__master_xactor_f_wr_resp__DOT__data0_reg) 
                                                       >> 4U)))
                                                   ? 2U
                                                   : 0U))
                : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__master_xactor_f_rd_data_DEQ)
                    ? ((2U == (3U & (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__master_xactor_f_rd_data__DOT__data0_reg[2U] 
                                     >> 5U))) ? 7U : 
                       ((3U == (3U & (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__master_xactor_f_rd_data__DOT__data0_reg[2U] 
                                      >> 5U))) ? 2U
                         : 0U)) : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__MUX_sbbusy_write_1___05FSEL_4)
                                    ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__MUX_sberr_write_1___05FVAL_4)
                                    : 0U))));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__wr_errexception_whas 
        = (((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__busy_D_IN)) 
            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_49)) 
           & (((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__wr_harthalting_wren_whas)) 
               | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_flags_0)) 
              | (0U != ((vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_wr_data__DOT__data0_reg[1U] 
                         << 0x13U) | (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_wr_data__DOT__data0_reg[0U] 
                                      >> 0xdU)))));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__NOT_wr_cmdtype_wren_whas___05F0_6_OR_NOT_wr_cmdtyp_ETC___05F_d105 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__busy_D_IN)) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__busy_3_AND_NOT_v_flags_0_4_BIT_0_5_6_7_AND_wr___05FETC___05F_d89) 
              & ((0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__cmdtype)) 
                 & (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__control 
                    >> 0x13U))));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_abstract_reg_0_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__busy_D_IN) 
           & (0U == (0xffU & ((2U == (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data)))
                               ? ((0x17U == (0x7fU 
                                             & (IData)(
                                                       (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                        >> 0x22U))))
                                   ? (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                              >> 0x1aU))
                                   : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__cmdtype))
                               : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__cmdtype)))));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__control_D_IN 
        = (0xffffffU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__NOT_wr_cmdtype_wren_whas___05F0_6_OR_NOT_wr_cmdtyp_ETC___05F_d105)
                         ? ((0x7f0000U & vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__control) 
                            | (0xffffU & ((IData)(1U) 
                                          + vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__control)))
                         : (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                    >> 2U))));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_flags_0_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__haresumereq) 
            << 1U) | (1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_abstract_reg_0_EN) 
                            | ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_wr_addr_DEQ) 
                                   & (0x10400000ULL 
                                      == (0xfff00000ULL 
                                          & vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_wr_addr__DOT__data0_reg)))) 
                               & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_flags_0)))));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_comb__TOP__31(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_comb__TOP__31\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_3 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module_EN_dtm_access_putCommand_put) 
           & (2U == (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data))));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__relaxedpriv_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_3) 
           & (0x5800000000ULL == (0x1fc00000000ULL 
                                  & vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data)));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dmactive_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_3) 
           & (0x4000000000ULL == (0x1fc00000000ULL 
                                  & vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data)));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__wr_resumereq_wren_whas 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dmactive_EN) 
           & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                      >> 0x20U)));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_comb__TOP__32(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_comb__TOP__32\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__cmdtype_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_3) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dtm_access_putCommand_put_BITS_40_TO_34_07_EQ___05FETC___05F_d828));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__MUX_sbdata1_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_3) 
           & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbbusy)) 
              & (0xf400000000ULL == (0x1fc00000000ULL 
                                     & vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data))));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__wr_errnotsupported_whas 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_3) 
           & (IData)((((0x5c00000000ULL == (0x1fc00000000ULL 
                                            & vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data)) 
                       & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_114)) 
                      & ((0ULL != (0x3fc000000ULL & vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data)) 
                         | ((0x101fU < (0xffffU & (IData)(
                                                          (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                           >> 2U)))) 
                            | (0x1000U > (0xffffU & (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 2U)))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__wr_errhaltresume_whas 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_3) 
           & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__hahalted)) 
              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_110)));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__MUX_sbaddress0_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_3) 
           & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbbusy)) 
              & (0xe400000000ULL == (0x1fc00000000ULL 
                                     & vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data))));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__haresumereq_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__wr_resumereq_wren_whas) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__wr_hartresuming_wren_whas)
               ? ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__x___05Fh8817)) 
                  & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__haresumereq))
               : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__haresumereq)));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbaddress0_EN 
        = ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbdata2_EN) 
             | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_138)) 
            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbautoincrement)) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__MUX_sbaddress0_write_1___05FSEL_1));
    vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbaddress0_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__MUX_sbaddress0_write_1___05FSEL_1)
            ? (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                       >> 2U)) : (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_138) 
                                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbautoincrement))
                                   ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__MUX_sbaddress0_write_1___05FVAL_2
                                   : (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbdata2_EN) 
                                       & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbautoincrement))
                                       ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__MUX_sbaddress0_write_1___05FVAL_2
                                       : 0U)));
}

void VmkTbSoc_edited___024root___eval_triggers__act(VmkTbSoc_edited___024root* vlSelf);
void VmkTbSoc_edited___024root___eval_act(VmkTbSoc_edited___024root* vlSelf);

bool VmkTbSoc_edited___024root___eval_phase__act(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<25> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VmkTbSoc_edited___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VmkTbSoc_edited___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VmkTbSoc_edited___024root___eval_nba(VmkTbSoc_edited___024root* vlSelf);

bool VmkTbSoc_edited___024root___eval_phase__nba(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VmkTbSoc_edited___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VmkTbSoc_edited___024root___dump_triggers__ico(VmkTbSoc_edited___024root* vlSelf);
#endif  // VL_DEBUG
bool VmkTbSoc_edited___024root___eval_phase__ico(VmkTbSoc_edited___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VmkTbSoc_edited___024root___dump_triggers__nba(VmkTbSoc_edited___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VmkTbSoc_edited___024root___dump_triggers__act(VmkTbSoc_edited___024root* vlSelf);
#endif  // VL_DEBUG

void VmkTbSoc_edited___024root___eval(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VmkTbSoc_edited___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("build/hw/verilog/mkTbSoc_edited.v", 44, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VmkTbSoc_edited___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VmkTbSoc_edited___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("build/hw/verilog/mkTbSoc_edited.v", 44, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VmkTbSoc_edited___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("build/hw/verilog/mkTbSoc_edited.v", 44, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VmkTbSoc_edited___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VmkTbSoc_edited___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VmkTbSoc_edited___024root___eval_debug_assertions(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->RST_N & 0xfeU))) {
        Verilated::overWidthError("RST_N");}
}
#endif  // VL_DEBUG
