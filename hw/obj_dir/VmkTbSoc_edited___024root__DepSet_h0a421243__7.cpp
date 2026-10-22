// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTbSoc_edited.h for the primary calling header

#include "VmkTbSoc_edited__pch.h"
#include "VmkTbSoc_edited___024root.h"

extern const VlUnpacked<CData/*2:0*/, 64> VmkTbSoc_edited__ConstPool__TABLE_hd0e0e84c_0;
extern const VlUnpacked<CData/*3:0*/, 128> VmkTbSoc_edited__ConstPool__TABLE_h4157c14f_0;
extern const VlUnpacked<CData/*2:0*/, 128> VmkTbSoc_edited__ConstPool__TABLE_hb9803b17_0;

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__16(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__16\n"); );
    // Init
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__soc__DOT___dor1fabric_v_f_wrd_sjs_0_EN_deq;
    mkTbSoc__DOT__soc__DOT__soc__DOT___dor1fabric_v_f_wrd_sjs_0_EN_deq = 0;
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__soc__DOT___dor1fabric_v_f_wrd_sjs_1_EN_deq;
    mkTbSoc__DOT__soc__DOT__soc__DOT___dor1fabric_v_f_wrd_sjs_1_EN_deq = 0;
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__soc__DOT___dor1fabric_v_f_wrd_sjs_2_EN_deq;
    mkTbSoc__DOT__soc__DOT__soc__DOT___dor1fabric_v_f_wrd_sjs_2_EN_deq = 0;
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__soc__DOT___dor1fabric_v_f_wrd_sjs_3_EN_deq;
    mkTbSoc__DOT__soc__DOT__soc__DOT___dor1fabric_v_f_wrd_sjs_3_EN_deq = 0;
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_39;
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_39 = 0;
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_40;
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_40 = 0;
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_41;
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_41 = 0;
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_42;
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_42 = 0;
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_43;
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_43 = 0;
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_44;
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_44 = 0;
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_86;
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_86 = 0;
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_88;
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_88 = 0;
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_89;
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_89 = 0;
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_90;
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_90 = 0;
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_91;
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_91 = 0;
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_92;
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_92 = 0;
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_94;
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_94 = 0;
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_95;
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_95 = 0;
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_96;
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_96 = 0;
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_97;
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_97 = 0;
    CData/*0:0*/ mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155;
    mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*6:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*6:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*6:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*6:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*6:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*6:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*6:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*6:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*5:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    CData/*6:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_1_enq_1___05FSEL_1 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_1));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_8 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_1)) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_addr__DOT__full_reg) 
              & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_61) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__empty_reg) 
                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_1__DOT__full_reg) 
                        & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__empty_reg) 
                           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_1__DOT__full_reg) 
                              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1__DOT__full_reg)))))) 
                 & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_101) 
                    & ((0x2000000U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__data0_reg 
                                               >> 0x14U))) 
                       & (0x20bffffU >= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__data0_reg 
                                                 >> 0x14U))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_2_enq_1___05FSEL_1 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_2));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_9 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_2)) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_addr__DOT__full_reg) 
              & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_60) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__empty_reg) 
                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_1__DOT__full_reg) 
                        & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__empty_reg) 
                           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_2__DOT__full_reg) 
                              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1__DOT__full_reg)))))) 
                 & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_42) 
                    & (0xfffU >= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__data0_reg 
                                          >> 0x14U)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_5_enq_1___05FSEL_1 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_5));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_12 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_5)) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_addr__DOT__full_reg) 
              & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_57) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__empty_reg) 
                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_1__DOT__full_reg) 
                        & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__empty_reg) 
                           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_5__DOT__full_reg) 
                              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1__DOT__full_reg)))))) 
                 & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_101) 
                    & ((0xfffU < (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__data0_reg 
                                          >> 0x14U))) 
                       & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_71) 
                          & ((0x1000U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__data0_reg 
                                                  >> 0x14U))) 
                             & (0x8fffU >= (IData)(
                                                   (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__data0_reg 
                                                    >> 0x14U))))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_0_enq_1___05FSEL_2 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_7));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_87 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_7)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_4_enq_1___05FSEL_1 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_4));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_11 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_4)) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_addr__DOT__full_reg) 
              & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_58) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__empty_reg) 
                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_1__DOT__full_reg) 
                        & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__empty_reg) 
                           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_4__DOT__full_reg) 
                              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1__DOT__full_reg)))))) 
                 & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_70) 
                    & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_69) 
                       & (((0x11300U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__data0_reg 
                                                 >> 0x14U))) 
                           & (0x47fffU >= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__data0_reg 
                                                   >> 0x14U)))) 
                          | ((0xc000000U <= (IData)(
                                                    (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__data0_reg 
                                                     >> 0x14U))) 
                             & (0xfffffffU >= (IData)(
                                                      (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__data0_reg 
                                                       >> 0x14U))))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_6 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_addr__DOT__empty_reg) 
           & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_72) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_addr__DOT__full_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_56) 
                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_6__DOT__full_reg) 
                        & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_0__DOT__full_reg))))) 
              & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_39) 
                 & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_38) 
                    & ((0x50000U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_addr__DOT__data0_reg 
                                             >> 0x14U))) 
                       & (0x5000cU >= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_addr__DOT__data0_reg 
                                               >> 0x14U))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_3 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_addr__DOT__empty_reg) 
           & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_72) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_addr__DOT__full_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_59) 
                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_3__DOT__full_reg) 
                        & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_0__DOT__full_reg))))) 
              & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_39) 
                 & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_38) 
                    & ((0x5000cU < (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_addr__DOT__data0_reg 
                                            >> 0x14U))) 
                       | (0x50000U > (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_addr__DOT__data0_reg 
                                              >> 0x14U))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_0_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_1_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x100U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_10_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0xa00U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_11_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0xb00U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_12_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0xc00U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_13_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0xd00U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_14_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0xe00U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_15_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0xf00U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_16_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x1000U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_17_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x1100U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_18_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x1200U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_19_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x1300U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_2_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x200U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_20_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x1400U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_21_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x1500U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_22_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x1600U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_23_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x1700U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_24_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x1800U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_25_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x1900U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_26_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x1a00U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_27_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x1b00U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_28_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x1c00U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_29_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x1d00U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_3_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x300U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_30_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x1e00U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_31_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x1f00U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_32_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x2000U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_33_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x2100U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_34_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x2200U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_35_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x2300U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_4_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x400U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_5_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x500U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_6_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x600U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_7_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x700U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_8_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x800U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_9_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr_DEQ) 
           & (IData)(((0x900U == (0x3ff00U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U])) 
                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_156))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_rg_delay_count_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__MUX_user_ifc_uart_rg_delay_count_write_1___05FSEL_1) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__MUX_user_ifc_uart_rg_delay_count_write_1___05FSEL_2) 
              | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_transmit_send_start_bit)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_rg_delay_count_D_IN 
        = (0xffffU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__MUX_user_ifc_uart_rg_delay_count_write_1___05FSEL_1)
                       ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT____VdfgRegularize_h44a04759_9_5)
                           ? 0U : ((IData)(1U) + (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_rg_delay_count)))
                       : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__MUX_user_ifc_uart_rg_delay_count_write_1___05FSEL_2)
                           ? ((IData)(1U) + (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_rg_delay_count))
                           : 0U)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_rXmitCellCount_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_pwXmitCellCountReset_whas)
            ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_rXmitCellCount))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_rXmitParity_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_fifoXmit__DOT__hasodata) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_pwXmitLoadBuffer_whas));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_rg_delay_count_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__MUX_user_ifc_uart_rg_delay_count_write_1___05FSEL_1) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__MUX_user_ifc_uart_rg_delay_count_write_1___05FSEL_2) 
              | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_transmit_send_start_bit)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_rg_delay_count_D_IN 
        = (0xffffU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__MUX_user_ifc_uart_rg_delay_count_write_1___05FSEL_1)
                       ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT____VdfgRegularize_h44a04759_9_5)
                           ? 0U : ((IData)(1U) + (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_rg_delay_count)))
                       : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__MUX_user_ifc_uart_rg_delay_count_write_1___05FSEL_2)
                           ? ((IData)(1U) + (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_rg_delay_count))
                           : 0U)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_rXmitCellCount_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_pwXmitCellCountReset_whas)
            ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_rXmitCellCount))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_rXmitParity_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_fifoXmit__DOT__hasodata) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_pwXmitLoadBuffer_whas));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__lv_mem_response_data___05Fh131094 
        = ((0x800U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
            ? ((0x400U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                ? ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                    ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh131079
                    : (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh131079)))
                : ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                    ? (QData)((IData)((0xffffU & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh131079))))
                    : (QData)((IData)((0xffU & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh131079))))))
            : ((0x400U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                ? ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                    ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh131079
                    : (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh131079 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh131079))))
                : ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                    ? (((- (QData)((IData)((1U & (IData)(
                                                         (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh131079 
                                                          >> 0xfU)))))) 
                        << 0x10U) | (QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh131079)))))
                    : (((- (QData)((IData)((1U & (IData)(
                                                         (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh131079 
                                                          >> 7U)))))) 
                        << 8U) | (QData)((IData)((0xffU 
                                                  & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__mem_response_data___05Fh131079))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__data___05Fh61100 
        = ((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__clint_s_xactor_f_rd_addr__DOT__data0_reg 
                          >> 0xfU))) ? ((1U & (IData)(
                                                      (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__clint_s_xactor_f_rd_addr__DOT__data0_reg 
                                                       >> 0xeU)))
                                         ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__temp___05Fh61090
                                         : (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT___theResult___05F___05F_2___05Fh61091)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT___theResult___05F___05F_2___05Fh61091))))
            : ((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__clint_s_xactor_f_rd_addr__DOT__data0_reg 
                              >> 0xeU))) ? (((QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT___theResult___05F___05F_2___05Fh61091)))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT___theResult___05F___05F_2___05Fh61091)))) 
                                                << 0x20U) 
                                               | (((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT___theResult___05F___05F_2___05Fh61091)))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT___theResult___05F___05F_2___05Fh61091)))))))
                : (((QData)((IData)((0xffU & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__temp___05Fh61090)))) 
                    << 0x38U) | (((QData)((IData)((0xffU 
                                                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__temp___05Fh61090)))) 
                                  << 0x30U) | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__temp___05Fh61090)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__temp___05Fh61090)))) 
                                                   << 0x20U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__temp___05Fh61090)))) 
                                                      << 0x18U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__temp___05Fh61090)))) 
                                                         << 0x10U) 
                                                        | (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__temp___05Fh61090)))) 
                                                            << 8U) 
                                                           | (QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__temp___05Fh61090)))))))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT___theResult___05F___05F_2___05Fh64133 
        = ((0U == (3U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__clint_rg_rdpacket 
                                 >> 0xeU)))) ? (((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__IF_clint_rg_rdpacket_625_BITS_35_TO_20_633_ULT_ETC___05F_d1647)))) 
                                                 << 0x38U) 
                                                | (((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__IF_clint_rg_rdpacket_625_BITS_35_TO_20_633_ULT_ETC___05F_d1647)))) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__IF_clint_rg_rdpacket_625_BITS_35_TO_20_633_ULT_ETC___05F_d1647)))) 
                                                       << 0x28U) 
                                                      | (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__IF_clint_rg_rdpacket_625_BITS_35_TO_20_633_ULT_ETC___05F_d1647)))) 
                                                          << 0x20U) 
                                                         | (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__IF_clint_rg_rdpacket_625_BITS_35_TO_20_633_ULT_ETC___05F_d1647)))) 
                                                             << 0x18U) 
                                                            | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__IF_clint_rg_rdpacket_625_BITS_35_TO_20_633_ULT_ETC___05F_d1647)))) 
                                                                << 0x10U) 
                                                               | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__IF_clint_rg_rdpacket_625_BITS_35_TO_20_633_ULT_ETC___05F_d1647)))) 
                                                                   << 8U) 
                                                                  | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__IF_clint_rg_rdpacket_625_BITS_35_TO_20_633_ULT_ETC___05F_d1647)))))))))))
            : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__IF_clint_rg_rdpacket_625_BITS_35_TO_20_633_ULT_ETC___05F_d1647);
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__clint_clint_rg_tick_D_IN 
        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__clint_clint_rg_tick)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_12 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_11));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_12 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_11));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_12 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_11));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_12 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_11));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_12 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_11));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_12 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_11));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_12 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_11));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_12 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_11));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh137475 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh138185) 
            <= (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh138186))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh138186)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh138185));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh137474 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh137485) 
            <= (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh137486))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh137486)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh137485));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh135071 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh136773) 
            <= (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh136774))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh136774)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh136773));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh135070 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh135081) 
            <= (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh135082))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh135082)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh135081));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT___dfoo4463 
        = ((0U == (0x1fU & (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr__DOT__data0_reg 
                                      >> 5U)) - (IData)(0xc000000U)) 
                            >> 2U))) & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_154));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT___dfoo4399 
        = ((1U == (0x1fU & (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr__DOT__data0_reg 
                                      >> 5U)) - (IData)(0xc000000U)) 
                            >> 2U))) & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_154));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT___dfoo4391 
        = ((0U == (0x1fU & (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr__DOT__data0_reg 
                                      >> 5U)) - (IData)(0xc000000U)) 
                            >> 2U))) & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_153));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT___dfoo4327 
        = ((1U == (0x1fU & (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr__DOT__data0_reg 
                                      >> 5U)) - (IData)(0xc000000U)) 
                            >> 2U))) & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_153));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT___dfoo4461 
        = ((0U == (0x1fU & (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr__DOT__data0_reg 
                                      >> 5U)) - (IData)(0xc000000U)) 
                            >> 2U))) & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_134));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT___dfoo4397 
        = ((1U == (0x1fU & (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr__DOT__data0_reg 
                                      >> 5U)) - (IData)(0xc000000U)) 
                            >> 2U))) & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_134));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT___dfoo4389 
        = ((0U == (0x1fU & (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr__DOT__data0_reg 
                                      >> 5U)) - (IData)(0xc000000U)) 
                            >> 2U))) & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_135));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT___dfoo4325 
        = ((1U == (0x1fU & (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr__DOT__data0_reg 
                                      >> 5U)) - (IData)(0xc000000U)) 
                            >> 2U))) & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_135));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT___dfoo4099 
        = ((0U == (0x1fU & (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr__DOT__data0_reg 
                                      >> 5U)) - (IData)(0xc000000U)) 
                            >> 2U))) & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_138));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT___dfoo4035 
        = ((1U == (0x1fU & (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr__DOT__data0_reg 
                                      >> 5U)) - (IData)(0xc000000U)) 
                            >> 2U))) & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_138));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT___dfoo4171 
        = ((0U == (0x1fU & (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr__DOT__data0_reg 
                                      >> 5U)) - (IData)(0xc000000U)) 
                            >> 2U))) & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_137));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT___dfoo4107 
        = ((1U == (0x1fU & (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr__DOT__data0_reg 
                                      >> 5U)) - (IData)(0xc000000U)) 
                            >> 2U))) & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_137));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT___dfoo4097 
        = ((0U == (0x1fU & (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr__DOT__data0_reg 
                                      >> 5U)) - (IData)(0xc000000U)) 
                            >> 2U))) & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_140));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT___dfoo4033 
        = ((1U == (0x1fU & (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr__DOT__data0_reg 
                                      >> 5U)) - (IData)(0xc000000U)) 
                            >> 2U))) & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_140));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT___dfoo4169 
        = ((0U == (0x1fU & (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr__DOT__data0_reg 
                                      >> 5U)) - (IData)(0xc000000U)) 
                            >> 2U))) & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_139));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT___dfoo4105 
        = ((1U == (0x1fU & (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_wr_addr__DOT__data0_reg 
                                      >> 5U)) - (IData)(0xc000000U)) 
                            >> 2U))) & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_139));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh165515 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh165526) 
            <= (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh165527))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh165527)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh165526));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh160119 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh160130) 
            <= (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh160131))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh160131)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh160130));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh165516 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh166778) 
            <= (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh166779))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh166779)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh166778));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh160120 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh161382) 
            <= (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh161383))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh161383)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh161382));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_txdata_to_txfifo_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_txdata_to_txfifo_D_IN) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_txdata_to_txfifo));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_txdata_to_txfifo_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_txdata_to_txfifo_D_IN) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_txdata_to_txfifo));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__fabric_v_f_wr_sjs_0_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__fabric_v_f_wr_mis_0_ENQ)
            ? 0U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__fabric_v_f_wr_mis_1_ENQ)
                     ? 1U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__fabric_v_f_wr_mis_3_ENQ)
                              ? 3U : 0U)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__fabric_v_f_wr_sjs_0_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__fabric_v_f_wr_mis_0_ENQ) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__fabric_v_f_wr_mis_1_ENQ) 
              | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__fabric_v_f_wr_mis_3_ENQ)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__fabric_xactors_from_masters_0_f_wr_addr_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__fabric_v_f_wr_mis_3_ENQ) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__fabric_v_f_wr_mis_1_ENQ) 
              | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__fabric_v_f_wr_mis_0_ENQ)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__fabric_v_f_wr_sjs_0_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__fabric_v_f_wr_mis_0_ENQ)
            ? 0U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__fabric_v_f_wr_mis_1_ENQ)
                     ? 1U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__fabric_v_f_wr_mis_2_ENQ)
                              ? 2U : 0U)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__fabric_v_f_wr_sjs_0_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__fabric_v_f_wr_mis_0_ENQ) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__fabric_v_f_wr_mis_1_ENQ) 
              | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__fabric_v_f_wr_mis_2_ENQ)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__fabric_xactors_from_masters_0_f_wr_addr_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__fabric_v_f_wr_mis_2_ENQ) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__fabric_v_f_wr_mis_1_ENQ) 
              | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__fabric_v_f_wr_mis_0_ENQ)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__slow_fabric_v_f_wr_sjs_0_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__slow_fabric_v_f_wr_mis_0_ENQ) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__slow_fabric_v_f_wr_mis_1_ENQ) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__slow_fabric_v_f_wr_mis_2_ENQ) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__slow_fabric_v_f_wr_mis_3_ENQ) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__slow_fabric_v_f_wr_mis_4_ENQ) 
                       | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__slow_fabric_v_f_wr_mis_5_ENQ))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__slow_fabric_xactors_from_masters_0_f_wr_addr_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__slow_fabric_v_f_wr_mis_5_ENQ) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__slow_fabric_v_f_wr_mis_4_ENQ) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__slow_fabric_v_f_wr_mis_3_ENQ) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__slow_fabric_v_f_wr_mis_2_ENQ) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__slow_fabric_v_f_wr_mis_1_ENQ) 
                       | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__slow_fabric_v_f_wr_mis_0_ENQ))))));
    __Vtableidx16 = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__slow_fabric_v_f_wr_mis_5_ENQ) 
                      << 5U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__slow_fabric_v_f_wr_mis_4_ENQ) 
                                 << 4U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__slow_fabric_v_f_wr_mis_3_ENQ) 
                                            << 3U) 
                                           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__slow_fabric_v_f_wr_mis_2_ENQ) 
                                               << 2U) 
                                              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__slow_fabric_v_f_wr_mis_1_ENQ) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__slow_fabric_v_f_wr_mis_0_ENQ))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__slow_fabric_v_f_wr_sjs_0_D_IN 
        = VmkTbSoc_edited__ConstPool__TABLE_hd0e0e84c_0
        [__Vtableidx16];
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_0_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_rd_data_DEQ) 
           & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_rd_data__DOT__data0_reg[0U] 
              >> 4U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_sjs_0_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_mis_0_ENQ) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_mis_2_ENQ) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_mis_3_ENQ) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_mis_4_ENQ) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_mis_5_ENQ) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_mis_7_ENQ) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_mis_8_ENQ)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_xactors_from_masters_0_f_wr_addr_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_mis_8_ENQ) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_mis_7_ENQ) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_mis_5_ENQ) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_mis_4_ENQ) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_mis_3_ENQ) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_mis_2_ENQ) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_mis_0_ENQ)))))));
    __Vtableidx19 = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_mis_8_ENQ) 
                      << 6U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_mis_7_ENQ) 
                                 << 5U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_mis_5_ENQ) 
                                            << 4U) 
                                           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_mis_4_ENQ) 
                                               << 3U) 
                                              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_mis_3_ENQ) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_mis_2_ENQ) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_mis_0_ENQ)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__fabric_v_f_wr_sjs_0_D_IN 
        = VmkTbSoc_edited__ConstPool__TABLE_h4157c14f_0
        [__Vtableidx19];
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_2_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_rd_data_DEQ) 
           & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_rd_data__DOT__data0_reg[0U] 
              >> 4U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_1_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_rd_data_DEQ) 
           & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_rd_data__DOT__data0_reg[0U] 
              >> 4U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_5_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_rd_data_DEQ) 
           & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_rd_data__DOT__data0_reg[0U] 
              >> 4U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_6_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_rd_data_DEQ) 
           & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_rd_data__DOT__data0_reg[0U] 
              >> 4U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_4_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_rd_data_DEQ) 
           & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_rd_data__DOT__data0_reg[0U] 
              >> 4U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_3_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_rd_data_DEQ) 
           & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_rd_data__DOT__data0_reg[0U] 
              >> 4U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_14 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_55) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_2__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__empty_reg) 
                  & ((0x80000000U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg 
                                              >> 0x14U))) 
                     & (0x8fffffffU >= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg 
                                                >> 0x14U))))))) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_46));
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_44 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_8)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_1))));
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_43 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_9)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_2))));
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_40 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_12)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_5))));
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_41 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_11)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_4))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_10 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_3)) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_51) 
              & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_rd_addr__DOT__empty_reg) 
                 & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_1__DOT__full_reg) 
                    & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_16) 
                       & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_14) 
                          & ((0x5000cU < (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_rd_addr__DOT__data0_reg 
                                                  >> 0x14U))) 
                             | (0x50000U > (IData)(
                                                   (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_rd_addr__DOT__data0_reg 
                                                    >> 0x14U))))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_0_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_1) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_2) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_3) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_4) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_5) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_6)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_rd_addr_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_6) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_5) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_4) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_3) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_2) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_1) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave)))))));
    __Vtableidx3 = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_6) 
                     << 6U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_5) 
                                << 5U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_4) 
                                           << 4U) | 
                                          (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_3) 
                                            << 3U) 
                                           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_0_D_IN 
        = VmkTbSoc_edited__ConstPool__TABLE_hb9803b17_0
        [__Vtableidx3];
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_13 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_6)) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_48) 
              & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_rd_addr__DOT__empty_reg) 
                 & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_1__DOT__full_reg) 
                    & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_16) 
                       & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_14) 
                          & ((0x50000U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_rd_addr__DOT__data0_reg 
                                                   >> 0x14U))) 
                             & (0x5000cU >= (IData)(
                                                    (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_rd_addr__DOT__data0_reg 
                                                     >> 0x14U))))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_1_enq_1___05FSEL_2 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_8));
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_86 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_8)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_1))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_2_enq_1___05FSEL_2 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_9));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_85 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_9)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_2))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_5_enq_1___05FSEL_2 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_12));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_82 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_12)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_5))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_14 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_addr__DOT__full_reg) 
            & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_62) 
                & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__empty_reg) 
                   & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_2__DOT__full_reg) 
                      & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__empty_reg) 
                         & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_0__DOT__full_reg) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2__DOT__full_reg)))))) 
               & ((0x80000000U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg 
                                           >> 0x14U))) 
                  & (0x8fffffffU >= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg 
                                             >> 0x14U)))))) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_87));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_4_enq_1___05FSEL_2 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_11));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_83 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_11)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_4))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_6_enq_1___05FSEL_1 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_6));
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_90 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_7)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_6))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_13 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_6)) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_addr__DOT__full_reg) 
              & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_56) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__empty_reg) 
                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_1__DOT__full_reg) 
                        & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__empty_reg) 
                           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_6__DOT__full_reg) 
                              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1__DOT__full_reg)))))) 
                 & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_45) 
                    & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_43) 
                       & ((0x50000U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__data0_reg 
                                                >> 0x14U))) 
                          & (0x5000cU >= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__data0_reg 
                                                  >> 0x14U)))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_0_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_1) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_2) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_3) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_4) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_5) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_6)))))));
    __Vtableidx7 = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_6) 
                     << 6U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_5) 
                                << 5U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_4) 
                                           << 4U) | 
                                          (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_3) 
                                            << 3U) 
                                           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_2) 
                                               << 2U) 
                                              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_0_D_IN 
        = VmkTbSoc_edited__ConstPool__TABLE_hb9803b17_0
        [__Vtableidx7];
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_addr_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_6) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_5) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_4) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_3) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_2) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_1) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_3_enq_1___05FSEL_1 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_3));
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_97 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_5)) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_4)) 
                    & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_3)) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_2)) 
                          & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_1)) 
                             & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_10 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_3)) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_addr__DOT__full_reg) 
              & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_59) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__empty_reg) 
                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_1__DOT__full_reg) 
                        & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__empty_reg) 
                           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_3__DOT__full_reg) 
                              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1__DOT__full_reg)))))) 
                 & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_45) 
                    & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_43) 
                       & ((0x5000cU < (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__data0_reg 
                                               >> 0x14U))) 
                          | (0x50000U > (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__data0_reg 
                                                 >> 0x14U)))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrXmitBuffer_0_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_rXmitParity_EN) 
           | ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_pwXmitLoadBuffer_whas)) 
              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_transmit_shift_next_bit)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrXmitBuffer_0_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_rXmitParity_EN) 
           | ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_pwXmitLoadBuffer_whas)) 
              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_transmit_shift_next_bit)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op1___05Fh131761 
        = ((0x10U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer__DOT__CASE_rg_head_0_v_iobuffer_0_BITS_69_TO_65_1_v___05FETC___05Fq4))
            ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__lv_mem_response_data___05Fh131094
            : (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__lv_mem_response_data___05Fh131094 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__lv_mem_response_data___05Fh131094))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__data___05Fh64140 
        = ((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__clint_rg_rdpacket 
                          >> 0xfU))) ? ((1U & (IData)(
                                                      (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__clint_rg_rdpacket 
                                                       >> 0xeU)))
                                         ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__IF_clint_rg_rdpacket_625_BITS_35_TO_20_633_ULT_ETC___05F_d1647
                                         : (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT___theResult___05F___05F_2___05Fh64133)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT___theResult___05F___05F_2___05Fh64133))))
            : ((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__clint_rg_rdpacket 
                              >> 0xeU))) ? (((QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT___theResult___05F___05F_2___05Fh64133)))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT___theResult___05F___05F_2___05Fh64133)))) 
                                                << 0x20U) 
                                               | (((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT___theResult___05F___05F_2___05Fh64133)))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT___theResult___05F___05F_2___05Fh64133)))))))
                : (((QData)((IData)((0xffU & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__IF_clint_rg_rdpacket_625_BITS_35_TO_20_633_ULT_ETC___05F_d1647)))) 
                    << 0x38U) | (((QData)((IData)((0xffU 
                                                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__IF_clint_rg_rdpacket_625_BITS_35_TO_20_633_ULT_ETC___05F_d1647)))) 
                                  << 0x30U) | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__IF_clint_rg_rdpacket_625_BITS_35_TO_20_633_ULT_ETC___05F_d1647)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__IF_clint_rg_rdpacket_625_BITS_35_TO_20_633_ULT_ETC___05F_d1647)))) 
                                                   << 0x20U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__IF_clint_rg_rdpacket_625_BITS_35_TO_20_633_ULT_ETC___05F_d1647)))) 
                                                      << 0x18U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__IF_clint_rg_rdpacket_625_BITS_35_TO_20_633_ULT_ETC___05F_d1647)))) 
                                                         << 0x10U) 
                                                        | (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__IF_clint_rg_rdpacket_625_BITS_35_TO_20_633_ULT_ETC___05F_d1647)))) 
                                                            << 8U) 
                                                           | (QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__IF_clint_rg_rdpacket_625_BITS_35_TO_20_633_ULT_ETC___05F_d1647)))))))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh135060 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh137474) 
            <= (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh137475))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh137475)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh137474));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh135059 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh135070) 
            <= (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh135071))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh135071)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh135070));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh165504 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh165515) 
            <= (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh165516))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh165516)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh165515));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh160108 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh160119) 
            <= (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh160120))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh160120)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh160119));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_21 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_14)) 
           & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_55) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_3__DOT__full_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__empty_reg) 
                     & ((0x80000000U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg 
                                                 >> 0x14U))) 
                        & (0x8fffffffU >= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg 
                                                   >> 0x14U))))))) 
              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_46)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_15 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_54) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__empty_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_2__DOT__full_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_47) 
                     & ((0x2000000U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg 
                                                >> 0x14U))) 
                        & (0x20bffffU >= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg 
                                                  >> 0x14U)))))))) 
           & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_44));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_16 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_52) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__empty_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_2__DOT__full_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_17) 
                     & (0xfffU >= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg 
                                           >> 0x14U))))))) 
           & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_43));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_19 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_49) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_2__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_47) 
                     & ((0xfffU < (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg 
                                           >> 0x14U))) 
                        & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_31) 
                           & ((0x1000U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg 
                                                   >> 0x14U))) 
                              & (0x8fffU >= (IData)(
                                                    (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg 
                                                     >> 0x14U)))))))))) 
           & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_40));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_18 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_50) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__empty_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_2__DOT__full_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_30) 
                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_32) 
                        & (((0x11300U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg 
                                                  >> 0x14U))) 
                            & (0x47fffU >= (IData)(
                                                   (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg 
                                                    >> 0x14U)))) 
                           | ((0xc000000U <= (IData)(
                                                     (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg 
                                                      >> 0x14U))) 
                              & (0xfffffffU >= (IData)(
                                                       (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg 
                                                        >> 0x14U)))))))))) 
           & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_41));
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_42 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_10)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_3))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_1_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_7) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_8) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_9) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_10) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_11) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_12) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_13)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_rd_addr_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_13) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_12) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_11) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_10) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_9) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_8) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_7)))))));
    __Vtableidx4 = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_13) 
                     << 6U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_12) 
                                << 5U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_11) 
                                           << 4U) | 
                                          (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_10) 
                                            << 3U) 
                                           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_9) 
                                               << 2U) 
                                              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_8) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_7)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_1_D_IN 
        = VmkTbSoc_edited__ConstPool__TABLE_hb9803b17_0
        [__Vtableidx4];
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_39 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_13)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_6))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_15 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_addr__DOT__full_reg) 
            & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_61) 
                & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__empty_reg) 
                   & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_2__DOT__full_reg) 
                      & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__empty_reg) 
                         & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_1__DOT__full_reg) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2__DOT__full_reg)))))) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_100) 
                  & ((0x2000000U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg 
                                             >> 0x14U))) 
                     & (0x20bffffU >= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg 
                                               >> 0x14U))))))) 
           & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_86));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_16 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_addr__DOT__full_reg) 
            & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_60) 
                & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__empty_reg) 
                   & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_2__DOT__full_reg) 
                      & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__empty_reg) 
                         & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_2__DOT__full_reg) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2__DOT__full_reg)))))) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_47) 
                  & (0xfffU >= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg 
                                        >> 0x14U)))))) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_85));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_19 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_addr__DOT__full_reg) 
            & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_57) 
                & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__empty_reg) 
                   & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_2__DOT__full_reg) 
                      & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__empty_reg) 
                         & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_5__DOT__full_reg) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2__DOT__full_reg)))))) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_100) 
                  & ((0xfffU < (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg 
                                        >> 0x14U))) 
                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_68) 
                        & ((0x1000U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg 
                                                >> 0x14U))) 
                           & (0x8fffU >= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg 
                                                  >> 0x14U))))))))) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_82));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_0_enq_1___05FSEL_3 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_14));
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_88 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_14)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_87));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_21 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_14)) 
           & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_addr__DOT__full_reg) 
               & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_62) 
                   & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__empty_reg) 
                      & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_3__DOT__full_reg) 
                         & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__empty_reg) 
                            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_0__DOT__full_reg) 
                               & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3__DOT__full_reg)))))) 
                  & ((0x80000000U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg 
                                              >> 0x14U))) 
                     & (0x8fffffffU >= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg 
                                                >> 0x14U)))))) 
              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_87)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_18 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_addr__DOT__full_reg) 
            & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_58) 
                & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__empty_reg) 
                   & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_2__DOT__full_reg) 
                      & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__empty_reg) 
                         & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_4__DOT__full_reg) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2__DOT__full_reg)))))) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_67) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_66) 
                     & (((0x11300U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg 
                                               >> 0x14U))) 
                         & (0x47fffU >= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg 
                                                 >> 0x14U)))) 
                        | ((0xc000000U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg 
                                                   >> 0x14U))) 
                           & (0xfffffffU >= (IData)(
                                                    (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg 
                                                     >> 0x14U))))))))) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_83));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_6_enq_1___05FSEL_2 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_13));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_80 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_13)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_6))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_0_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_0_enq_1___05FSEL_1) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_1_enq_1___05FSEL_1) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_2_enq_1___05FSEL_1) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_3_enq_1___05FSEL_1) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_4_enq_1___05FSEL_1) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_5_enq_1___05FSEL_1) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_6_enq_1___05FSEL_1)))))));
    __Vtableidx11 = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_6_enq_1___05FSEL_1) 
                      << 6U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_5_enq_1___05FSEL_1) 
                                 << 5U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_4_enq_1___05FSEL_1) 
                                            << 4U) 
                                           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_3_enq_1___05FSEL_1) 
                                               << 3U) 
                                              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_2_enq_1___05FSEL_1) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_1_enq_1___05FSEL_1) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_0_enq_1___05FSEL_1)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_0_D_IN 
        = VmkTbSoc_edited__ConstPool__TABLE_hb9803b17_0
        [__Vtableidx11];
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_98 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_6)) 
           & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_97));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_1_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_7) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_8) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_9) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_10) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_11) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_12) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_13)))))));
    __Vtableidx8 = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_13) 
                     << 6U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_12) 
                                << 5U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_11) 
                                           << 4U) | 
                                          (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_10) 
                                            << 3U) 
                                           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_9) 
                                               << 2U) 
                                              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_8) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_7)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_1_D_IN 
        = VmkTbSoc_edited__ConstPool__TABLE_hb9803b17_0
        [__Vtableidx8];
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_13) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_12) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_11) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_10) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_9) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_8) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_7)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_3_enq_1___05FSEL_2 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_10));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_84 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_10)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_3))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__IF_m_iobuffer_mv_io_head___05F594_BIT_69_661_THEN___05FETC___05F_d1683 
        = ((0x8000000000000000ULL ^ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op1___05Fh131761) 
           <= (0x8000000000000000ULL ^ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op2___05Fh131762));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__IF_m_iobuffer_mv_io_head___05F594_BIT_69_661_THEN___05FETC___05F_d1678 
        = (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op1___05Fh131761 
           <= vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op2___05Fh131762);
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_clint_s_xactor_f_rd_data_enq_1___05FVAL_2[0U] 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__data___05Fh64140) 
            << 5U) | (((0U == (0xffU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__clint_rg_rdpacket 
                                                >> 6U)))) 
                       << 4U) | (0xfU & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__clint_rg_rdpacket))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_clint_s_xactor_f_rd_data_enq_1___05FVAL_2[1U] 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__data___05Fh64140) 
            >> 0x1bU) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__data___05Fh64140 
                                  >> 0x20U)) << 5U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_clint_s_xactor_f_rd_data_enq_1___05FVAL_2[2U] 
        = (0x40U | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__data___05Fh64140 
                             >> 0x20U)) >> 0x1bU));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_11 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_10));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_11 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_10));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_11 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_10));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_11 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_10));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_11 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_10));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_11 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_10));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_11 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_10));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_11 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_10));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh135048 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh135059) 
            <= (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh135060))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh135060)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh135059));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore_sb_plic_meip_ex_i 
        = ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh165504) 
             <= (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh165505))
             ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh165505)
             : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh165504)) 
           > (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_target_threshold_0));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore_sb_plic_seip_ex_i 
        = ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh160108) 
             <= (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh160109))
             ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh160109)
             : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh160108)) 
           > (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_target_threshold_1));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_0_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_rd_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_7) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_0_D_IN = 1U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_rd_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_14) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_0_D_IN = 2U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_21) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_0_D_IN = 3U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_0_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_rd_addr_D_IN = 0ULL;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_0_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_7) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_14) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_21))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_22 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_15)) 
           & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_54) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_3__DOT__full_reg) 
                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_45) 
                        & ((0x2000000U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg 
                                                   >> 0x14U))) 
                           & (0x20bffffU >= (IData)(
                                                    (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg 
                                                     >> 0x14U)))))))) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_44)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_23 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_16)) 
           & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_52) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_3__DOT__full_reg) 
                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_23) 
                        & (0xfffU >= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg 
                                              >> 0x14U))))))) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_43)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_26 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_19)) 
           & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_49) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_3__DOT__full_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__empty_reg) 
                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_45) 
                        & ((0xfffU < (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg 
                                              >> 0x14U))) 
                           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_29) 
                              & ((0x1000U <= (IData)(
                                                     (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg 
                                                      >> 0x14U))) 
                                 & (0x8fffU >= (IData)(
                                                       (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg 
                                                        >> 0x14U)))))))))) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_40)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_25 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_18)) 
           & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_50) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_3__DOT__full_reg) 
                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_28) 
                        & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_27) 
                           & (((0x11300U <= (IData)(
                                                    (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg 
                                                     >> 0x14U))) 
                               & (0x47fffU >= (IData)(
                                                      (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg 
                                                       >> 0x14U)))) 
                              | ((0xc000000U <= (IData)(
                                                        (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg 
                                                         >> 0x14U))) 
                                 & (0xfffffffU >= (IData)(
                                                          (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg 
                                                           >> 0x14U)))))))))) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_41)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_17 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_51) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__empty_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_2__DOT__full_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_20) 
                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_19) 
                        & ((0x5000cU < (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg 
                                                >> 0x14U))) 
                           | (0x50000U > (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg 
                                                  >> 0x14U))))))))) 
           & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_42));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_20 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_48) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__empty_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_2__DOT__full_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_20) 
                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_19) 
                        & ((0x50000U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg 
                                                 >> 0x14U))) 
                           & (0x5000cU >= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg 
                                                   >> 0x14U))))))))) 
           & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_39));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_1_enq_1___05FSEL_3 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_15));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_22 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_15)) 
           & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_addr__DOT__full_reg) 
               & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_61) 
                   & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__empty_reg) 
                      & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_3__DOT__full_reg) 
                         & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__empty_reg) 
                            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_1__DOT__full_reg) 
                               & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3__DOT__full_reg)))))) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_99) 
                     & ((0x2000000U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg 
                                                >> 0x14U))) 
                        & (0x20bffffU >= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg 
                                                  >> 0x14U))))))) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_86)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_2_enq_1___05FSEL_3 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_16));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_23 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_16)) 
           & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_addr__DOT__full_reg) 
               & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_60) 
                   & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__empty_reg) 
                      & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_3__DOT__full_reg) 
                         & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__empty_reg) 
                            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_2__DOT__full_reg) 
                               & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3__DOT__full_reg)))))) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_52) 
                     & (0xfffU >= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg 
                                           >> 0x14U)))))) 
              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_85)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_5_enq_1___05FSEL_3 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_19));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_26 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_19)) 
           & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_addr__DOT__full_reg) 
               & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_57) 
                   & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__empty_reg) 
                      & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_3__DOT__full_reg) 
                         & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__empty_reg) 
                            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_5__DOT__full_reg) 
                               & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3__DOT__full_reg)))))) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_99) 
                     & ((0xfffU < (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg 
                                           >> 0x14U))) 
                        & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_65) 
                           & ((0x1000U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg 
                                                   >> 0x14U))) 
                              & (0x8fffU >= (IData)(
                                                    (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg 
                                                     >> 0x14U))))))))) 
              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_82)));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_0_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_7) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_0_D_IN = 1U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_14) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_0_D_IN = 2U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_21) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_0_D_IN = 3U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_0_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_addr_D_IN = 0ULL;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_0_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_7) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_14) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_21))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_0_enq_1___05FSEL_4 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_21));
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_96 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_21)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_14))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_4_enq_1___05FSEL_3 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_18));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_25 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_18)) 
           & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_addr__DOT__full_reg) 
               & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_58) 
                   & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__empty_reg) 
                      & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_3__DOT__full_reg) 
                         & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__empty_reg) 
                            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_4__DOT__full_reg) 
                               & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3__DOT__full_reg)))))) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_64) 
                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_63) 
                        & (((0x11300U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg 
                                                  >> 0x14U))) 
                            & (0x47fffU >= (IData)(
                                                   (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg 
                                                    >> 0x14U)))) 
                           | ((0xc000000U <= (IData)(
                                                     (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg 
                                                      >> 0x14U))) 
                              & (0xfffffffU >= (IData)(
                                                       (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg 
                                                        >> 0x14U))))))))) 
              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_83)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_20 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_addr__DOT__full_reg) 
            & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_56) 
                & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__empty_reg) 
                   & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_2__DOT__full_reg) 
                      & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__empty_reg) 
                         & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_6__DOT__full_reg) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2__DOT__full_reg)))))) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_50) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_48) 
                     & ((0x50000U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg 
                                              >> 0x14U))) 
                        & (0x5000cU >= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg 
                                                >> 0x14U)))))))) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_80));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_0_enq_1___05FSEL_2) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_1_enq_1___05FSEL_2) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_2_enq_1___05FSEL_2) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_3_enq_1___05FSEL_2) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_4_enq_1___05FSEL_2) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_5_enq_1___05FSEL_2) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_6_enq_1___05FSEL_2)))))));
    __Vtableidx12 = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_6_enq_1___05FSEL_2) 
                      << 6U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_5_enq_1___05FSEL_2) 
                                 << 5U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_4_enq_1___05FSEL_2) 
                                            << 4U) 
                                           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_3_enq_1___05FSEL_2) 
                                               << 3U) 
                                              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_2_enq_1___05FSEL_2) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_1_enq_1___05FSEL_2) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_0_enq_1___05FSEL_2)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1_D_IN 
        = VmkTbSoc_edited__ConstPool__TABLE_hb9803b17_0
        [__Vtableidx12];
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_17 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_addr__DOT__full_reg) 
            & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_59) 
                & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__empty_reg) 
                   & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_2__DOT__full_reg) 
                      & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__empty_reg) 
                         & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_3__DOT__full_reg) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2__DOT__full_reg)))))) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_50) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_48) 
                     & ((0x5000cU < (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg 
                                             >> 0x14U))) 
                        | (0x50000U > (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg 
                                               >> 0x14U)))))))) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_84));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x_data___05Fh131580 
        = ((0x10U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
            ? ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                ? ((4U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                    ? ((2U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                        ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op1___05Fh131761
                        : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__IF_m_iobuffer_mv_io_head___05F594_BIT_69_661_THEN___05FETC___05F_d1678)
                            ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op2___05Fh131762
                            : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op1___05Fh131761))
                    : ((2U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                        ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op1___05Fh131761
                        : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__IF_m_iobuffer_mv_io_head___05F594_BIT_69_661_THEN___05FETC___05F_d1678)
                            ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op1___05Fh131761
                            : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op2___05Fh131762)))
                : ((4U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                    ? ((2U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                        ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op1___05Fh131761
                        : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__IF_m_iobuffer_mv_io_head___05F594_BIT_69_661_THEN___05FETC___05F_d1683)
                            ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op2___05Fh131762
                            : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op1___05Fh131761))
                    : ((2U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                        ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op1___05Fh131761
                        : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__IF_m_iobuffer_mv_io_head___05F594_BIT_69_661_THEN___05FETC___05F_d1683)
                            ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op1___05Fh131761
                            : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op2___05Fh131762))))
            : ((8U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                ? ((4U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                    ? ((2U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                        ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op1___05Fh131761
                        : (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op1___05Fh131761 
                           & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op2___05Fh131762))
                    : ((2U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                        ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op1___05Fh131761
                        : (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op1___05Fh131761 
                           | vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op2___05Fh131762)))
                : ((4U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                    ? ((2U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                        ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op2___05Fh131762
                        : (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op1___05Fh131761 
                           ^ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op2___05Fh131762))
                    : ((2U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_iobuffer_mv_io_head[2U])
                        ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op1___05Fh131761
                        : (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op1___05Fh131761 
                           + vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__op2___05Fh131762)))));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__clint_rg_rdpacket_EN) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__clint_s_xactor_f_rd_data_D_IN[0U] 
            = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__data___05Fh61100) 
                << 5U) | (((0U == (0xffU & (IData)(
                                                   (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__clint_s_xactor_f_rd_addr__DOT__data0_reg 
                                                    >> 6U)))) 
                           << 4U) | (0xfU & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__clint_s_xactor_f_rd_addr__DOT__data0_reg))));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__clint_s_xactor_f_rd_data_D_IN[1U] 
            = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__data___05Fh61100) 
                >> 0x1bU) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__data___05Fh61100 
                                      >> 0x20U)) << 5U));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__clint_s_xactor_f_rd_data_D_IN[2U] 
            = (((((4U > (0xffffU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__clint_s_xactor_f_rd_addr__DOT__data0_reg 
                                            >> 0x14U)))) 
                  | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_79_4) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_79_5)))
                  ? 0U : 2U) << 5U) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__data___05Fh61100 
                                                >> 0x20U)) 
                                       >> 0x1bU));
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__clint_s_xactor_f_rd_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_clint_s_xactor_f_rd_data_enq_1___05FVAL_2[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__clint_s_xactor_f_rd_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_clint_s_xactor_f_rd_data_enq_1___05FVAL_2[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__clint_s_xactor_f_rd_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_clint_s_xactor_f_rd_data_enq_1___05FVAL_2[2U];
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh135048) 
            <= (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh135049))
            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh135049)
            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh135048));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_1) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_1_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_rd_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_8) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_1_D_IN = 1U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_rd_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_15) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_1_D_IN = 2U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_22) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_1_D_IN = 3U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_1_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_rd_addr_D_IN = 0ULL;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_1_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_1) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_8) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_15) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_22))));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_2) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_2_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_rd_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_9) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_2_D_IN = 1U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_rd_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_16) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_2_D_IN = 2U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_23) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_2_D_IN = 3U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_2_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_rd_addr_D_IN = 0ULL;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_2_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_2) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_9) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_16) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_23))));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_5) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_5_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_rd_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_12) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_5_D_IN = 1U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_rd_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_19) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_5_D_IN = 2U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_26) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_5_D_IN = 3U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_5_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_rd_addr_D_IN = 0ULL;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_5_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_5) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_12) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_19) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_26))));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_4) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_4_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_rd_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_11) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_4_D_IN = 1U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_rd_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_18) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_4_D_IN = 2U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_25) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_4_D_IN = 3U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_4_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_rd_addr_D_IN = 0ULL;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_4_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_4) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_11) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_18) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_25))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_24 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_17)) 
           & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_51) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_3__DOT__full_reg) 
                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_26) 
                        & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_24) 
                           & ((0x5000cU < (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg 
                                                   >> 0x14U))) 
                              | (0x50000U > (IData)(
                                                    (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg 
                                                     >> 0x14U))))))))) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_42)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_2_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_14) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_15) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_16) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_17) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_18) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_19) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_20)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_20) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_19) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_18) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_17) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_16) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_15) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_14)))))));
    __Vtableidx5 = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_20) 
                     << 6U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_19) 
                                << 5U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_18) 
                                           << 4U) | 
                                          (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_17) 
                                            << 3U) 
                                           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_16) 
                                               << 2U) 
                                              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_15) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_14)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_2_D_IN 
        = VmkTbSoc_edited__ConstPool__TABLE_hb9803b17_0
        [__Vtableidx5];
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_27 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_20)) 
           & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_48) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_3__DOT__full_reg) 
                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_26) 
                        & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_24) 
                           & ((0x50000U <= (IData)(
                                                   (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg 
                                                    >> 0x14U))) 
                              & (0x5000cU >= (IData)(
                                                     (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg 
                                                      >> 0x14U))))))))) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_100_39)));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_1) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_1_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_8) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_1_D_IN = 1U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_15) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_1_D_IN = 2U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_22) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_1_D_IN = 3U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_1_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_addr_D_IN = 0ULL;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_1_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_1) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_8) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_15) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_22))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_1_enq_1___05FSEL_4 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_22));
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_95 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_22)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_15))));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_2) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_2_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_9) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_2_D_IN = 1U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_16) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_2_D_IN = 2U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_23) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_2_D_IN = 3U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_2_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_addr_D_IN = 0ULL;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_2_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_2) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_9) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_16) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_23))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_2_enq_1___05FSEL_4 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_23));
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_94 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_23)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_16))));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_5) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_5_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_12) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_5_D_IN = 1U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_19) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_5_D_IN = 2U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_26) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_5_D_IN = 3U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_5_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_addr_D_IN = 0ULL;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_5_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_5) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_12) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_19) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_26))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_5_enq_1___05FSEL_4 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_26));
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_91 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_26)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_19))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_0_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_0_enq_1___05FSEL_1)
            ? 0U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_0_enq_1___05FSEL_2)
                     ? 1U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_0_enq_1___05FSEL_3)
                              ? 2U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_0_enq_1___05FSEL_4)
                                       ? 3U : 0U))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_0_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_0_enq_1___05FSEL_1) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_0_enq_1___05FSEL_2) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_0_enq_1___05FSEL_3) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_0_enq_1___05FSEL_4))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_0__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_0__DOT__empty_reg) 
                     & ((0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_0__DOT__data0_reg)) 
                        & (0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_0__DOT__data0_reg))))))) 
           & ((IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_96) 
              & ((IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_90) 
                 & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_97))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_7 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_0__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1__DOT__empty_reg) 
                     & ((1U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_0__DOT__data0_reg)) 
                        & (0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1__DOT__data0_reg))))))) 
           & ((IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_96) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_13)) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_12)) 
                    & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_11)) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_10)) 
                          & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_9)) 
                             & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_8)) 
                                & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_87)))))))));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_4) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_4_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_11) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_4_D_IN = 1U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_18) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_4_D_IN = 2U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_25) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_4_D_IN = 3U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_4_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_addr_D_IN = 0ULL;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_4_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_4) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_11) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_18) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_25))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_4_enq_1___05FSEL_4 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_25));
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_92 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_25)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_18))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_6_enq_1___05FSEL_3 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_20));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_27 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_20)) 
           & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_addr__DOT__full_reg) 
               & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_56) 
                   & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__empty_reg) 
                      & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_3__DOT__full_reg) 
                         & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__empty_reg) 
                            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_6__DOT__full_reg) 
                               & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3__DOT__full_reg)))))) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_55) 
                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_53) 
                        & ((0x50000U <= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg 
                                                 >> 0x14U))) 
                           & (0x5000cU >= (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg 
                                                   >> 0x14U)))))))) 
              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_80)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_2_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_14) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_15) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_16) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_17) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_18) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_19) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_20)))))));
    __Vtableidx9 = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_20) 
                     << 6U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_19) 
                                << 5U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_18) 
                                           << 4U) | 
                                          (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_17) 
                                            << 3U) 
                                           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_16) 
                                               << 2U) 
                                              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_15) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_14)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_2_D_IN 
        = VmkTbSoc_edited__ConstPool__TABLE_hb9803b17_0
        [__Vtableidx9];
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_20) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_19) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_18) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_17) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_16) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_15) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_14)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_3_enq_1___05FSEL_3 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_17));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_14 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_0__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2__DOT__empty_reg) 
                     & ((2U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_0__DOT__data0_reg)) 
                        & (0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2__DOT__data0_reg))))))) 
           & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_21)) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_20)) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_19)) 
                    & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_18)) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_17)) 
                          & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_16)) 
                             & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_15)) 
                                & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_88)))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_15 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_1__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2__DOT__empty_reg) 
                     & ((2U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_1__DOT__data0_reg)) 
                        & (1U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2__DOT__data0_reg))))))) 
           & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_22)) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_20)) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_19)) 
                    & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_18)) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_17)) 
                          & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_16)) 
                             & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_15)) 
                                & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_14)) 
                                   & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_86))))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_16 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_2__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2__DOT__empty_reg) 
                     & ((2U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_2__DOT__data0_reg)) 
                        & (2U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2__DOT__data0_reg))))))) 
           & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_23)) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_20)) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_19)) 
                    & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_18)) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_17)) 
                          & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_16)) 
                             & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_15)) 
                                & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_14)) 
                                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_85))))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_18 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_4__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2__DOT__empty_reg) 
                     & ((2U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_4__DOT__data0_reg)) 
                        & (4U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2__DOT__data0_reg))))))) 
           & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_25)) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_20)) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_19)) 
                    & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_18)) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_17)) 
                          & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_16)) 
                             & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_15)) 
                                & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_14)) 
                                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_83))))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_19 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_5__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2__DOT__empty_reg) 
                     & ((2U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_5__DOT__data0_reg)) 
                        & (5U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2__DOT__data0_reg))))))) 
           & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_26)) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_20)) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_19)) 
                    & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_18)) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_17)) 
                          & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_16)) 
                             & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_15)) 
                                & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_14)) 
                                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_82))))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_24 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_17)) 
           & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_addr__DOT__full_reg) 
               & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_59) 
                   & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__empty_reg) 
                      & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_3__DOT__full_reg) 
                         & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__empty_reg) 
                            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_3__DOT__full_reg) 
                               & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3__DOT__full_reg)))))) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_55) 
                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_53) 
                        & ((0x5000cU < (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg 
                                                >> 0x14U))) 
                           | (0x50000U > (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg 
                                                  >> 0x14U)))))))) 
              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_84)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_10 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_9));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_10 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_9));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_10 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_9));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_10 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_9));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_10 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_9));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_10 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_9));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_10 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_9));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_10 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_9));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4459 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh138923));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4457 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh138922));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4462 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh139088));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4445 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh138552));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4448 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh138717));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4443 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh138551));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4434 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh138208));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4422 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh137852));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4437 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh138373));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4398 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh137140));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4425 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh138017));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4401 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh137305));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4432 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh138207));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4420 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh137851));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4396 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh137139));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4411 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh137508));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4387 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh136796));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4414 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh137673));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4375 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh136440));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4390 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh136961));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4378 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh136605));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4409 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh137507));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4385 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh136795));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4373 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh136439));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4364 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh135104));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4367 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh136261));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4362 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh134130));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_3) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_3_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_rd_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_10) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_3_D_IN = 1U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_rd_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_17) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_3_D_IN = 2U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_24) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_3_D_IN = 3U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_3_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_rd_addr_D_IN = 0ULL;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_3_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_3) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_10) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_17) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_24))));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_6) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_6_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_rd_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_13) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_6_D_IN = 1U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_rd_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_20) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_6_D_IN = 2U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_rd_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_27) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_6_D_IN = 3U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_rd_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr__DOT__data0_reg;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_6_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_rd_addr_D_IN = 0ULL;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_mis_6_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_6) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_13) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_20) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_27))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_3_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_21) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_22) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_23) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_24) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_25) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_26) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_27)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_27) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_26) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_25) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_24) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_23) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_22) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_21)))))));
    __Vtableidx6 = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_27) 
                     << 6U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_26) 
                                << 5U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_25) 
                                           << 4U) | 
                                          (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_24) 
                                            << 3U) 
                                           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_23) 
                                               << 2U) 
                                              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_22) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_rd_xaction_master_to_slave_21)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_rd_sjs_3_D_IN 
        = VmkTbSoc_edited__ConstPool__TABLE_hb9803b17_0
        [__Vtableidx6];
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_1_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_1_enq_1___05FSEL_1)
            ? 0U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_1_enq_1___05FSEL_2)
                     ? 1U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_1_enq_1___05FSEL_3)
                              ? 2U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_1_enq_1___05FSEL_4)
                                       ? 3U : 0U))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_1_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_1_enq_1___05FSEL_1) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_1_enq_1___05FSEL_2) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_1_enq_1___05FSEL_3) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_1_enq_1___05FSEL_4))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_1 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_1__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_0__DOT__empty_reg) 
                     & ((0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_1__DOT__data0_reg)) 
                        & (1U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_0__DOT__data0_reg))))))) 
           & ((IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_95) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_8)) 
                 & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_98))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_8 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_1__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1__DOT__empty_reg) 
                     & ((1U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_1__DOT__data0_reg)) 
                        & (1U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1__DOT__data0_reg))))))) 
           & ((IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_95) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_13)) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_12)) 
                    & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_11)) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_10)) 
                          & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_9)) 
                             & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_8)) 
                                & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_7)) 
                                   & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_1)))))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_2_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_2_enq_1___05FSEL_1)
            ? 0U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_2_enq_1___05FSEL_2)
                     ? 1U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_2_enq_1___05FSEL_3)
                              ? 2U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_2_enq_1___05FSEL_4)
                                       ? 3U : 0U))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_2_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_2_enq_1___05FSEL_1) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_2_enq_1___05FSEL_2) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_2_enq_1___05FSEL_3) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_2_enq_1___05FSEL_4))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_2 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_2__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_0__DOT__empty_reg) 
                     & ((0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_2__DOT__data0_reg)) 
                        & (2U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_0__DOT__data0_reg))))))) 
           & ((IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_94) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_9)) 
                 & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_98))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_9 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_2__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1__DOT__empty_reg) 
                     & ((1U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_2__DOT__data0_reg)) 
                        & (2U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1__DOT__data0_reg))))))) 
           & ((IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_94) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_13)) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_12)) 
                    & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_11)) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_10)) 
                          & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_9)) 
                             & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_8)) 
                                & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_7)) 
                                   & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_2)))))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_5_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_5_enq_1___05FSEL_1)
            ? 0U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_5_enq_1___05FSEL_2)
                     ? 1U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_5_enq_1___05FSEL_3)
                              ? 2U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_5_enq_1___05FSEL_4)
                                       ? 3U : 0U))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_5_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_5_enq_1___05FSEL_1) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_5_enq_1___05FSEL_2) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_5_enq_1___05FSEL_3) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_5_enq_1___05FSEL_4))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_5 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_5__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_0__DOT__empty_reg) 
                     & ((0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_5__DOT__data0_reg)) 
                        & (5U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_0__DOT__data0_reg))))))) 
           & ((IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_91) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_12)) 
                 & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_98))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_12 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_5__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1__DOT__empty_reg) 
                     & ((1U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_5__DOT__data0_reg)) 
                        & (5U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1__DOT__data0_reg))))))) 
           & ((IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_91) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_13)) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_12)) 
                    & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_11)) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_10)) 
                          & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_9)) 
                             & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_8)) 
                                & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_7)) 
                                   & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_5)))))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_0_f_wr_data_enq_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_0_f_wr_data_enq_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_7) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_7));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_4_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_4_enq_1___05FSEL_1)
            ? 0U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_4_enq_1___05FSEL_2)
                     ? 1U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_4_enq_1___05FSEL_3)
                              ? 2U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_4_enq_1___05FSEL_4)
                                       ? 3U : 0U))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_4_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_4_enq_1___05FSEL_1) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_4_enq_1___05FSEL_2) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_4_enq_1___05FSEL_3) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_4_enq_1___05FSEL_4))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_4 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_4__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_0__DOT__empty_reg) 
                     & ((0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_4__DOT__data0_reg)) 
                        & (4U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_0__DOT__data0_reg))))))) 
           & ((IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_92) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_11)) 
                 & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_98))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_11 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_4__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1__DOT__empty_reg) 
                     & ((1U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_4__DOT__data0_reg)) 
                        & (4U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1__DOT__data0_reg))))))) 
           & ((IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_92) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_13)) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_12)) 
                    & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_11)) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_10)) 
                          & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_9)) 
                             & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_8)) 
                                & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_7)) 
                                   & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_4)))))))))));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_6) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_6_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_13) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_6_D_IN = 1U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_20) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_6_D_IN = 2U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_27) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_6_D_IN = 3U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_6_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_addr_D_IN = 0ULL;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_6_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_6) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_13) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_20) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_27))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_6_enq_1___05FSEL_4 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_27));
    mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_89 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_27)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_20))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_81 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_27)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_26))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_0_enq_1___05FSEL_3) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_1_enq_1___05FSEL_3) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_2_enq_1___05FSEL_3) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_3_enq_1___05FSEL_3) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_4_enq_1___05FSEL_3) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_5_enq_1___05FSEL_3) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_6_enq_1___05FSEL_3)))))));
    __Vtableidx13 = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_6_enq_1___05FSEL_3) 
                      << 6U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_5_enq_1___05FSEL_3) 
                                 << 5U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_4_enq_1___05FSEL_3) 
                                            << 4U) 
                                           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_3_enq_1___05FSEL_3) 
                                               << 3U) 
                                              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_2_enq_1___05FSEL_3) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_1_enq_1___05FSEL_3) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_0_enq_1___05FSEL_3)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2_D_IN 
        = VmkTbSoc_edited__ConstPool__TABLE_hb9803b17_0
        [__Vtableidx13];
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_0_f_wr_data_enq_1___05FSEL_3 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_14) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_14));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_1_f_wr_data_enq_1___05FSEL_3 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_15) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_15));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_2_f_wr_data_enq_1___05FSEL_3 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_16) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_16));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_4_f_wr_data_enq_1___05FSEL_3 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_18) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_18));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_5_f_wr_data_enq_1___05FSEL_3 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_19) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_19));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_3) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_3_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_10) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_3_D_IN = 1U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_17) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_3_D_IN = 2U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr__DOT__data0_reg;
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_24) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_3_D_IN = 3U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_addr_D_IN 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr__DOT__data0_reg;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_3_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_addr_D_IN = 0ULL;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_mis_3_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_3) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_10) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_17) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_24))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_3_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_21) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_22) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_23) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_24) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_25) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_26) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_27)))))));
    __Vtableidx10 = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_27) 
                      << 6U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_26) 
                                 << 5U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_25) 
                                            << 4U) 
                                           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_24) 
                                               << 3U) 
                                              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_23) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_22) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_21)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wr_sjs_3_D_IN 
        = VmkTbSoc_edited__ConstPool__TABLE_hb9803b17_0
        [__Vtableidx10];
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr_DEQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_27) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_26) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_25) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_24) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_23) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_22) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_21)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_3_enq_1___05FSEL_4 
        = ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[0U]) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_24));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_17 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_3__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2__DOT__empty_reg) 
                     & ((2U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_3__DOT__data0_reg)) 
                        & (3U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2__DOT__data0_reg))))))) 
           & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_24)) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_20)) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_19)) 
                    & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_18)) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_17)) 
                          & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_16)) 
                             & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_15)) 
                                & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_14)) 
                                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_84))))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_93 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_24)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_17))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_9 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4457)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4459))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_143 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4462) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
              == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh139089)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_144 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4448) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
              == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh138718)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_10 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4443)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4445))));
    vlSelf->__VdfgRegularize_hd87f99a1_4_122 = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4437) 
                                                | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
                                                   == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh138374)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_145 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4425) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
              == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh138018)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_146 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4401) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
              == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh137306)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_11 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4432)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4434))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_12 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4420)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4422))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_14 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4396)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4398))));
    vlSelf->__VdfgRegularize_hd87f99a1_4_121 = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4414) 
                                                | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
                                                   == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh137674)));
    vlSelf->__VdfgRegularize_hd87f99a1_4_120 = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4390) 
                                                | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
                                                   == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh136962)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_147 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4378) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
              == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh136606)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_13 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4409)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4411))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_15 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4385)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4387))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_16 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4373)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4375))));
    vlSelf->__VdfgRegularize_hd87f99a1_4_119 = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4367) 
                                                | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_prio___05Fh130081) 
                                                   == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y___05Fh136262)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_18 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4362)) 
                 & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4364))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_1_f_wr_data_enq_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_1) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_1));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_1_f_wr_data_enq_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_8) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_8));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_2_f_wr_data_enq_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_2) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_2));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_2_f_wr_data_enq_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_9) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_9));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_5_f_wr_data_enq_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_5) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_5));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_5_f_wr_data_enq_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_12) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_12));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_4_f_wr_data_enq_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_4) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_4));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_4_f_wr_data_enq_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_11) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_11));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_6_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_6_enq_1___05FSEL_1)
            ? 0U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_6_enq_1___05FSEL_2)
                     ? 1U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_6_enq_1___05FSEL_3)
                              ? 2U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_6_enq_1___05FSEL_4)
                                       ? 3U : 0U))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_6_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_6_enq_1___05FSEL_1) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_6_enq_1___05FSEL_2) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_6_enq_1___05FSEL_3) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_6_enq_1___05FSEL_4))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_6 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_6__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_0__DOT__empty_reg) 
                     & ((0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_6__DOT__data0_reg)) 
                        & (6U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_0__DOT__data0_reg))))))) 
           & ((IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_89) 
              & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_80) 
                 & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_97))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_13 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_6__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1__DOT__empty_reg) 
                     & ((1U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_6__DOT__data0_reg)) 
                        & (6U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1__DOT__data0_reg))))))) 
           & ((IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_89) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_13)) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_12)) 
                    & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_11)) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_10)) 
                          & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_9)) 
                             & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_8)) 
                                & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_90)))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_20 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_6__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2__DOT__empty_reg) 
                     & ((2U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_6__DOT__data0_reg)) 
                        & (6U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2__DOT__data0_reg))))))) 
           & ((IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_89) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_19)) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_18)) 
                    & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_17)) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_16)) 
                          & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_15)) 
                             & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_14)) 
                                & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_80)))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_21 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_0__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3__DOT__empty_reg) 
                     & ((3U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_0__DOT__data0_reg)) 
                        & (0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3__DOT__data0_reg))))))) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_81) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_25)) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_24)) 
                    & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_23)) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_22)) 
                          & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_21)) 
                             & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_88))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_22 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_1__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3__DOT__empty_reg) 
                     & ((3U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_1__DOT__data0_reg)) 
                        & (1U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3__DOT__data0_reg))))))) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_81) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_25)) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_24)) 
                    & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_23)) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_22)) 
                          & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_21)) 
                             & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_15)) 
                                & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_86)))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_23 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_2__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3__DOT__empty_reg) 
                     & ((3U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_2__DOT__data0_reg)) 
                        & (2U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3__DOT__data0_reg))))))) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_81) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_25)) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_24)) 
                    & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_23)) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_22)) 
                          & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_21)) 
                             & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_16)) 
                                & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_85)))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_24 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_3__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3__DOT__empty_reg) 
                     & ((3U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_3__DOT__data0_reg)) 
                        & (3U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3__DOT__data0_reg))))))) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_81) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_25)) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_24)) 
                    & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_23)) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_22)) 
                          & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_21)) 
                             & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_17)) 
                                & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_84)))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_25 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_4__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3__DOT__empty_reg) 
                     & ((3U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_4__DOT__data0_reg)) 
                        & (4U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3__DOT__data0_reg))))))) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_81) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_25)) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_24)) 
                    & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_23)) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_22)) 
                          & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_21)) 
                             & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_18)) 
                                & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_83)))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_26 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_5__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3__DOT__empty_reg) 
                     & ((3U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_5__DOT__data0_reg)) 
                        & (5U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3__DOT__data0_reg))))))) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_81) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_25)) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_24)) 
                    & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_23)) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_22)) 
                          & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_21)) 
                             & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_19)) 
                                & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_82)))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_27 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_6__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3__DOT__empty_reg) 
                     & ((3U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_6__DOT__data0_reg)) 
                        & (6U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3__DOT__data0_reg))))))) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_81) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_25)) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_24)) 
                    & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_23)) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_22)) 
                          & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_21)) 
                             & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_20)) 
                                & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_80)))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_3_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_3_enq_1___05FSEL_1)
            ? 0U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_3_enq_1___05FSEL_2)
                     ? 1U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_3_enq_1___05FSEL_3)
                              ? 2U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_3_enq_1___05FSEL_4)
                                       ? 3U : 0U))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_3_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_3_enq_1___05FSEL_1) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_3_enq_1___05FSEL_2) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_3_enq_1___05FSEL_3) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_3_enq_1___05FSEL_4))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_0_enq_1___05FSEL_4) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_1_enq_1___05FSEL_4) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_2_enq_1___05FSEL_4) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_3_enq_1___05FSEL_4) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_4_enq_1___05FSEL_4) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_5_enq_1___05FSEL_4) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_6_enq_1___05FSEL_4)))))));
    __Vtableidx14 = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_6_enq_1___05FSEL_4) 
                      << 6U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_5_enq_1___05FSEL_4) 
                                 << 5U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_4_enq_1___05FSEL_4) 
                                            << 4U) 
                                           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_3_enq_1___05FSEL_4) 
                                               << 3U) 
                                              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_2_enq_1___05FSEL_4) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_1_enq_1___05FSEL_4) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_v_f_wrd_mis_0_enq_1___05FSEL_4)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3_D_IN 
        = VmkTbSoc_edited__ConstPool__TABLE_hb9803b17_0
        [__Vtableidx14];
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_3_f_wr_data_enq_1___05FSEL_3 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_17) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_17));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_3 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_3__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_0__DOT__empty_reg) 
                     & ((0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_3__DOT__data0_reg)) 
                        & (3U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_0__DOT__data0_reg))))))) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_93) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_10)) 
                 & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_98))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_10 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__empty_reg) 
            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_data__DOT__full_reg) 
               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_3__DOT__empty_reg) 
                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1__DOT__empty_reg) 
                     & ((1U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_3__DOT__data0_reg)) 
                        & (3U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1__DOT__data0_reg))))))) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT____VdfgRegularize_h4504eb63_102_93) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_13)) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_12)) 
                    & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_11)) 
                       & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_10)) 
                          & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_9)) 
                             & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_8)) 
                                & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_7)) 
                                   & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_3)))))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_9 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_8));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_9 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_8));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_9 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_8));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_9 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_8));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_9 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_8));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_9 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_8));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_9 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_8));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_9 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_8));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_152 
        = ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_122)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_11));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_151 
        = ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_121)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_13));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_150 
        = ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_120)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_15));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_129 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4362)) 
           & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4364) 
               | ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_119) 
                  | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4373) 
                     | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4375) 
                        | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_147))))) 
              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4385) 
                  | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4387) 
                     | ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_120) 
                        | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4396) 
                           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4398) 
                              | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_146)))))) 
                 | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4409) 
                     | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4411) 
                        | ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_121) 
                           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4420) 
                              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4422) 
                                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_145)))))) 
                    | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4432) 
                        | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4434) 
                           | ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_122) 
                              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4443) 
                                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4445) 
                                    | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_144)))))) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4457) 
                          | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4459) 
                             | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_143))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_149 
        = ((~ (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_119)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_18));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_6_f_wr_data_enq_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_6) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_6));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_6_f_wr_data_enq_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_13) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_13));
    mkTbSoc__DOT__soc__DOT__soc__DOT___dor1fabric_v_f_wrd_sjs_2_EN_deq 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_20) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_19) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_18) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_17) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_16) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_15) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_14)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_6_f_wr_data_enq_1___05FSEL_3 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_20) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_20));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_0_DEQ 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data) 
            & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[0U]) 
           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_7) 
               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[0U]) 
              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_14) 
                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[0U]) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_21) 
                    & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[0U]))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_0_f_wr_data_enq_1___05FSEL_4 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_21) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_21));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_1_DEQ 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_1) 
            & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[0U]) 
           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_8) 
               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[0U]) 
              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_15) 
                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[0U]) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_22) 
                    & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[0U]))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_1_f_wr_data_enq_1___05FSEL_4 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_22) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_22));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_2_DEQ 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_2) 
            & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[0U]) 
           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_9) 
               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[0U]) 
              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_16) 
                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[0U]) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_23) 
                    & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[0U]))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_2_f_wr_data_enq_1___05FSEL_4 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_23) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_23));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_3_f_wr_data_enq_1___05FSEL_4 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_24) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_24));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_4_DEQ 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_4) 
            & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[0U]) 
           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_11) 
               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[0U]) 
              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_18) 
                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[0U]) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_25) 
                    & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[0U]))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_4_f_wr_data_enq_1___05FSEL_4 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_25) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_25));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_5_DEQ 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_5) 
            & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[0U]) 
           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_12) 
               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[0U]) 
              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_19) 
                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[0U]) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_26) 
                    & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[0U]))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_5_f_wr_data_enq_1___05FSEL_4 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_26) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_26));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_6_DEQ 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_6) 
            & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[0U]) 
           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_13) 
               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[0U]) 
              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_20) 
                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[0U]) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_27) 
                    & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[0U]))));
    mkTbSoc__DOT__soc__DOT__soc__DOT___dor1fabric_v_f_wrd_sjs_3_EN_deq 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_27) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_26) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_25) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_24) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_23) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_22) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_21)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_6_f_wr_data_enq_1___05FSEL_4 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_27) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_27));
    mkTbSoc__DOT__soc__DOT__soc__DOT___dor1fabric_v_f_wrd_sjs_0_EN_deq 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_6) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_5) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_4) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_3) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_2) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_1) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_3_f_wr_data_enq_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_3) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_3));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_mis_3_DEQ 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_3) 
            & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[0U]) 
           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_10) 
               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[0U]) 
              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_17) 
                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[0U]) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_24) 
                    & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[0U]))));
    mkTbSoc__DOT__soc__DOT__soc__DOT___dor1fabric_v_f_wrd_sjs_1_EN_deq 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_13) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_12) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_11) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_10) 
                    | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_9) 
                       | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_8) 
                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_7)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_3_f_wr_data_enq_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_data_10) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__WILL_FIRE_RL_fabric_rl_wr_xaction_master_to_slave_10));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__NOT_IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_targ_ETC___05F_d4431 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_151) 
           & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_145)) 
              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_12)));
    mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155 
        = (((0x1000U <= (0x3ffffffU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                               >> 5U)))) 
            & ((0x2000U <= (0x3ffffffU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                  >> 5U)))) 
               & ((0x3000U <= (0x3ffffffU & (IData)(
                                                    (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                     >> 5U)))) 
                  & (0x200000U <= (0x3ffffffU & (IData)(
                                                        (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                         >> 5U))))))) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_26) 
              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_129)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__NOT_IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_targ_ETC___05F_d4384 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_149) 
           & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_147)) 
              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_16)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_2_DEQ 
        = ((IData)(mkTbSoc__DOT__soc__DOT__soc__DOT___dor1fabric_v_f_wrd_sjs_2_EN_deq) 
           & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[0U]);
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data_DEQ 
        = ((IData)(mkTbSoc__DOT__soc__DOT__soc__DOT___dor1fabric_v_f_wrd_sjs_2_EN_deq) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_addr_DEQ));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_data_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_0_f_wr_data_enq_1___05FSEL_1) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_0_f_wr_data_enq_1___05FSEL_2) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_0_f_wr_data_enq_1___05FSEL_3) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_0_f_wr_data_enq_1___05FSEL_4))));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_0_f_wr_data_enq_1___05FSEL_1) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[2U];
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_0_f_wr_data_enq_1___05FSEL_2) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[2U];
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_0_f_wr_data_enq_1___05FSEL_3) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[2U];
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_0_f_wr_data_enq_1___05FSEL_4) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[2U];
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_data_D_IN[0U] = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_data_D_IN[1U] = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_0_f_wr_data_D_IN[2U] = 0U;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_data_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_1_f_wr_data_enq_1___05FSEL_1) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_1_f_wr_data_enq_1___05FSEL_2) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_1_f_wr_data_enq_1___05FSEL_3) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_1_f_wr_data_enq_1___05FSEL_4))));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_1_f_wr_data_enq_1___05FSEL_1) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[2U];
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_1_f_wr_data_enq_1___05FSEL_2) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[2U];
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_1_f_wr_data_enq_1___05FSEL_3) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[2U];
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_1_f_wr_data_enq_1___05FSEL_4) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[2U];
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_data_D_IN[0U] = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_data_D_IN[1U] = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_1_f_wr_data_D_IN[2U] = 0U;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_data_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_2_f_wr_data_enq_1___05FSEL_1) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_2_f_wr_data_enq_1___05FSEL_2) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_2_f_wr_data_enq_1___05FSEL_3) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_2_f_wr_data_enq_1___05FSEL_4))));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_2_f_wr_data_enq_1___05FSEL_1) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[2U];
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_2_f_wr_data_enq_1___05FSEL_2) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[2U];
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_2_f_wr_data_enq_1___05FSEL_3) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[2U];
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_2_f_wr_data_enq_1___05FSEL_4) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[2U];
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_data_D_IN[0U] = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_data_D_IN[1U] = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_2_f_wr_data_D_IN[2U] = 0U;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_data_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_4_f_wr_data_enq_1___05FSEL_1) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_4_f_wr_data_enq_1___05FSEL_2) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_4_f_wr_data_enq_1___05FSEL_3) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_4_f_wr_data_enq_1___05FSEL_4))));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_4_f_wr_data_enq_1___05FSEL_1) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[2U];
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_4_f_wr_data_enq_1___05FSEL_2) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[2U];
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_4_f_wr_data_enq_1___05FSEL_3) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[2U];
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_4_f_wr_data_enq_1___05FSEL_4) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[2U];
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_data_D_IN[0U] = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_data_D_IN[1U] = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_4_f_wr_data_D_IN[2U] = 0U;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_data_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_5_f_wr_data_enq_1___05FSEL_1) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_5_f_wr_data_enq_1___05FSEL_2) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_5_f_wr_data_enq_1___05FSEL_3) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_5_f_wr_data_enq_1___05FSEL_4))));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_5_f_wr_data_enq_1___05FSEL_1) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[2U];
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_5_f_wr_data_enq_1___05FSEL_2) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[2U];
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_5_f_wr_data_enq_1___05FSEL_3) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[2U];
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_5_f_wr_data_enq_1___05FSEL_4) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[2U];
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_data_D_IN[0U] = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_data_D_IN[1U] = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_5_f_wr_data_D_IN[2U] = 0U;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_3_DEQ 
        = ((IData)(mkTbSoc__DOT__soc__DOT__soc__DOT___dor1fabric_v_f_wrd_sjs_3_EN_deq) 
           & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[0U]);
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data_DEQ 
        = ((IData)(mkTbSoc__DOT__soc__DOT__soc__DOT___dor1fabric_v_f_wrd_sjs_3_EN_deq) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_addr_DEQ));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_data_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_6_f_wr_data_enq_1___05FSEL_1) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_6_f_wr_data_enq_1___05FSEL_2) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_6_f_wr_data_enq_1___05FSEL_3) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_6_f_wr_data_enq_1___05FSEL_4))));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_6_f_wr_data_enq_1___05FSEL_1) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[2U];
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_6_f_wr_data_enq_1___05FSEL_2) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[2U];
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_6_f_wr_data_enq_1___05FSEL_3) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[2U];
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_6_f_wr_data_enq_1___05FSEL_4) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[2U];
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_data_D_IN[0U] = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_data_D_IN[1U] = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_6_f_wr_data_D_IN[2U] = 0U;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_0_DEQ 
        = ((IData)(mkTbSoc__DOT__soc__DOT__soc__DOT___dor1fabric_v_f_wrd_sjs_0_EN_deq) 
           & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[0U]);
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data_DEQ 
        = ((IData)(mkTbSoc__DOT__soc__DOT__soc__DOT___dor1fabric_v_f_wrd_sjs_0_EN_deq) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_addr_DEQ));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_v_f_wrd_sjs_1_DEQ 
        = ((IData)(mkTbSoc__DOT__soc__DOT__soc__DOT___dor1fabric_v_f_wrd_sjs_1_EN_deq) 
           & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[0U]);
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data_DEQ 
        = ((IData)(mkTbSoc__DOT__soc__DOT__soc__DOT___dor1fabric_v_f_wrd_sjs_1_EN_deq) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_addr_DEQ));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_data_ENQ 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_3_f_wr_data_enq_1___05FSEL_1) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_3_f_wr_data_enq_1___05FSEL_2) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_3_f_wr_data_enq_1___05FSEL_3) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_3_f_wr_data_enq_1___05FSEL_4))));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_3_f_wr_data_enq_1___05FSEL_1) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_0_f_wr_data__DOT__data0_reg[2U];
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_3_f_wr_data_enq_1___05FSEL_2) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_1_f_wr_data__DOT__data0_reg[2U];
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_3_f_wr_data_enq_1___05FSEL_3) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_2_f_wr_data__DOT__data0_reg[2U];
    } else if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__MUX_fabric_xactors_to_slaves_3_f_wr_data_enq_1___05FSEL_4) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_data_D_IN[0U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[0U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_data_D_IN[1U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[1U];
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_data_D_IN[2U] 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_wr_data__DOT__data0_reg[2U];
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_data_D_IN[0U] = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_data_D_IN[1U] = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_to_slaves_3_f_wr_data_D_IN[2U] = 0U;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_8 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_7));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_8 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_7));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_8 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_7));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_8 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_7));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_8 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_7));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_8 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_7));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_8 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_7));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_8 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_7));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_19 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__NOT_IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_targ_ETC___05F_d4384) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_150) 
              & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_146)) 
                 & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_14))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_148 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_19) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__NOT_IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_targ_ETC___05F_d4431) 
              & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_152) 
                 & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_144)) 
                    & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_10)))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_7 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_6));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_7 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_6));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_7 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_6));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_7 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_6));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_7 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_6));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_7 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_6));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_7 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_6));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_7 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_6));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_148) 
            & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_143)) 
               & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_9)))
            ? 0U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_148)
                     ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_9)
                         ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4462)
                             ? 0x22U : 0x23U) : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4457)
                                                  ? 0x20U
                                                  : 0x21U))
                     : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_19)
                         ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__NOT_IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_targ_ETC___05F_d4431)
                             ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_152)
                                 ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_10)
                                     ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4448)
                                         ? 0x1eU : 0x1fU)
                                     : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4443)
                                         ? 0x1cU : 0x1dU))
                                 : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_11)
                                     ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4437)
                                         ? 0x1aU : 0x1bU)
                                     : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4432)
                                         ? 0x18U : 0x19U)))
                             : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_151)
                                 ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_12)
                                     ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4425)
                                         ? 0x16U : 0x17U)
                                     : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4420)
                                         ? 0x14U : 0x15U))
                                 : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_13)
                                     ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4414)
                                         ? 0x12U : 0x13U)
                                     : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4409)
                                         ? 0x10U : 0x11U))))
                         : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__NOT_IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_targ_ETC___05F_d4384)
                             ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_150)
                                 ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_14)
                                     ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4401)
                                         ? 0xeU : 0xfU)
                                     : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4396)
                                         ? 0xcU : 0xdU))
                                 : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_15)
                                     ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4390)
                                         ? 0xaU : 0xbU)
                                     : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4385)
                                         ? 8U : 9U)))
                             : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_149)
                                 ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_16)
                                     ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4378)
                                         ? 6U : 7U)
                                     : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4373)
                                         ? 4U : 5U))
                                 : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_18)
                                     ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4367)
                                         ? 2U : 3U)
                                     : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__IF_IF_IF_IF_IF_IF_SEXT_SEL_ARR_plic_v_target_i_ETC___05F_d4362)
                                         ? 0U : 1U)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_0_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_data_D_IN[0U] 
        = (IData)(((0x1000U > (0x3ffffffU & (IData)(
                                                    (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                     >> 5U))))
                    ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh144874)) 
                        << 0x20U) | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh144874)))
                    : (((0x1000U <= (0x3ffffffU & (IData)(
                                                          (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                           >> 5U)))) 
                        & (0x2000U > (0x3ffffffU & (IData)(
                                                           (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                            >> 5U)))))
                        ? ((0x23U >= (0x3e0U & ((IData)(
                                                        (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                         >> 5U)) 
                                                << 5U)))
                            ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__rdata___05F_1___05Fh144434
                            : 0ULL) : (((0x2000U <= 
                                         (0x3ffffffU 
                                          & (IData)(
                                                    (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                     >> 5U)))) 
                                        & (0x3000U 
                                           > (0x3ffffffU 
                                              & (IData)(
                                                        (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                         >> 5U)))))
                                        ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y_avValue_snd___05Fh144284
                                        : ((0x200000U 
                                            > (0x3ffffffU 
                                               & (IData)(
                                                         (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                          >> 5U))))
                                            ? 0ULL : 
                                           ((0U == 
                                             (0xfffU 
                                              & (IData)(
                                                        (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                         >> 5U))))
                                             ? ((1U 
                                                 >= 
                                                 (0x1fU 
                                                  & (((IData)(
                                                              (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                               >> 5U)) 
                                                      - (IData)(0xc000000U)) 
                                                     >> 0xcU)))
                                                 ? 
                                                (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh157162)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh157162)))
                                                 : 0ULL)
                                             : ((4U 
                                                 == 
                                                 (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                             >> 5U))))
                                                 ? 
                                                ((1U 
                                                  >= 
                                                  (0x1fU 
                                                   & (((IData)(
                                                               (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                                >> 5U)) 
                                                       - (IData)(0xc000000U)) 
                                                      >> 0xcU)))
                                                  ? 
                                                 ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_129)
                                                   ? 
                                                  (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)))
                                                   : 0ULL)
                                                  : 0ULL)
                                                 : 0ULL)))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_data_D_IN[1U] 
        = (IData)((((0x1000U > (0x3ffffffU & (IData)(
                                                     (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                      >> 5U))))
                     ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh144874)) 
                         << 0x20U) | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh144874)))
                     : (((0x1000U <= (0x3ffffffU & (IData)(
                                                           (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                            >> 5U)))) 
                         & (0x2000U > (0x3ffffffU & (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                             >> 5U)))))
                         ? ((0x23U >= (0x3e0U & ((IData)(
                                                         (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                          >> 5U)) 
                                                 << 5U)))
                             ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__rdata___05F_1___05Fh144434
                             : 0ULL) : (((0x2000U <= 
                                          (0x3ffffffU 
                                           & (IData)(
                                                     (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                      >> 5U)))) 
                                         & (0x3000U 
                                            > (0x3ffffffU 
                                               & (IData)(
                                                         (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                          >> 5U)))))
                                         ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__y_avValue_snd___05Fh144284
                                         : ((0x200000U 
                                             > (0x3ffffffU 
                                                & (IData)(
                                                          (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                           >> 5U))))
                                             ? 0ULL
                                             : ((0U 
                                                 == 
                                                 (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                             >> 5U))))
                                                 ? 
                                                ((1U 
                                                  >= 
                                                  (0x1fU 
                                                   & (((IData)(
                                                               (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                                >> 5U)) 
                                                       - (IData)(0xc000000U)) 
                                                      >> 0xcU)))
                                                  ? 
                                                 (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh157162)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__x___05Fh157162)))
                                                  : 0ULL)
                                                 : 
                                                ((4U 
                                                  == 
                                                  (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                              >> 5U))))
                                                  ? 
                                                 ((1U 
                                                   >= 
                                                   (0x1fU 
                                                    & (((IData)(
                                                                (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                                 >> 5U)) 
                                                        - (IData)(0xc000000U)) 
                                                       >> 0xcU)))
                                                   ? 
                                                  ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_129)
                                                    ? 
                                                   (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)))
                                                    : 0ULL)
                                                   : 0ULL)
                                                  : 0ULL)))))) 
                   >> 0x20U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_data_D_IN[2U] 
        = (((0x1000U > (0x3ffffffU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                              >> 5U)))) 
            | ((0x2000U > (0x3ffffffU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                 >> 5U))))
                ? (0x23U >= (0x3e0U & ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                >> 5U)) 
                                       << 5U))) : (
                                                   (0x3000U 
                                                    > 
                                                    (0x3ffffffU 
                                                     & (IData)(
                                                               (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                                >> 5U)))) 
                                                   | ((0x200000U 
                                                       <= 
                                                       (0x3ffffffU 
                                                        & (IData)(
                                                                  (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                                   >> 5U)))) 
                                                      & ((0U 
                                                          == 
                                                          (0xfffU 
                                                           & (IData)(
                                                                     (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                                      >> 5U))))
                                                          ? 
                                                         (1U 
                                                          >= 
                                                          (0x1fU 
                                                           & (((IData)(
                                                                       (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr__DOT__data0_reg 
                                                                        >> 5U)) 
                                                               - (IData)(0xc000000U)) 
                                                              >> 0xcU)))
                                                          : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_26))))))
            ? 0U : 2U);
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_1_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((1U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_10_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0xaU == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_11_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0xbU == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_12_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0xcU == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_13_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0xdU == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_14_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0xeU == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_15_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0xfU == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_16_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0x10U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_17_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0x11U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_18_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0x12U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_19_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0x13U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_2_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((2U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_20_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0x14U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_21_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0x15U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_22_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0x16U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_23_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0x17U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_24_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0x18U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_25_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0x19U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_26_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0x1aU == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_27_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0x1bU == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_28_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0x1cU == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_29_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0x1dU == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_3_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((3U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_30_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0x1eU == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_31_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0x1fU == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_32_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0x20U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_33_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0x21U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_34_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0x22U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_35_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((0x23U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_4_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((4U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_5_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((5U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_6_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((6U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_7_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((7U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_8_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((8U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_9_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__s_xactor_f_rd_addr_DEQ) 
           & ((9U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__max_id___05Fh130033)) 
              & (IData)(mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT____VdfgRegularize_ha668bc43_9_155)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_6 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_5));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_6 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_5));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_6 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_5));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_6 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_5));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_6 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_5));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_6 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_5));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_6 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_5));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_6 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_5));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_1_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_1) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_1))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_1_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_10_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_10) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_10))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_10_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_11_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_11) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_11))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_11_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_12_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_12) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_12))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_12_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_13_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_13) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_13))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_13_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_14_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_14) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_14))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_14_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_15_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_15) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_15))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_15_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_16_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_16) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_16))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_16_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_17_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_17) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_17))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_17_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_18_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_18) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_18))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_18_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_19_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_19) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_19))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_19_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_2_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_2) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_2))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_2_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_20_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_20) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_20))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_20_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_21_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_21) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_21))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_21_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_22_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_22) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_22))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_22_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_23_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_23) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_23))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_23_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_24_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_24) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_24))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_24_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_25_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_25) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_25))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_25_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_26_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_26) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_26))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_26_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_27_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_27) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_27))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_27_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_28_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_28) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_28))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_28_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_29_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_29) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_29))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_29_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_3_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_3) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_3))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_3_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_30_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_30) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_30))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_30_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_31_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_31) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_31))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_31_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_32_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_32) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_32))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_32_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_33_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_33) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_33))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_33_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_34_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_34) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_34))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_34_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_35_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_35) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_35))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_35_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_4_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_4) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_4))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_4_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_5_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_5) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_5))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_5_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_6_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_6) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_6))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_6_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_7_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_7) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_7))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_7_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_8_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_8) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_8))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_8_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_9_EN 
        = (1U & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_v_reg_source_busy_9) 
                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__plic_vrg_source_pending_9))) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_9_write_1___05FSEL_2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_5 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_4));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_5 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_4));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_5 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_4));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_5 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_4));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_5 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_4));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_5 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_4));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_5 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_4));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_5 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_4));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_4 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_3));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_4 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_3));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_4 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_3));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_4 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_3));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_4 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_3));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_4 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_3));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_4 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_3));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_4 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_3));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_3 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_2));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_3 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_2));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_3 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_2));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_3 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_2));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_3 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_2));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_3 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_2));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_3 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_2));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_3 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_2));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_1));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_1));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_1));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_1));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_1));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_1));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_1));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_1));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_0));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_0));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_0));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_0));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_0));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_0));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_0));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_0));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_0 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_mosi_output_enable));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_0 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_mosi_output_enable));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_0 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_sclk_output_enable));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_0 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_sclk_output_enable));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_0 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_sclk));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_0 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_sclk));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_0 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_transmit_data));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_0 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_transmit_data));
    if (vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) {
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_0_EN) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_3 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_4));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_4 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_5));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_5 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_6));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_6 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_7));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_7 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_8));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_8 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_9));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_9 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_10));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_10 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_11));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_11 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_12));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_12 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_13));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_13 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_14));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_14 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_15));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_15 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_16));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_16 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_17));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_17 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_18));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_18 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_19));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_19 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_20));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_20 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_21));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_21 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_22));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_22 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_23));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_23 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_24));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_24 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_25));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_25 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_26));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_26 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_27));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_27 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_28));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_28 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_29));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_29 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_30));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_30 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_31));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_31 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_rRecvData));
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_0_EN) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_3 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_4));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_4 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_5));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_5 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_6));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_6 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_7));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_7 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_8));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_8 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_9));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_9 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_10));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_10 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_11));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_11 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_12));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_12 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_13));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_13 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_14));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_14 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_15));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_15 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_16));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_16 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_17));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_17 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_18));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_18 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_19));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_19 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_20));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_20 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_21));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_21 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_22));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_22 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_23));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_23 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_24));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_24 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_25));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_25 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_26));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_26 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_27));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_27 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_28));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_28 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_29));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_29 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_30));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_30 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_31));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_31 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__WILL_FIRE_RL_user_ifc_uart_receive_buffer_shift) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_rRecvData));
        }
        if (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_prev_sclk_EN) 
             | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_sclk_output_enable))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_sclk 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_prev_sclk_EN) 
                   || (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__MUX_sspi_rg_sclk_write_1___05FVAL_2));
        }
        if (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_prev_sclk_EN) 
             | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_sclk_output_enable))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_sclk 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_prev_sclk_EN)
                    ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster_pinmuxtop_peripheral_side_mspi_clk_in_get)
                    : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__MUX_sspi_rg_sclk_write_1___05FVAL_2));
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_transmit_data_EN) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_transmit_data 
                = (1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_lsbfirst)
                          ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_curr_tx_byte)
                          : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_curr_tx_byte) 
                             >> 7U)));
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_comm_mode_EN) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_mosi_output_enable 
                = (1U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__s_xactor_f_wr_data__DOT__data0_reg[1U] 
                         >> 1U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_lsbfirst 
                = (1U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U] 
                         >> 0xaU));
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_transmit_data_EN) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_transmit_data 
                = (1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_lsbfirst)
                          ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_curr_tx_byte)
                          : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_curr_tx_byte) 
                             >> 7U)));
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_comm_mode_EN) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_mosi_output_enable 
                = (1U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__s_xactor_f_wr_data__DOT__data0_reg[1U] 
                         >> 1U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_lsbfirst 
                = (1U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U] 
                         >> 0xaU));
        }
        if (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__MUX_sspi_rg_curr_tx_byte_write_1___05FSEL_1) 
             | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__WILL_FIRE_RL_sspi_rl_transmit_idle_to_data_transfer))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_curr_tx_byte 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_curr_tx_byte_D_IN;
        }
        if (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__MUX_sspi_rg_curr_tx_byte_write_1___05FSEL_1) 
             | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__WILL_FIRE_RL_sspi_rl_transmit_idle_to_data_transfer))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_curr_tx_byte 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_curr_tx_byte_D_IN;
        }
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_3 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_3 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_4 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_4 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_5 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_5 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_6 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_6 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_7 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_7 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_8 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_8 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_9 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_9 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_10 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_10 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_11 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_11 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_12 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_12 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_13 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_13 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_14 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_14 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_15 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_15 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_mosi_output_enable = 1U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_mosi_output_enable = 1U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_sclk = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_sclk = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_transmit_data = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_transmit_data = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_16 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_16 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_curr_tx_byte = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_lsbfirst = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_curr_tx_byte = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_lsbfirst = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_17 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_17 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_18 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_18 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_19 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_19 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_20 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_20 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_21 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_21 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_22 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_22 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_23 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_23 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_24 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_24 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_25 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_25 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_26 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_26 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_27 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_27 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_28 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_28 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_29 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_29 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_30 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_30 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_31 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_31 = 0U;
    }
    if ((8U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosi_delay) 
               - (IData)(1U)))) {
        if ((4U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosi_delay) 
                   - (IData)(1U)))) {
            if ((2U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosi_delay) 
                       - (IData)(1U)))) {
                if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosi_delay) 
                           - (IData)(1U)))) {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_outen 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_15;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_out 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_15;
                } else {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_outen 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_14;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_out 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_14;
                }
            } else if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosi_delay) 
                              - (IData)(1U)))) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_13;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_13;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_12;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_12;
            }
        } else if ((2U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosi_delay) 
                          - (IData)(1U)))) {
            if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosi_delay) 
                       - (IData)(1U)))) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_11;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_11;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_10;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_10;
            }
        } else if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosi_delay) 
                          - (IData)(1U)))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_9;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_9;
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_8;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_8;
        }
    } else if ((4U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosi_delay) 
                      - (IData)(1U)))) {
        if ((2U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosi_delay) 
                   - (IData)(1U)))) {
            if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosi_delay) 
                       - (IData)(1U)))) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_7;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_7;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_6;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_6;
            }
        } else if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosi_delay) 
                          - (IData)(1U)))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_5;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_5;
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_4;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_4;
        }
    } else if ((2U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosi_delay) 
                      - (IData)(1U)))) {
        if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosi_delay) 
                   - (IData)(1U)))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_3;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_3;
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_2;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_2;
        }
    } else if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosi_delay) 
                      - (IData)(1U)))) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_outen 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_1;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_out 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_1;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_outen 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_mosiEn_delay_0;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_mosi_out 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_mosi_delay_0;
    }
    if ((8U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosi_delay) 
               - (IData)(1U)))) {
        if ((4U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosi_delay) 
                   - (IData)(1U)))) {
            if ((2U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosi_delay) 
                       - (IData)(1U)))) {
                if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosi_delay) 
                           - (IData)(1U)))) {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_outen 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_15;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_out 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_15;
                } else {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_outen 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_14;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_out 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_14;
                }
            } else if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosi_delay) 
                              - (IData)(1U)))) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_13;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_13;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_12;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_12;
            }
        } else if ((2U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosi_delay) 
                          - (IData)(1U)))) {
            if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosi_delay) 
                       - (IData)(1U)))) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_11;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_11;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_10;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_10;
            }
        } else if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosi_delay) 
                          - (IData)(1U)))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_9;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_9;
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_8;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_8;
        }
    } else if ((4U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosi_delay) 
                      - (IData)(1U)))) {
        if ((2U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosi_delay) 
                   - (IData)(1U)))) {
            if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosi_delay) 
                       - (IData)(1U)))) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_7;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_7;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_6;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_6;
            }
        } else if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosi_delay) 
                          - (IData)(1U)))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_5;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_5;
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_4;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_4;
        }
    } else if ((2U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosi_delay) 
                      - (IData)(1U)))) {
        if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosi_delay) 
                   - (IData)(1U)))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_3;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_3;
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_2;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_2;
        }
    } else if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosi_delay) 
                      - (IData)(1U)))) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_outen 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_1;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_out 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_1;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_outen 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_mosiEn_delay_0;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_mosi_out 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_mosi_delay_0;
    }
    if ((8U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclk_delay) 
               - (IData)(1U)))) {
        if ((4U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclk_delay) 
                   - (IData)(1U)))) {
            if ((2U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclk_delay) 
                       - (IData)(1U)))) {
                if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclk_delay) 
                           - (IData)(1U)))) {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_outen 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_15;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_out 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_15;
                } else {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_outen 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_14;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_out 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_14;
                }
            } else if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclk_delay) 
                              - (IData)(1U)))) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_13;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_13;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_12;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_12;
            }
        } else if ((2U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclk_delay) 
                          - (IData)(1U)))) {
            if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclk_delay) 
                       - (IData)(1U)))) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_11;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_11;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_10;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_10;
            }
        } else if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclk_delay) 
                          - (IData)(1U)))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_9;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_9;
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_8;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_8;
        }
    } else if ((4U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclk_delay) 
                      - (IData)(1U)))) {
        if ((2U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclk_delay) 
                   - (IData)(1U)))) {
            if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclk_delay) 
                       - (IData)(1U)))) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_7;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_7;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_6;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_6;
            }
        } else if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclk_delay) 
                          - (IData)(1U)))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_5;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_5;
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_4;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_4;
        }
    } else if ((2U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclk_delay) 
                      - (IData)(1U)))) {
        if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclk_delay) 
                   - (IData)(1U)))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_3;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_3;
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_2;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_2;
        }
    } else if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclk_delay) 
                      - (IData)(1U)))) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_outen 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_1;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_out 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_1;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_outen 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_sclkEn_delay_0;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1_1io_sclk_out 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_val_sclk_delay_0;
    }
    if ((8U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclk_delay) 
               - (IData)(1U)))) {
        if ((4U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclk_delay) 
                   - (IData)(1U)))) {
            if ((2U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclk_delay) 
                       - (IData)(1U)))) {
                if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclk_delay) 
                           - (IData)(1U)))) {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_outen 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_15;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_out 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_15;
                } else {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_outen 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_14;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_out 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_14;
                }
            } else if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclk_delay) 
                              - (IData)(1U)))) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_13;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_13;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_12;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_12;
            }
        } else if ((2U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclk_delay) 
                          - (IData)(1U)))) {
            if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclk_delay) 
                       - (IData)(1U)))) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_11;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_11;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_10;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_10;
            }
        } else if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclk_delay) 
                          - (IData)(1U)))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_9;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_9;
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_8;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_8;
        }
    } else if ((4U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclk_delay) 
                      - (IData)(1U)))) {
        if ((2U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclk_delay) 
                   - (IData)(1U)))) {
            if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclk_delay) 
                       - (IData)(1U)))) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_7;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_7;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_outen 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_6;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_out 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_6;
            }
        } else if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclk_delay) 
                          - (IData)(1U)))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_5;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_5;
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_4;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_4;
        }
    } else if ((2U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclk_delay) 
                      - (IData)(1U)))) {
        if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclk_delay) 
                   - (IData)(1U)))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_3;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_3;
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_outen 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_2;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_out 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_2;
        }
    } else if ((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclk_delay) 
                      - (IData)(1U)))) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_outen 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_1;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_out 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_1;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_outen 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_sclkEn_delay_0;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0_1io_sclk_out 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_val_sclk_delay_0;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__CASE_sspi_rg_active_3_v3031_4_v3031_sspi_rg_cl_ETC___05Fq2 
        = (1U & (((3U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_active)) 
                  || (4U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_active)))
                  ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_clk_counter_56_EQ_sspi_rg_prescaller_57___05F_d158)
                      ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__v___05Fh23043)
                      : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_clk_counter_56_EQ_0_CONCAT_sspi_rg_pre_ETC___05F_d177)
                          ? (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_sclk))
                          : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_sclk)))
                  : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_clk_polarity)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__CASE_sspi_rg_active_3_v3031_4_v3031_sspi_rg_cl_ETC___05Fq2 
        = (1U & (((3U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_active)) 
                  || (4U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_active)))
                  ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_clk_counter_56_EQ_sspi_rg_prescaller_57___05F_d158)
                      ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__v___05Fh23043)
                      : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_clk_counter_56_EQ_0_CONCAT_sspi_rg_pre_ETC___05F_d177)
                          ? (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_sclk))
                          : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_sclk)))
                  : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_clk_polarity)));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_lsbfirst) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__IF_sspi_rg_lsbfirst_92_THEN_sspi_wr_spi_in_qua_ETC___05F_d428 
            = (0x80U | (0x7fU & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_curr_rx_byte)));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__x___05Fh25105 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_tx_data;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__IF_sspi_rg_lsbfirst_92_THEN_sspi_wr_spi_in_qua_ETC___05F_d428 
            = (1U | (0xfeU & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_curr_rx_byte)));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__x___05Fh25105 
            = ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_tx_data 
                << 0x18U) | ((0xff0000U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_tx_data 
                                           << 8U)) 
                             | ((0xff00U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_tx_data 
                                            >> 8U)) 
                                | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_tx_data 
                                   >> 0x18U))));
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__x___05Fh26498 
        = ((0xff00U & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_lsbfirst)
                         ? (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_tx_data 
                            >> 8U) : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_tx_data) 
                       << 8U)) | (0xffU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_lsbfirst)
                                            ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_tx_data
                                            : (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_tx_data 
                                               >> 8U))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__x___05Fh26498 
        = ((0xff00U & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_lsbfirst)
                         ? (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_tx_data 
                            >> 8U) : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_tx_data) 
                       << 8U)) | (0xffU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_lsbfirst)
                                            ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_tx_data
                                            : (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_tx_data 
                                               >> 8U))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__x___05Fh25105 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_lsbfirst)
            ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_tx_data
            : ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_tx_data 
                << 0x18U) | ((0xff0000U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_tx_data 
                                           << 8U)) 
                             | ((0xff00U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_tx_data 
                                            >> 8U)) 
                                | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_tx_data 
                                   >> 0x18U)))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__x_wget___05Fh6622 
        = ((2U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_txfifo_enq_size))
            ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__x___05Fh26498
            : ((4U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_txfifo_enq_size))
                ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__x___05Fh25105
                : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_tx_data));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__x_wget___05Fh6622 
        = ((2U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_txfifo_enq_size))
            ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__x___05Fh26498
            : ((4U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_txfifo_enq_size))
                ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__x___05Fh25105
                : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_tx_data));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_fifoRecv_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_31) 
            << 0x1fU) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_30) 
                          << 0x1eU) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_29) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_28) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_27) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_26) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_25) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_24) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_23) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_22) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_21) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_20) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_19) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_18) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_17) 
                                                                          << 0x11U) 
                                                                         | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_16) 
                                                                             << 0x10U) 
                                                                            | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_15) 
                                                                                << 0xfU) 
                                                                               | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_14) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_13) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_12) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_11) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_10) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_9) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_8) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_7) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_6) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_5) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_0))))))))))))))))))))))))))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_0_30_XOR_user_ifc_u_ETC___05F_d169 
        = (((((((((((((((((((((((((((((((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_0) 
                                          ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_1)) 
                                         ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_2)) 
                                        ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_3)) 
                                       ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_4)) 
                                      ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_5)) 
                                     ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_6)) 
                                    ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_7)) 
                                   ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_8)) 
                                  ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_9)) 
                                 ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_10)) 
                                ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_11)) 
                               ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_12)) 
                              ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_13)) 
                             ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_14)) 
                            ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_15)) 
                           ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_16)) 
                          ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_17)) 
                         ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_18)) 
                        ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_19)) 
                       ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_20)) 
                      ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_21)) 
                     ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_22)) 
                    ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_23)) 
                   ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_24)) 
                  ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_25)) 
                 ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_26)) 
                ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_27)) 
               ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_28)) 
              ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_29)) 
             ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_30)) 
            ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_vrRecvBuffer_31)) 
           ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_rRecvParity));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_fifoRecv_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_31) 
            << 0x1fU) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_30) 
                          << 0x1eU) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_29) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_28) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_27) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_26) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_25) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_24) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_23) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_22) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_21) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_20) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_19) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_18) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_17) 
                                                                          << 0x11U) 
                                                                         | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_16) 
                                                                             << 0x10U) 
                                                                            | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_15) 
                                                                                << 0xfU) 
                                                                               | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_14) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_13) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_12) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_11) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_10) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_9) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_8) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_7) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_6) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_5) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_4) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_0))))))))))))))))))))))))))))))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_0_30_XOR_user_ifc_u_ETC___05F_d169 
        = (((((((((((((((((((((((((((((((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_0) 
                                          ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_1)) 
                                         ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_2)) 
                                        ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_3)) 
                                       ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_4)) 
                                      ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_5)) 
                                     ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_6)) 
                                    ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_7)) 
                                   ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_8)) 
                                  ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_9)) 
                                 ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_10)) 
                                ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_11)) 
                               ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_12)) 
                              ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_13)) 
                             ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_14)) 
                            ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_15)) 
                           ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_16)) 
                          ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_17)) 
                         ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_18)) 
                        ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_19)) 
                       ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_20)) 
                      ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_21)) 
                     ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_22)) 
                    ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_23)) 
                   ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_24)) 
                  ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_25)) 
                 ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_26)) 
                ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_27)) 
               ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_28)) 
              ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_29)) 
             ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_30)) 
            ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_vrRecvBuffer_31)) 
           ^ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_rRecvParity));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__18(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__18\n"); );
    // Body
    if (vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset__DOT__reset_hold 
            = (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset__DOT__next_reset));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dEnqPtr 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dSyncReg1;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dEnqPtr 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dSyncReg1;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__dEnqPtr 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__dSyncReg1;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dSyncReg1 
            = (7U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__sGEnqPtr) 
                     >> 1U));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dSyncReg1 
            = (7U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__sGEnqPtr) 
                     >> 1U));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__dSyncReg1 
            = (7U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__sGEnqPtr) 
                     >> 1U));
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset__DOT__reset_hold = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dEnqPtr = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dEnqPtr = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__dEnqPtr = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dSyncReg1 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dSyncReg1 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__dSyncReg1 = 0U;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset__DOT__next_reset 
        = (1U | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset__DOT__reset_hold) 
                 << 1U));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__19(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__19\n"); );
    // Body
    if (vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset__DOT__reset_hold 
            = (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset__DOT__next_reset));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dEnqPtr 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dSyncReg1;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dEnqPtr 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dSyncReg1;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__dEnqPtr 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__dSyncReg1;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dSyncReg1 
            = (7U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__sGEnqPtr) 
                     >> 1U));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dSyncReg1 
            = (7U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__sGEnqPtr) 
                     >> 1U));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__dSyncReg1 
            = (7U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__sGEnqPtr) 
                     >> 1U));
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset__DOT__reset_hold = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dEnqPtr = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dEnqPtr = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__dEnqPtr = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dSyncReg1 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dSyncReg1 = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__dSyncReg1 = 0U;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset__DOT__next_reset 
        = (1U | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset__DOT__reset_hold) 
                 << 1U));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__20(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__20\n"); );
    // Body
    vlSelf->__Vdly__mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dDeqToggle 
        = vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dDeqToggle;
    if (vlSelf->mkTbSoc__DOT__trst__DOT__rst) {
        if (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module_EN_dtm_access_putCommand_put) 
             & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dEnqToggle) 
                != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dDeqToggle)))) {
            vlSelf->__Vdly__mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dDeqToggle 
                = (1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dDeqToggle)));
        }
    } else {
        vlSelf->__Vdly__mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dDeqToggle = 0U;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dEnqToggle 
        = ((IData)(vlSelf->mkTbSoc__DOT__trst__DOT__rst) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dSyncReg1));
    vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dSyncReg1 
        = ((IData)(vlSelf->mkTbSoc__DOT__trst__DOT__rst) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__sEnqToggle));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__21(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__21\n"); );
    // Body
    vlSelf->__Vdlyvset__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__fifoMem__v0 = 0U;
    vlSelf->__Vdlyvset__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__fifoMem__v0 = 0U;
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request_dDEQ) {
        vlSelf->__Vdlyvval__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__fifoMem__v0 
            = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT____VdfgRegularize_h4bf44f78_14_21) 
                | (((4U == (0xffU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__dDoutReg 
                                             >> 5U)))) 
                    | ((0x10U == (0xffU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__dDoutReg 
                                                   >> 5U)))) 
                       | (0x14U == (0xffU & (IData)(
                                                    (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__dDoutReg 
                                                     >> 5U)))))) 
                   & (2U == (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__dDoutReg)))))
                ? 0U : 2U);
        vlSelf->__Vdlyvset__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__fifoMem__v0 = 1U;
        vlSelf->__Vdlyvdim0__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__fifoMem__v0 
            = (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__sGEnqPtr));
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request_dDEQ) {
        vlSelf->__Vdlyvval__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__fifoMem__v0[0U] 
            = (IData)(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT____VdfgRegularize_h4bf44f78_14_13)
                        ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__r1___05Fread___05Fh2016)) 
                            << 0x31U) | (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_enable)) 
                                          << 0x30U) 
                                         | (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__r1___05Fread___05Fh2016)) 
                                             << 0x21U) 
                                            | (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_enable)) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__r1___05Fread___05Fh2016) 
                                                                   << 0x11U) 
                                                                  | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_enable) 
                                                                      << 0x10U) 
                                                                     | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__r1___05Fread___05Fh2016) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_enable))))))))))
                        : ((IData)((0x82ULL == (0x1fe3ULL 
                                                & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))
                            ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_divider)) 
                                << 0x21U) | (((QData)((IData)(
                                                              (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_src) 
                                                                << 0x1fU) 
                                                               | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_divider)))) 
                                              << 1U) 
                                             | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_src))))
                            : ((IData)((0x102ULL == 
                                        (0x1fe3ULL 
                                         & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))
                                ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter)))
                                : ((IData)((0x182ULL 
                                            == (0x1fe3ULL 
                                                & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))
                                    ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_repeated_count)) 
                                        << 0x20U) | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_repeated_count)))
                                    : ((IData)((0x202ULL 
                                                == 
                                                (0x1fe3ULL 
                                                 & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))
                                        ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_duty_cycle)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_duty_cycle)))
                                        : ((IData)(
                                                   (0x282ULL 
                                                    == 
                                                    (0x1fe3ULL 
                                                     & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))
                                            ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_period)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_period)))
                                            : ((IData)(
                                                       (0x302ULL 
                                                        == 
                                                        (0x1fe3ULL 
                                                         & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))
                                                ? (
                                                   ((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_input_capture)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_input_capture)))
                                                : 0ULL))))))));
        vlSelf->__Vdlyvval__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__fifoMem__v0[1U] 
            = (IData)((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT____VdfgRegularize_h4bf44f78_14_13)
                         ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__r1___05Fread___05Fh2016)) 
                             << 0x31U) | (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_enable)) 
                                           << 0x30U) 
                                          | (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__r1___05Fread___05Fh2016)) 
                                              << 0x21U) 
                                             | (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_enable)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__r1___05Fread___05Fh2016) 
                                                                    << 0x11U) 
                                                                   | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_enable) 
                                                                       << 0x10U) 
                                                                      | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__r1___05Fread___05Fh2016) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_enable))))))))))
                         : ((IData)((0x82ULL == (0x1fe3ULL 
                                                 & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))
                             ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_divider)) 
                                 << 0x21U) | (((QData)((IData)(
                                                               (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_src) 
                                                                 << 0x1fU) 
                                                                | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_divider)))) 
                                               << 1U) 
                                              | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_src))))
                             : ((IData)((0x102ULL == 
                                         (0x1fe3ULL 
                                          & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))
                                 ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter)) 
                                     << 0x20U) | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter)))
                                 : ((IData)((0x182ULL 
                                             == (0x1fe3ULL 
                                                 & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))
                                     ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_repeated_count)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_repeated_count)))
                                     : ((IData)((0x202ULL 
                                                 == 
                                                 (0x1fe3ULL 
                                                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))
                                         ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_duty_cycle)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_duty_cycle)))
                                         : ((IData)(
                                                    (0x282ULL 
                                                     == 
                                                     (0x1fe3ULL 
                                                      & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))
                                             ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_period)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_period)))
                                             : ((IData)(
                                                        (0x302ULL 
                                                         == 
                                                         (0x1fe3ULL 
                                                          & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))
                                                 ? 
                                                (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_input_capture)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_input_capture)))
                                                 : 0ULL))))))) 
                       >> 0x20U));
        vlSelf->__Vdlyvval__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__fifoMem__v0[2U] 
            = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT____VdfgRegularize_h4bf44f78_14_13) 
                | (((4U == (0xffU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg 
                                             >> 5U)))) 
                    | ((8U == (0xffU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg 
                                                >> 5U)))) 
                       | ((0xcU == (0xffU & (IData)(
                                                    (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg 
                                                     >> 5U)))) 
                          | ((0x10U == (0xffU & (IData)(
                                                        (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg 
                                                         >> 5U)))) 
                             | ((0x14U == (0xffU & (IData)(
                                                           (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg 
                                                            >> 5U)))) 
                                | (0x18U == (0xffU 
                                             & (IData)(
                                                       (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg 
                                                        >> 5U))))))))) 
                   & (2U == (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))))
                ? 0U : 2U);
        vlSelf->__Vdlyvset__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__fifoMem__v0 = 1U;
        vlSelf->__Vdlyvdim0__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__fifoMem__v0 
            = (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__sGEnqPtr));
    }
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__22(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__22\n"); );
    // Body
    vlSelf->__Vdlyvset__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__fifoMem__v0 = 0U;
    vlSelf->__Vdlyvset__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__fifoMem__v0 = 0U;
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request_dDEQ) {
        vlSelf->__Vdlyvval__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__fifoMem__v0 
            = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT____VdfgRegularize_h4bf44f78_14_21) 
                | (((4U == (0xffU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__dDoutReg 
                                             >> 5U)))) 
                    | ((0x10U == (0xffU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__dDoutReg 
                                                   >> 5U)))) 
                       | (0x14U == (0xffU & (IData)(
                                                    (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__dDoutReg 
                                                     >> 5U)))))) 
                   & (2U == (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__dDoutReg)))))
                ? 0U : 2U);
        vlSelf->__Vdlyvset__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__fifoMem__v0 = 1U;
        vlSelf->__Vdlyvdim0__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__fifoMem__v0 
            = (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__sGEnqPtr));
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request_dDEQ) {
        vlSelf->__Vdlyvval__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__fifoMem__v0[0U] 
            = (IData)(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT____VdfgRegularize_h4bf44f78_14_13)
                        ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__r1___05Fread___05Fh2016)) 
                            << 0x31U) | (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_enable)) 
                                          << 0x30U) 
                                         | (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__r1___05Fread___05Fh2016)) 
                                             << 0x21U) 
                                            | (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_enable)) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__r1___05Fread___05Fh2016) 
                                                                   << 0x11U) 
                                                                  | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_enable) 
                                                                      << 0x10U) 
                                                                     | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__r1___05Fread___05Fh2016) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_enable))))))))))
                        : ((IData)((0x82ULL == (0x1fe3ULL 
                                                & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))
                            ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_divider)) 
                                << 0x21U) | (((QData)((IData)(
                                                              (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_src) 
                                                                << 0x1fU) 
                                                               | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_divider)))) 
                                              << 1U) 
                                             | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_src))))
                            : ((IData)((0x102ULL == 
                                        (0x1fe3ULL 
                                         & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))
                                ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter)))
                                : ((IData)((0x182ULL 
                                            == (0x1fe3ULL 
                                                & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))
                                    ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_repeated_count)) 
                                        << 0x20U) | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_repeated_count)))
                                    : ((IData)((0x202ULL 
                                                == 
                                                (0x1fe3ULL 
                                                 & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))
                                        ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_duty_cycle)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_duty_cycle)))
                                        : ((IData)(
                                                   (0x282ULL 
                                                    == 
                                                    (0x1fe3ULL 
                                                     & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))
                                            ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_period)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_period)))
                                            : ((IData)(
                                                       (0x302ULL 
                                                        == 
                                                        (0x1fe3ULL 
                                                         & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))
                                                ? (
                                                   ((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_input_capture)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_input_capture)))
                                                : 0ULL))))))));
        vlSelf->__Vdlyvval__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__fifoMem__v0[1U] 
            = (IData)((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT____VdfgRegularize_h4bf44f78_14_13)
                         ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__r1___05Fread___05Fh2016)) 
                             << 0x31U) | (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_enable)) 
                                           << 0x30U) 
                                          | (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__r1___05Fread___05Fh2016)) 
                                              << 0x21U) 
                                             | (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_enable)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__r1___05Fread___05Fh2016) 
                                                                    << 0x11U) 
                                                                   | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_enable) 
                                                                       << 0x10U) 
                                                                      | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__r1___05Fread___05Fh2016) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_enable))))))))))
                         : ((IData)((0x82ULL == (0x1fe3ULL 
                                                 & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))
                             ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_divider)) 
                                 << 0x21U) | (((QData)((IData)(
                                                               (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_src) 
                                                                 << 0x1fU) 
                                                                | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_divider)))) 
                                               << 1U) 
                                              | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_src))))
                             : ((IData)((0x102ULL == 
                                         (0x1fe3ULL 
                                          & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))
                                 ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter)) 
                                     << 0x20U) | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter)))
                                 : ((IData)((0x182ULL 
                                             == (0x1fe3ULL 
                                                 & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))
                                     ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_repeated_count)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_repeated_count)))
                                     : ((IData)((0x202ULL 
                                                 == 
                                                 (0x1fe3ULL 
                                                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))
                                         ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_duty_cycle)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_duty_cycle)))
                                         : ((IData)(
                                                    (0x282ULL 
                                                     == 
                                                     (0x1fe3ULL 
                                                      & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))
                                             ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_period)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_period)))
                                             : ((IData)(
                                                        (0x302ULL 
                                                         == 
                                                         (0x1fe3ULL 
                                                          & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))
                                                 ? 
                                                (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_input_capture)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_input_capture)))
                                                 : 0ULL))))))) 
                       >> 0x20U));
        vlSelf->__Vdlyvval__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__fifoMem__v0[2U] 
            = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT____VdfgRegularize_h4bf44f78_14_13) 
                | (((4U == (0xffU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg 
                                             >> 5U)))) 
                    | ((8U == (0xffU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg 
                                                >> 5U)))) 
                       | ((0xcU == (0xffU & (IData)(
                                                    (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg 
                                                     >> 5U)))) 
                          | ((0x10U == (0xffU & (IData)(
                                                        (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg 
                                                         >> 5U)))) 
                             | ((0x14U == (0xffU & (IData)(
                                                           (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg 
                                                            >> 5U)))) 
                                | (0x18U == (0xffU 
                                             & (IData)(
                                                       (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg 
                                                        >> 5U))))))))) 
                   & (2U == (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))))
                ? 0U : 2U);
        vlSelf->__Vdlyvset__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__fifoMem__v0 = 1U;
        vlSelf->__Vdlyvdim0__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__fifoMem__v0 
            = (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__sGEnqPtr));
    }
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__23(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__23\n"); );
    // Body
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_up_counter) 
                         & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_pwm_operation)))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 162, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_up_counter and RL_gptimer_rl_pwm_operation\n  called conflicting methods read and write of module instance\n  gptimer_rg_counter.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_down_counter) 
                          & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_up_counter)) 
                         & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21) 
                            | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_continuous_count))))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 181, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_down_counter and RL_gptimer_rl_up_counter\n  called conflicting methods read and write of module instance\n  gptimer_rg_counter.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY(((((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_down_counter) 
                             & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_up_counter)) 
                            & (0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter)) 
                           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_continuous_count)) 
                          & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode))) 
                         & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21))))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 181, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_down_counter and RL_gptimer_rl_up_counter\n  called conflicting methods read and write of module instance\n  gptimer_rg_repeated_count.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_down_counter) 
                         & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_pwm_operation)))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 181, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_down_counter and\n  RL_gptimer_rl_pwm_operation called conflicting methods read and write of\n  module instance gptimer_rg_counter.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY(((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_down_counter) 
                           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_pwm_operation)) 
                          & ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_continuous_count) 
                               & (0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter)) 
                              | (0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter)) 
                             | (0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter))) 
                         & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT___write_RL_gptimer_rl_pwm_operation_EN_gptimer_rg_count_mode_wget)))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 181, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_down_counter and\n  RL_gptimer_rl_pwm_operation called conflicting methods read and write of\n  module instance gptimer_rg_count_mode.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
                          & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_down_counter)) 
                         & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT___write_RL_gptimer_rl_down_counter_EN_gptimer_rg_counter_wget)))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 205, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_up_down_counter and\n  RL_gptimer_rl_down_counter called conflicting methods read and write of\n  module instance gptimer_rg_counter.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY(((((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
                             & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_down_counter)) 
                            & (0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter)) 
                           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_continuous_count)) 
                          & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode))) 
                         & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT___wset_RL_gptimer_rl_down_counter_EN_gptimer_wr_cntr_underflow_intr_wget)))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 205, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_up_down_counter and\n  RL_gptimer_rl_down_counter called conflicting methods read and write of\n  module instance gptimer_rg_repeated_count.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
                          & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_down_counter)) 
                         & ((0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode))))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 205, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_up_down_counter and\n  RL_gptimer_rl_down_counter called conflicting methods read and write of\n  module instance gptimer_rg_count_mode.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY((((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_down_counter)) 
                           & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode))) 
                          & (0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter)) 
                         & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT___wset_RL_gptimer_rl_down_counter_EN_gptimer_wr_cntr_underflow_intr_wget)))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 205, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_up_down_counter and\n  RL_gptimer_rl_down_counter called conflicting methods wset and wset of\n  module instance gptimer_wr_cntr_underflow_intr.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
                          & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_up_counter)) 
                         & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21) 
                            | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_continuous_count))))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 205, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_up_down_counter and\n  RL_gptimer_rl_up_counter called conflicting methods read and write of module\n  instance gptimer_rg_counter.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY(((((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
                             & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_up_counter)) 
                            & (0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter)) 
                           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_continuous_count)) 
                          & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode))) 
                         & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21))))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 205, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_up_down_counter and\n  RL_gptimer_rl_up_counter called conflicting methods read and write of module\n  instance gptimer_rg_repeated_count.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY(((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
                           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_up_counter)) 
                          & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode)) 
                         & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21))))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 205, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_up_down_counter and\n  RL_gptimer_rl_up_counter called conflicting methods wset and wset of module\n  instance gptimer_wr_cntr_overflow_intr.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
                         & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_pwm_operation)))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 205, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_up_down_counter and\n  RL_gptimer_rl_pwm_operation called conflicting methods read and write of\n  module instance gptimer_rg_counter.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
                          & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_pwm_operation)) 
                         & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT___write_RL_gptimer_rl_pwm_operation_EN_gptimer_rg_count_mode_wget)))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 205, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_up_down_counter and\n  RL_gptimer_rl_pwm_operation called conflicting methods read and write of\n  module instance gptimer_rg_count_mode.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__24(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__24\n"); );
    // Body
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_up_counter) 
                         & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_pwm_operation)))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 162, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_up_counter and RL_gptimer_rl_pwm_operation\n  called conflicting methods read and write of module instance\n  gptimer_rg_counter.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_down_counter) 
                          & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_up_counter)) 
                         & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21) 
                            | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_continuous_count))))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 181, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_down_counter and RL_gptimer_rl_up_counter\n  called conflicting methods read and write of module instance\n  gptimer_rg_counter.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY(((((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_down_counter) 
                             & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_up_counter)) 
                            & (0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter)) 
                           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_continuous_count)) 
                          & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode))) 
                         & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21))))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 181, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_down_counter and RL_gptimer_rl_up_counter\n  called conflicting methods read and write of module instance\n  gptimer_rg_repeated_count.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_down_counter) 
                         & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_pwm_operation)))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 181, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_down_counter and\n  RL_gptimer_rl_pwm_operation called conflicting methods read and write of\n  module instance gptimer_rg_counter.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY(((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_down_counter) 
                           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_pwm_operation)) 
                          & ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_continuous_count) 
                               & (0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter)) 
                              | (0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter)) 
                             | (0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter))) 
                         & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT___write_RL_gptimer_rl_pwm_operation_EN_gptimer_rg_count_mode_wget)))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 181, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_down_counter and\n  RL_gptimer_rl_pwm_operation called conflicting methods read and write of\n  module instance gptimer_rg_count_mode.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
                          & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_down_counter)) 
                         & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT___write_RL_gptimer_rl_down_counter_EN_gptimer_rg_counter_wget)))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 205, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_up_down_counter and\n  RL_gptimer_rl_down_counter called conflicting methods read and write of\n  module instance gptimer_rg_counter.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY(((((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
                             & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_down_counter)) 
                            & (0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter)) 
                           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_continuous_count)) 
                          & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode))) 
                         & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT___wset_RL_gptimer_rl_down_counter_EN_gptimer_wr_cntr_underflow_intr_wget)))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 205, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_up_down_counter and\n  RL_gptimer_rl_down_counter called conflicting methods read and write of\n  module instance gptimer_rg_repeated_count.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
                          & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_down_counter)) 
                         & ((0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode))))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 205, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_up_down_counter and\n  RL_gptimer_rl_down_counter called conflicting methods read and write of\n  module instance gptimer_rg_count_mode.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY((((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_down_counter)) 
                           & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode))) 
                          & (0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter)) 
                         & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT___wset_RL_gptimer_rl_down_counter_EN_gptimer_wr_cntr_underflow_intr_wget)))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 205, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_up_down_counter and\n  RL_gptimer_rl_down_counter called conflicting methods wset and wset of\n  module instance gptimer_wr_cntr_underflow_intr.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
                          & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_up_counter)) 
                         & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21) 
                            | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_continuous_count))))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 205, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_up_down_counter and\n  RL_gptimer_rl_up_counter called conflicting methods read and write of module\n  instance gptimer_rg_counter.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY(((((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
                             & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_up_counter)) 
                            & (0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter)) 
                           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_continuous_count)) 
                          & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode))) 
                         & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21))))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 205, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_up_down_counter and\n  RL_gptimer_rl_up_counter called conflicting methods read and write of module\n  instance gptimer_rg_repeated_count.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY(((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
                           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_up_counter)) 
                          & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode)) 
                         & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21))))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 205, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_up_down_counter and\n  RL_gptimer_rl_up_counter called conflicting methods wset and wset of module\n  instance gptimer_wr_cntr_overflow_intr.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
                         & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_pwm_operation)))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 205, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_up_down_counter and\n  RL_gptimer_rl_pwm_operation called conflicting methods read and write of\n  module instance gptimer_rg_counter.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset_OUT_RST) {
        if (VL_UNLIKELY((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
                          & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_pwm_operation)) 
                         & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT___write_RL_gptimer_rl_pwm_operation_EN_gptimer_rg_count_mode_wget)))) {
            VL_WRITEF_NX("Error: \"devices/gptimer//gptimer.bsv\", line 205, column 22: (R0002)\n  Conflict-free rules RL_gptimer_rl_up_down_counter and\n  RL_gptimer_rl_pwm_operation called conflicting methods read and write of\n  module instance gptimer_rg_count_mode.\n\n",0);
            Verilated::runFlushCallbacks();
        }
    }
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__25(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__25\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_bs_chain_tdi = 0U;
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_debug_tdi = 0U;
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__rg_dmireset 
        = ((IData)(vlSelf->mkTbSoc__DOT__trst__DOT__rst) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__rg_dmireset_D_IN));
    if (vlSelf->mkTbSoc__DOT__trst__DOT__rst) {
        if (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__bypass_sr_EN) {
            vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__bypass_sr 
                = vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__bypass_sr_D_IN;
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__idcode_sr_EN) {
            vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__idcode_sr 
                = vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__idcode_sr_D_IN;
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmistat_EN) {
            vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmistat 
                = vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmistat_D_IN;
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__capture_repsonse_from_dm_EN) {
            vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__capture_repsonse_from_dm 
                = vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__capture_repsonse_from_dm_D_IN;
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM_ENQ) {
            vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM_D_OUT 
                = vlSelf->mkTbSoc__DOT__soc__DOT__sync_response_from_dm__DOT__syncFIFO1Data;
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_status_EN) {
            vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_status 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmireset_generated_whas)
                    ? 0U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM__DOT__empty_reg)
                             ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmistat_D_IN)
                             : 3U));
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__rg_dmihardreset_EN) {
            vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__rg_dmihardreset 
                = ((0U != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
                   & (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dtmcontrol_shiftreg 
                      >> 0x11U));
        }
        if (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_7) 
             & (0x10U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction)))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dtmcontrol_shiftreg 
                = vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dtmcontrol_shiftreg_D_IN;
        }
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__bypass_sr = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__idcode_sr = 0x100039d3U;
        vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmistat = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__capture_repsonse_from_dm = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM_D_OUT = 0ULL;
        vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_status = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__rg_dmihardreset = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dtmcontrol_shiftreg = 0x7061U;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmistat_D_IN 
        = (3U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM_D_OUT) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_status)));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__26(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__26\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_new_clock__DOT__current_clk)))) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_new_clock__DOT__current_gate 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_new_clock__DOT__new_gate;
    }
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__27(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__27\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_new_clock__DOT__current_clk)))) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_new_clock__DOT__current_gate 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_new_clock__DOT__new_gate;
    }
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__28(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__28\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->mkTbSoc__DOT__tck_clk__DOT__current_clk)))) {
        vlSelf->mkTbSoc__DOT__tck_clk__DOT__current_gate 
            = vlSelf->mkTbSoc__DOT__tck_clk__DOT__new_gate;
    }
    vlSelf->mkTbSoc__DOT__tck_clk_CLK_OUT = ((IData)(vlSelf->mkTbSoc__DOT__tck_clk__DOT__current_clk) 
                                             & (IData)(vlSelf->mkTbSoc__DOT__tck_clk__DOT__current_gate));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__30(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__30\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_new_clock__DOT__CLK_VAL_OUT 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__async_reset_OUT_RST) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_clk));
    if ((1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__async_reset_OUT_RST)))) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_new_clock__DOT__new_gate = 1U;
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__async_reset_OUT_RST) {
        if ((0U != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_rg_divisor))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_clk 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_rg_counter) 
                   <= (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_rg_half_divisor));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_rg_counter 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_rg_counter_D_IN;
        }
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_rg_half_divisor 
            = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clock_divisor_sync_dD_OUT), 1U));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_rg_divisor 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clock_divisor_sync_dD_OUT;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_clk = 1U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_rg_half_divisor = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_rg_counter = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_rg_divisor = 0U;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_rg_counter_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_rg_counter) 
            == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_rg_divisor))
            ? 0U : (0xffffU & ((IData)(1U) + (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_rg_counter))));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__31(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__31\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_new_clock__DOT__CLK_VAL_OUT 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__async_reset_OUT_RST) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_clk));
    if ((1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__async_reset_OUT_RST)))) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_new_clock__DOT__new_gate = 1U;
    }
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__async_reset_OUT_RST) {
        if ((0U != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_rg_divisor))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_clk 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_rg_counter) 
                   <= (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_rg_half_divisor));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_rg_counter 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_rg_counter_D_IN;
        }
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_rg_half_divisor 
            = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clock_divisor_sync_dD_OUT), 1U));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_rg_divisor 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clock_divisor_sync_dD_OUT;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_clk = 1U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_rg_half_divisor = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_rg_counter = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_rg_divisor = 0U;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_rg_counter_D_IN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_rg_counter) 
            == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_rg_divisor))
            ? 0U : (0xffffU & ((IData)(1U) + (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_rg_counter))));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__32(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__32\n"); );
    // Init
    CData/*3:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGrayP__8__Vfuncout;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGrayP__8__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGrayP__8__grayPin;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGrayP__8__grayPin = 0;
    CData/*2:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__9__Vfuncout;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__9__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__9__grayin;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__9__grayin = 0;
    CData/*0:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__9__parity;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__9__parity = 0;
    CData/*3:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGrayP__20__Vfuncout;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGrayP__20__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGrayP__20__grayPin;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGrayP__20__grayPin = 0;
    CData/*2:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__21__Vfuncout;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__21__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__21__grayin;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__21__grayin = 0;
    CData/*0:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__21__parity;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__21__parity = 0;
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__sync_gpt_out__DOT__sSyncReg 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset_OUT_RST) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__sync_gpt_out_sD_IN));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset_OUT_RST) {
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request_dDEQ) {
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGrayP__20__grayPin 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__sGEnqPtr1;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__g 
                = (7U & ((IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGrayP__20__grayPin) 
                         >> 1U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__p 
                = (1U & (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGrayP__20__grayPin));
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__21__parity 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__p;
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__21__grayin 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__g;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips 
                = ((6U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips)) 
                   | (1U & (~ (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__21__parity))));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT____Vlvbound_h5b28c031__0 
                = ((IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__21__parity) 
                   & (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__21__grayin));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips 
                = ((5U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips)) 
                   | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT____Vlvbound_h5b28c031__0) 
                      << 1U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__tempshift 
                = (7U & VL_SHIFTL_III(3,3,32, (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__21__grayin), 2U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips 
                = ((3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips)) 
                   | (((IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__21__parity) 
                       & (~ (IData)((0U != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__tempshift))))) 
                      << 2U));
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__21__Vfuncout 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips) 
                   ^ (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__21__grayin));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__i 
                = __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__21__Vfuncout;
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGrayP__20__Vfuncout 
                = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__i) 
                    << 1U) | (1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__p))));
            vlSelf->__Vdly__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__sGEnqPtr1 
                = __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGrayP__20__Vfuncout;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__sGEnqPtr 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__sGEnqPtr1;
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_repeated_count_EN) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_repeated_count 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_repeated_count_D_IN;
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_divider_EN) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_divider 
                = (0xffffU & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                              >> 9U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_src 
                = (1U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                         >> 8U));
        }
        if (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_2) 
             | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_duty_cycle_write_1___05FSEL_1))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_duty_cycle 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_duty_cycle_write_1___05FSEL_1)
                    ? ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[1U] 
                        << 0x18U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                     >> 8U)) : 0U);
        }
        if (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_2) 
             | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_period_write_1___05FSEL_1))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_period 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_period_write_1___05FSEL_1)
                    ? ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[1U] 
                        << 0x18U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                     >> 8U)) : 0U);
        }
        if (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_2) 
             | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_capture_input) 
                 == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__sync_gpt_in__DOT__dSyncReg2)) 
                & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_prev_input) 
                    != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__sync_gpt_in__DOT__dSyncReg2)) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_enable))))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_input_capture 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_2)
                    ? 0U : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter);
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request_dDEQ) {
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGrayP__8__grayPin 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__sGEnqPtr1;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__g 
                = (7U & ((IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGrayP__8__grayPin) 
                         >> 1U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__p 
                = (1U & (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGrayP__8__grayPin));
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__9__parity 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__p;
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__9__grayin 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__g;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips 
                = ((6U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips)) 
                   | (1U & (~ (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__9__parity))));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT____Vlvbound_h5b28c031__0 
                = ((IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__9__parity) 
                   & (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__9__grayin));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips 
                = ((5U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips)) 
                   | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT____Vlvbound_h5b28c031__0) 
                      << 1U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__tempshift 
                = (7U & VL_SHIFTL_III(3,3,32, (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__9__grayin), 2U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips 
                = ((3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips)) 
                   | (((IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__9__parity) 
                       & (~ (IData)((0U != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__tempshift))))) 
                      << 2U));
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__9__Vfuncout 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips) 
                   ^ (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__9__grayin));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__i 
                = __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__9__Vfuncout;
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGrayP__8__Vfuncout 
                = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__i) 
                    << 1U) | (1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__p))));
            vlSelf->__Vdly__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__sGEnqPtr1 
                = __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGrayP__8__Vfuncout;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__sGEnqPtr 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__sGEnqPtr1;
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode_EN) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode_D_IN;
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_capture_input_EN) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_continuous_count 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                   & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                      >> 0xeU));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_capture_input 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                   & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                      >> 0x17U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_enable 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                   & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                      >> 8U));
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter_EN) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter_D_IN;
        }
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__sGEnqPtr = 0U;
        vlSelf->__Vdly__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__sGEnqPtr1 = 3U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_repeated_count = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_divider = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_src = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_duty_cycle = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_period = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_input_capture = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__sGEnqPtr = 0U;
        vlSelf->__Vdly__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__sGEnqPtr1 = 3U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode = 1U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_continuous_count = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_capture_input = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_enable = 0U;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__sGEnqPtr1 
        = vlSelf->__Vdly__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__sGEnqPtr1;
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__sGEnqPtr1 
        = vlSelf->__Vdly__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__sGEnqPtr1;
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_prev_input 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset_OUT_RST) 
           && ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_2)) 
               & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__sync_gpt_in__DOT__dSyncReg2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_gpt_reset) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_reset));
    if ((0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter)) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_counter_write_1___05FVAL_3 
            = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode)
                ? (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_period 
                   - (IData)(2U)) : (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_period 
                                     - (IData)(1U)));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT___wset_RL_gptimer_rl_down_counter_EN_gptimer_wr_cntr_underflow_intr_wget 
            = (1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode)));
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_counter_write_1___05FVAL_3 
            = (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter 
               - (IData)(1U));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT___wset_RL_gptimer_rl_down_counter_EN_gptimer_wr_cntr_underflow_intr_wget = 0U;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT___write_RL_gptimer_rl_down_counter_EN_gptimer_rg_counter_wget 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_continuous_count) 
              | (0U != vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21 
        = (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter 
           < (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_period 
              - (IData)(1U)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_pwm_operation 
        = ((0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_mode)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_enable));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_up_counter 
        = ((1U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_mode)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_enable));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_down_counter 
        = ((2U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_mode)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_enable));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter 
        = ((3U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_mode)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_enable));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT____VdfgRegularize_h4bf44f78_14_22 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT___write_RL_gptimer_rl_pwm_operation_EN_gptimer_rg_count_mode_wget 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21)) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_counter_write_1___05FSEL_4 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_up_counter) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21) 
              | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_continuous_count)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT____VdfgRegularize_h4bf44f78_14_23 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_up_counter));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_counter_write_1___05FSEL_3 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_down_counter) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT___write_RL_gptimer_rl_down_counter_EN_gptimer_rg_counter_wget));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT____VdfgRegularize_h4bf44f78_14_3 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_down_counter) 
           & (0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_counter_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT___write_RL_gptimer_rl_down_counter_EN_gptimer_rg_counter_wget));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT____VdfgRegularize_h4bf44f78_14_25 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT___wset_RL_gptimer_rl_down_counter_EN_gptimer_wr_cntr_underflow_intr_wget));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode_3_AND_NOT_gptimer_rg_cou_ETC___05F_d66 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT____VdfgRegularize_h4bf44f78_14_22) 
           | ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode)) 
              & ((0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter) 
                 & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_continuous_count))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__v___05Fh2836 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT___write_RL_gptimer_rl_pwm_operation_EN_gptimer_rg_count_mode_wget)
            ? 0U : ((IData)(1U) + vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT____VdfgRegularize_h4bf44f78_14_24 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT____VdfgRegularize_h4bf44f78_14_3));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_counter_write_1___05FSEL_4) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_counter_write_1___05FSEL_3) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_counter_write_1___05FSEL_2) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_pwm_operation) 
                    | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_gpt_reset)))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_count_mode_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode_3_AND_NOT_gptimer_rg_cou_ETC___05F_d66));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__sync_gpt_out_sD_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_output_en) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_pwm_operation) 
              & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__v___05Fh2836 
                 < vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_duty_cycle)));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_gpt_reset) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_repeated_count_D_IN = 0U;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter_D_IN 
            = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_counter_write_1___05FSEL_2)
                ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode)
                    ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21)
                        ? ((IData)(1U) + vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter)
                        : (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter 
                           - (IData)(1U))) : ((0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter)
                                               ? ((IData)(1U) 
                                                  + vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter)
                                               : (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter 
                                                  - (IData)(1U))))
                : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_counter_write_1___05FSEL_3)
                    ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_counter_write_1___05FVAL_3
                    : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_counter_write_1___05FSEL_4)
                        ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21)
                            ? ((IData)(1U) + vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter)
                            : 0U) : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_pwm_operation)
                                      ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__v___05Fh2836
                                      : 0U))));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_repeated_count_D_IN 
            = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT____VdfgRegularize_h4bf44f78_14_25) 
                & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_continuous_count))
                ? ((IData)(1U) + vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_repeated_count)
                : (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT____VdfgRegularize_h4bf44f78_14_24) 
                    & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_continuous_count))
                    ? ((IData)(1U) + vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_repeated_count)
                    : (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT____VdfgRegularize_h4bf44f78_14_23) 
                        & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_continuous_count))
                        ? ((IData)(1U) + vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_repeated_count)
                        : 0U)));
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__IF_NOT_gptimer_rg_counter_8_ULT_gptimer_rg_per_ETC___05F_d29 
        = (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__v___05Fh2836 
           == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_duty_cycle);
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_repeated_count_EN 
        = ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT____VdfgRegularize_h4bf44f78_14_25) 
             | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT____VdfgRegularize_h4bf44f78_14_23) 
                | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT____VdfgRegularize_h4bf44f78_14_24))) 
            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_continuous_count)) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_gpt_reset));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_gpt_reset) 
           || ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_count_mode_write_1___05FSEL_2) 
               && (1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode)))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode_EN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_pwm_operation) 
            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT___write_RL_gptimer_rl_pwm_operation_EN_gptimer_rg_count_mode_wget)) 
           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT____VdfgRegularize_h4bf44f78_14_3) 
               & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_count_mode)) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_count_mode_write_1___05FSEL_2) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_gpt_reset))));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__33(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__33\n"); );
    // Init
    CData/*3:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGrayP__28__Vfuncout;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGrayP__28__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGrayP__28__grayPin;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGrayP__28__grayPin = 0;
    CData/*2:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__29__Vfuncout;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__29__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__29__grayin;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__29__grayin = 0;
    CData/*0:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__29__parity;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__29__parity = 0;
    CData/*3:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGrayP__40__Vfuncout;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGrayP__40__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGrayP__40__grayPin;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGrayP__40__grayPin = 0;
    CData/*2:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__41__Vfuncout;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__41__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__41__grayin;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__41__grayin = 0;
    CData/*0:0*/ __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__41__parity;
    __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__41__parity = 0;
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__sync_gpt_out__DOT__sSyncReg 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset_OUT_RST) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__sync_gpt_out_sD_IN));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset_OUT_RST) {
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request_dDEQ) {
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGrayP__40__grayPin 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__sGEnqPtr1;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__g 
                = (7U & ((IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGrayP__40__grayPin) 
                         >> 1U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__p 
                = (1U & (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGrayP__40__grayPin));
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__41__parity 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__p;
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__41__grayin 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__g;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips 
                = ((6U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips)) 
                   | (1U & (~ (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__41__parity))));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT____Vlvbound_h5b28c031__0 
                = ((IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__41__parity) 
                   & (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__41__grayin));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips 
                = ((5U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips)) 
                   | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT____Vlvbound_h5b28c031__0) 
                      << 1U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__tempshift 
                = (7U & VL_SHIFTL_III(3,3,32, (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__41__grayin), 2U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips 
                = ((3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips)) 
                   | (((IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__41__parity) 
                       & (~ (IData)((0U != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__tempshift))))) 
                      << 2U));
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__41__Vfuncout 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips) 
                   ^ (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__41__grayin));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__i 
                = __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__41__Vfuncout;
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGrayP__40__Vfuncout 
                = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__i) 
                    << 1U) | (1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__p))));
            vlSelf->__Vdly__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__sGEnqPtr1 
                = __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGrayP__40__Vfuncout;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__sGEnqPtr 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__sGEnqPtr1;
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_repeated_count_EN) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_repeated_count 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_repeated_count_D_IN;
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_divider_EN) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_divider 
                = (0xffffU & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                              >> 9U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_src 
                = (1U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                         >> 8U));
        }
        if (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_2) 
             | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_duty_cycle_write_1___05FSEL_1))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_duty_cycle 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_duty_cycle_write_1___05FSEL_1)
                    ? ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[1U] 
                        << 0x18U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                     >> 8U)) : 0U);
        }
        if (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_2) 
             | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_period_write_1___05FSEL_1))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_period 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_period_write_1___05FSEL_1)
                    ? ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[1U] 
                        << 0x18U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                     >> 8U)) : 0U);
        }
        if (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_2) 
             | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_capture_input) 
                 == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__sync_gpt_in__DOT__dSyncReg2)) 
                & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_prev_input) 
                    != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__sync_gpt_in__DOT__dSyncReg2)) 
                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_enable))))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_input_capture 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_2)
                    ? 0U : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter);
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request_dDEQ) {
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGrayP__28__grayPin 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__sGEnqPtr1;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__g 
                = (7U & ((IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGrayP__28__grayPin) 
                         >> 1U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__p 
                = (1U & (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGrayP__28__grayPin));
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__29__parity 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__p;
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__29__grayin 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__g;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips 
                = ((6U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips)) 
                   | (1U & (~ (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__29__parity))));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT____Vlvbound_h5b28c031__0 
                = ((IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__29__parity) 
                   & (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__29__grayin));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips 
                = ((5U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips)) 
                   | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT____Vlvbound_h5b28c031__0) 
                      << 1U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__tempshift 
                = (7U & VL_SHIFTL_III(3,3,32, (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__29__grayin), 2U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips 
                = ((3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips)) 
                   | (((IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__29__parity) 
                       & (~ (IData)((0U != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__tempshift))))) 
                      << 2U));
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__29__Vfuncout 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__flips) 
                   ^ (IData)(__Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__29__grayin));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__i 
                = __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__29__Vfuncout;
            __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGrayP__28__Vfuncout 
                = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__i) 
                    << 1U) | (1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGrayP__Vstatic__incrGrayPBlock__DOT__p))));
            vlSelf->__Vdly__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__sGEnqPtr1 
                = __Vfunc_mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGrayP__28__Vfuncout;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__sGEnqPtr 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__sGEnqPtr1;
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode_EN) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode_D_IN;
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_capture_input_EN) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_continuous_count 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                   & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                      >> 0xeU));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_capture_input 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                   & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                      >> 0x17U));
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_enable 
                = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                   & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                      >> 8U));
        }
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter_EN) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter_D_IN;
        }
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__sGEnqPtr = 0U;
        vlSelf->__Vdly__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__sGEnqPtr1 = 3U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_repeated_count = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_divider = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_src = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_duty_cycle = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_period = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_input_capture = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__sGEnqPtr = 0U;
        vlSelf->__Vdly__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__sGEnqPtr1 = 3U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode = 1U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_continuous_count = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_capture_input = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_enable = 0U;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__sGEnqPtr1 
        = vlSelf->__Vdly__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__sGEnqPtr1;
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__sGEnqPtr1 
        = vlSelf->__Vdly__mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__sGEnqPtr1;
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_prev_input 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset_OUT_RST) 
           && ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_2)) 
               & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__sync_gpt_in__DOT__dSyncReg2)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_gpt_reset) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_reset));
    if ((0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter)) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_counter_write_1___05FVAL_3 
            = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode)
                ? (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_period 
                   - (IData)(2U)) : (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_period 
                                     - (IData)(1U)));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT___wset_RL_gptimer_rl_down_counter_EN_gptimer_wr_cntr_underflow_intr_wget 
            = (1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode)));
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_counter_write_1___05FVAL_3 
            = (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter 
               - (IData)(1U));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT___wset_RL_gptimer_rl_down_counter_EN_gptimer_wr_cntr_underflow_intr_wget = 0U;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT___write_RL_gptimer_rl_down_counter_EN_gptimer_rg_counter_wget 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_continuous_count) 
              | (0U != vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21 
        = (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter 
           < (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_period 
              - (IData)(1U)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_pwm_operation 
        = ((0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_mode)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_enable));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_up_counter 
        = ((1U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_mode)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_enable));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_down_counter 
        = ((2U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_mode)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_enable));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter 
        = ((3U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_mode)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_enable));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT____VdfgRegularize_h4bf44f78_14_22 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT___write_RL_gptimer_rl_pwm_operation_EN_gptimer_rg_count_mode_wget 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21)) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_counter_write_1___05FSEL_4 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_up_counter) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21) 
              | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_continuous_count)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT____VdfgRegularize_h4bf44f78_14_23 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_up_counter));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_counter_write_1___05FSEL_3 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_down_counter) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT___write_RL_gptimer_rl_down_counter_EN_gptimer_rg_counter_wget));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT____VdfgRegularize_h4bf44f78_14_3 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_down_counter) 
           & (0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_counter_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT___write_RL_gptimer_rl_down_counter_EN_gptimer_rg_counter_wget));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT____VdfgRegularize_h4bf44f78_14_25 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT___wset_RL_gptimer_rl_down_counter_EN_gptimer_wr_cntr_underflow_intr_wget));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode_3_AND_NOT_gptimer_rg_cou_ETC___05F_d66 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT____VdfgRegularize_h4bf44f78_14_22) 
           | ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode)) 
              & ((0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter) 
                 & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_continuous_count))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__v___05Fh2836 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT___write_RL_gptimer_rl_pwm_operation_EN_gptimer_rg_count_mode_wget)
            ? 0U : ((IData)(1U) + vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT____VdfgRegularize_h4bf44f78_14_24 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT____VdfgRegularize_h4bf44f78_14_3));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter_EN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_counter_write_1___05FSEL_4) 
           | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_counter_write_1___05FSEL_3) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_counter_write_1___05FSEL_2) 
                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_pwm_operation) 
                    | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_gpt_reset)))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_count_mode_write_1___05FSEL_2 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_up_down_counter) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode_3_AND_NOT_gptimer_rg_cou_ETC___05F_d66));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__sync_gpt_out_sD_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_output_en) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_pwm_operation) 
              & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__v___05Fh2836 
                 < vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_duty_cycle)));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_gpt_reset) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter_D_IN = 0U;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_repeated_count_D_IN = 0U;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter_D_IN 
            = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_counter_write_1___05FSEL_2)
                ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode)
                    ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21)
                        ? ((IData)(1U) + vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter)
                        : (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter 
                           - (IData)(1U))) : ((0U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter)
                                               ? ((IData)(1U) 
                                                  + vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter)
                                               : (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter 
                                                  - (IData)(1U))))
                : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_counter_write_1___05FSEL_3)
                    ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_counter_write_1___05FVAL_3
                    : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_counter_write_1___05FSEL_4)
                        ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter_8_ULT_gptimer_rg_period_9_M_ETC___05F_d21)
                            ? ((IData)(1U) + vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter)
                            : 0U) : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_pwm_operation)
                                      ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__v___05Fh2836
                                      : 0U))));
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_repeated_count_D_IN 
            = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT____VdfgRegularize_h4bf44f78_14_25) 
                & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_continuous_count))
                ? ((IData)(1U) + vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_repeated_count)
                : (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT____VdfgRegularize_h4bf44f78_14_24) 
                    & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_continuous_count))
                    ? ((IData)(1U) + vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_repeated_count)
                    : (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT____VdfgRegularize_h4bf44f78_14_23) 
                        & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_continuous_count))
                        ? ((IData)(1U) + vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_repeated_count)
                        : 0U)));
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__IF_NOT_gptimer_rg_counter_8_ULT_gptimer_rg_per_ETC___05F_d29 
        = (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__v___05Fh2836 
           == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_duty_cycle);
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_repeated_count_EN 
        = ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT____VdfgRegularize_h4bf44f78_14_25) 
             | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT____VdfgRegularize_h4bf44f78_14_23) 
                | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT____VdfgRegularize_h4bf44f78_14_24))) 
            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_continuous_count)) 
           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_gpt_reset));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_gpt_reset) 
           || ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_count_mode_write_1___05FSEL_2) 
               && (1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode)))));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode_EN 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_pwm_operation) 
            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT___write_RL_gptimer_rl_pwm_operation_EN_gptimer_rg_count_mode_wget)) 
           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT____VdfgRegularize_h4bf44f78_14_3) 
               & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_count_mode)) 
              | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_count_mode_write_1___05FSEL_2) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_gpt_reset))));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_sequent__TOP__34(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_sequent__TOP__34\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__i2c0_isint 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__i2c0__DOT__i2c_user_pin)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__i2c0__DOT__i2c_user_eni));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[0U] 
        = (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data__DOT__v_data_0_ram_single_0__DOT__out_reg);
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[1U] 
        = (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data__DOT__v_data_0_ram_single_0__DOT__out_reg 
                   >> 0x20U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[2U] 
        = (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data__DOT__v_data_0_ram_single_1__DOT__out_reg);
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[3U] 
        = (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data__DOT__v_data_0_ram_single_1__DOT__out_reg 
                   >> 0x20U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[4U] 
        = (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data__DOT__v_data_0_ram_single_2__DOT__out_reg);
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[5U] 
        = (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data__DOT__v_data_0_ram_single_2__DOT__out_reg 
                   >> 0x20U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[6U] 
        = (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data__DOT__v_data_0_ram_single_3__DOT__out_reg);
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[7U] 
        = (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data__DOT__v_data_0_ram_single_3__DOT__out_reg 
                   >> 0x20U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[8U] 
        = (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data__DOT__v_data_0_ram_single_4__DOT__out_reg);
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[9U] 
        = (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data__DOT__v_data_0_ram_single_4__DOT__out_reg 
                   >> 0x20U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[0xaU] 
        = (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data__DOT__v_data_0_ram_single_5__DOT__out_reg);
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[0xbU] 
        = (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data__DOT__v_data_0_ram_single_5__DOT__out_reg 
                   >> 0x20U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[0xcU] 
        = (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data__DOT__v_data_0_ram_single_6__DOT__out_reg);
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[0xdU] 
        = (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data__DOT__v_data_0_ram_single_6__DOT__out_reg 
                   >> 0x20U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[0xeU] 
        = (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data__DOT__v_data_0_ram_single_7__DOT__out_reg);
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[0xfU] 
        = (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data__DOT__v_data_0_ram_single_7__DOT__out_reg 
                   >> 0x20U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__x_mv_release_info_address___05Fh19164 
        = ((2U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__rg_fbhead))
            ? ((1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__rg_fbhead))
                ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__v_fb_addr_3
                : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__v_fb_addr_2)
            : ((1U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__rg_fbhead))
                ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__v_fb_addr_1
                : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__v_fb_addr_0));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore_mv_stop_timer 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp2_rg_dcsr_stoptime_warl) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__rg_debug_mode));
    if (vlSelf->mkTbSoc__DOT__eth0_s_xactor_f_rd_addr__DOT__empty_reg) {
        vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__DOA_R 
            = ((0xffffffffffffff00ULL & vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__DOA_R) 
               | (IData)((IData)((0xffU & (IData)(vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM
                                                  [
                                                  (0xfffU 
                                                   & (((IData)(
                                                               (vlSelf->mkTbSoc__DOT__eth0_s_xactor_f_rd_addr__DOT__data0_reg 
                                                                >> 5U)) 
                                                       - (IData)(0x44000U)) 
                                                      >> 3U))])))));
        vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__DOA_R 
            = ((0xffffffffffff00ffULL & vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__DOA_R) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM
                                                    [
                                                    (0xfffU 
                                                     & (((IData)(
                                                                 (vlSelf->mkTbSoc__DOT__eth0_s_xactor_f_rd_addr__DOT__data0_reg 
                                                                  >> 5U)) 
                                                         - (IData)(0x44000U)) 
                                                        >> 3U))] 
                                                    >> 8U))))) 
                  << 8U));
        vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__DOA_R 
            = ((0xffffffffff00ffffULL & vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__DOA_R) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM
                                                    [
                                                    (0xfffU 
                                                     & (((IData)(
                                                                 (vlSelf->mkTbSoc__DOT__eth0_s_xactor_f_rd_addr__DOT__data0_reg 
                                                                  >> 5U)) 
                                                         - (IData)(0x44000U)) 
                                                        >> 3U))] 
                                                    >> 0x10U))))) 
                  << 0x10U));
        vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__DOA_R 
            = ((0xffffffff00ffffffULL & vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__DOA_R) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM
                                                    [
                                                    (0xfffU 
                                                     & (((IData)(
                                                                 (vlSelf->mkTbSoc__DOT__eth0_s_xactor_f_rd_addr__DOT__data0_reg 
                                                                  >> 5U)) 
                                                         - (IData)(0x44000U)) 
                                                        >> 3U))] 
                                                    >> 0x18U))))) 
                  << 0x18U));
        vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__DOA_R 
            = ((0xffffff00ffffffffULL & vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__DOA_R) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM
                                                    [
                                                    (0xfffU 
                                                     & (((IData)(
                                                                 (vlSelf->mkTbSoc__DOT__eth0_s_xactor_f_rd_addr__DOT__data0_reg 
                                                                  >> 5U)) 
                                                         - (IData)(0x44000U)) 
                                                        >> 3U))] 
                                                    >> 0x20U))))) 
                  << 0x20U));
        vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__DOA_R 
            = ((0xffff00ffffffffffULL & vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__DOA_R) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM
                                                    [
                                                    (0xfffU 
                                                     & (((IData)(
                                                                 (vlSelf->mkTbSoc__DOT__eth0_s_xactor_f_rd_addr__DOT__data0_reg 
                                                                  >> 5U)) 
                                                         - (IData)(0x44000U)) 
                                                        >> 3U))] 
                                                    >> 0x28U))))) 
                  << 0x28U));
        vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__DOA_R 
            = ((0xff00ffffffffffffULL & vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__DOA_R) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM
                                                    [
                                                    (0xfffU 
                                                     & (((IData)(
                                                                 (vlSelf->mkTbSoc__DOT__eth0_s_xactor_f_rd_addr__DOT__data0_reg 
                                                                  >> 5U)) 
                                                         - (IData)(0x44000U)) 
                                                        >> 3U))] 
                                                    >> 0x30U))))) 
                  << 0x30U));
        vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__DOA_R 
            = ((0xffffffffffffffULL & vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__DOA_R) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM
                                                    [
                                                    (0xfffU 
                                                     & (((IData)(
                                                                 (vlSelf->mkTbSoc__DOT__eth0_s_xactor_f_rd_addr__DOT__data0_reg 
                                                                  >> 5U)) 
                                                         - (IData)(0x44000U)) 
                                                        >> 3U))] 
                                                    >> 0x38U))))) 
                  << 0x38U));
    }
    if (vlSelf->RST_N) {
        if (vlSelf->mkTbSoc__DOT__uart1_uart_error_status_register_EN) {
            vlSelf->mkTbSoc__DOT__uart1_uart_fifoRecv_countReg 
                = vlSelf->mkTbSoc__DOT__uart1_uart_fifoRecv_countReg_D_IN;
        }
        if (((IData)(vlSelf->mkTbSoc__DOT__uart0_uart_error_status_register_EN) 
             != (IData)(vlSelf->mkTbSoc__DOT__uart0_uart_fifoRecv_DEQ))) {
            vlSelf->mkTbSoc__DOT__uart0_uart_fifoRecv_countReg 
                = vlSelf->mkTbSoc__DOT__uart0_uart_fifoRecv_countReg_D_IN;
        }
    } else {
        vlSelf->mkTbSoc__DOT__uart1_uart_fifoRecv_countReg = 0U;
        vlSelf->mkTbSoc__DOT__uart0_uart_fifoRecv_countReg = 0U;
    }
    if (vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) {
        if (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__MUX_rg_initialize_write_1___05FSEL_1) 
             | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu_EN_mav_prediction_response) 
                & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_fence)))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_initialize 
                = (1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__MUX_rg_initialize_write_1___05FSEL_1)));
        }
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_initialize = 0U;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info___05F75_BITS_13_TO_8___05FETC___05F_d1409 
        = ((0x3fU & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__x_mv_release_info_address___05Fh19164 
                     >> 6U)) == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_recent_req));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U] 
        = ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__x_mv_release_info_address___05Fh19164 
            << 2U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__x___05Fh19896) 
                       << 1U) | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__x___05Fh19915)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[1U] 
        = ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__x_mv_release_info_address___05Fh19164 
            >> 0x1eU) | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19427) 
                         << 2U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[2U] 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19427) 
            >> 0x1eU) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19427 
                                  >> 0x20U)) << 2U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[3U] 
        = (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19427 
                     >> 0x20U)) >> 0x1eU) | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19398) 
                                             << 2U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[4U] 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19398) 
            >> 0x1eU) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19398 
                                  >> 0x20U)) << 2U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[5U] 
        = (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19398 
                     >> 0x20U)) >> 0x1eU) | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19369) 
                                             << 2U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[6U] 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19369) 
            >> 0x1eU) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19369 
                                  >> 0x20U)) << 2U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[7U] 
        = (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19369 
                     >> 0x20U)) >> 0x1eU) | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19340) 
                                             << 2U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[8U] 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19340) 
            >> 0x1eU) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19340 
                                  >> 0x20U)) << 2U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[9U] 
        = (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19340 
                     >> 0x20U)) >> 0x1eU) | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19311) 
                                             << 2U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0xaU] 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19311) 
            >> 0x1eU) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19311 
                                  >> 0x20U)) << 2U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0xbU] 
        = (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19311 
                     >> 0x20U)) >> 0x1eU) | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19282) 
                                             << 2U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0xcU] 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19282) 
            >> 0x1eU) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19282 
                                  >> 0x20U)) << 2U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0xdU] 
        = (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19282 
                     >> 0x20U)) >> 0x1eU) | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19253) 
                                             << 2U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0xeU] 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19253) 
            >> 0x1eU) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19253 
                                  >> 0x20U)) << 2U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0xfU] 
        = (((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19253 
                     >> 0x20U)) >> 0x1eU) | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19224) 
                                             << 2U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0x10U] 
        = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19224) 
            >> 0x1eU) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19224 
                                  >> 0x20U)) << 2U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0x11U] 
        = ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__spliced_bits___05Fh19224 
                    >> 0x20U)) >> 0x1eU);
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_EN_ma_request) {
        if ((1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_ma_request_read_write)))) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_tag__DOT__v_tags_0_ram_single_0__DOT__out_reg 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_tag__DOT__v_tags_0_ram_single_0__DOT__ram
                [vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_tag_ma_request_index];
        }
    }
    if (vlSelf->__Vdlyvset__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v0) {
        vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM[vlSelf->__Vdlyvdim0__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v0] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v0))) 
                & vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM
                [vlSelf->__Vdlyvdim0__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v0]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v0)) 
                  << (IData)(vlSelf->__Vdlyvlsb__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v0)));
    }
    if (vlSelf->__Vdlyvset__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v1) {
        vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM[vlSelf->__Vdlyvdim0__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v1] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v1))) 
                & vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM
                [vlSelf->__Vdlyvdim0__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v1]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v1)) 
                  << (IData)(vlSelf->__Vdlyvlsb__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v1)));
    }
    if (vlSelf->__Vdlyvset__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v2) {
        vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM[vlSelf->__Vdlyvdim0__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v2] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v2))) 
                & vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM
                [vlSelf->__Vdlyvdim0__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v2]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v2)) 
                  << (IData)(vlSelf->__Vdlyvlsb__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v2)));
    }
    if (vlSelf->__Vdlyvset__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v3) {
        vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM[vlSelf->__Vdlyvdim0__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v3] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v3))) 
                & vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM
                [vlSelf->__Vdlyvdim0__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v3]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v3)) 
                  << (IData)(vlSelf->__Vdlyvlsb__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v3)));
    }
    if (vlSelf->__Vdlyvset__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v4) {
        vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM[vlSelf->__Vdlyvdim0__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v4] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v4))) 
                & vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM
                [vlSelf->__Vdlyvdim0__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v4]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v4)) 
                  << (IData)(vlSelf->__Vdlyvlsb__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v4)));
    }
    if (vlSelf->__Vdlyvset__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v5) {
        vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM[vlSelf->__Vdlyvdim0__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v5] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v5))) 
                & vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM
                [vlSelf->__Vdlyvdim0__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v5]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v5)) 
                  << (IData)(vlSelf->__Vdlyvlsb__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v5)));
    }
    if (vlSelf->__Vdlyvset__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v6) {
        vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM[vlSelf->__Vdlyvdim0__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v6] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v6))) 
                & vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM
                [vlSelf->__Vdlyvdim0__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v6]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v6)) 
                  << (IData)(vlSelf->__Vdlyvlsb__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v6)));
    }
    if (vlSelf->__Vdlyvset__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v7) {
        vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM[vlSelf->__Vdlyvdim0__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v7] 
            = (((~ (0xffULL << (IData)(vlSelf->__Vdlyvlsb__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v7))) 
                & vlSelf->mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM
                [vlSelf->__Vdlyvdim0__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v7]) 
               | ((QData)((IData)(vlSelf->__Vdlyvval__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v7)) 
                  << (IData)(vlSelf->__Vdlyvlsb__mkTbSoc__DOT__eth0_dut_dmemMSB__DOT__RAM__v7)));
    }
    if ((0x2000U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
        if ((0x1000U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
            if ((0x800U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                if ((0x400U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                    if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                        if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_63;
                            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_63;
                        } else {
                            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_62;
                            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_62;
                        }
                    } else if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_61;
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_61;
                    } else {
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_60;
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_60;
                    }
                } else if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                    if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_59;
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_59;
                    } else {
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_58;
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_58;
                    }
                } else if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_57;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_57;
                } else {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_56;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_56;
                }
            } else if ((0x400U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                    if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_55;
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_55;
                    } else {
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_54;
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_54;
                    }
                } else if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_53;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_53;
                } else {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_52;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_52;
                }
            } else if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_51;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_51;
                } else {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_50;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_50;
                }
            } else if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_49;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_49;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_48;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_48;
            }
        } else if ((0x800U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
            if ((0x400U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                    if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_47;
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_47;
                    } else {
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_46;
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_46;
                    }
                } else if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_45;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_45;
                } else {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_44;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_44;
                }
            } else if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_43;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_43;
                } else {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_42;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_42;
                }
            } else if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_41;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_41;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_40;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_40;
            }
        } else if ((0x400U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
            if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_39;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_39;
                } else {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_38;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_38;
                }
            } else if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_37;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_37;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_36;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_36;
            }
        } else if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
            if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_35;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_35;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_34;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_34;
            }
        } else if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_33;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_33;
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_32;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_32;
        }
    } else if ((0x1000U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
        if ((0x800U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
            if ((0x400U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                    if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_31;
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_31;
                    } else {
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_30;
                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_30;
                    }
                } else if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_29;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_29;
                } else {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_28;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_28;
                }
            } else if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_27;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_27;
                } else {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_26;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_26;
                }
            } else if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_25;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_25;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_24;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_24;
            }
        } else if ((0x400U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
            if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_23;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_23;
                } else {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_22;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_22;
                }
            } else if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_21;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_21;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_20;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_20;
            }
        } else if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
            if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_19;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_19;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_18;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_18;
            }
        } else if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_17;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_17;
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_16;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_16;
        }
    } else if ((0x800U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
        if ((0x400U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
            if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_15;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_15;
                } else {
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_14;
                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                        = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_14;
                }
            } else if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_13;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_13;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_12;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_12;
            }
        } else if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
            if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_11;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_11;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_10;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_10;
            }
        } else if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_9;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_9;
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_8;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_8;
        }
    } else if ((0x400U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
        if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
            if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_7;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_7;
            } else {
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_6;
                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                    = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_6;
            }
        } else if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_5;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_5;
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_4;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_4;
        }
    } else if ((0x200U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
        if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_3;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_3;
        } else {
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_2;
            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
                = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_2;
        }
    } else if ((0x100U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info[0U])) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_1;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_1;
    } else {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_valid_0;
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928 
            = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__v_reg_dirty_0;
    }
    if (vlSelf->__Vdlyvset__mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_tag__DOT__v_tags_0_ram_single_0__DOT__ram__v0) {
        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_tag__DOT__v_tags_0_ram_single_0__DOT__ram[vlSelf->__Vdlyvdim0__mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_tag__DOT__v_tags_0_ram_single_0__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_tag__DOT__v_tags_0_ram_single_0__DOT__ram__v0;
    }
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__MUX_rg_initialize_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_initialize) 
           & (0x3fU == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_bht_index)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0_EN_s0_bpu_ma_mispredict 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_initialize)) 
           & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__wr_mispredict_ghr) 
              >> 9U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0_EN_s0_bpu_ma_train_bpu 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_initialize)) 
           & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__wr_training_data[4U] 
              >> 0xeU));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_fence 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset) 
           && (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_fence_D_IN));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__SEL_ARR_v_reg_valid_0_9_v_reg_valid_1_00_v_reg_ETC___05F_d1429 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__x___05Fh121927) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__y___05Fh121928));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__MUX_ff_mem_wr_request_enq_1___05FVAL_1[0U] 
        = (0x3bU | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[0U] 
                    << 0xbU));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__MUX_ff_mem_wr_request_enq_1___05FVAL_1[1U] 
        = ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[0U] 
            >> 0x15U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[1U] 
                         << 0xbU));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__MUX_ff_mem_wr_request_enq_1___05FVAL_1[2U] 
        = ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[1U] 
            >> 0x15U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[2U] 
                         << 0xbU));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__MUX_ff_mem_wr_request_enq_1___05FVAL_1[3U] 
        = ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[2U] 
            >> 0x15U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[3U] 
                         << 0xbU));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__MUX_ff_mem_wr_request_enq_1___05FVAL_1[4U] 
        = ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[3U] 
            >> 0x15U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[4U] 
                         << 0xbU));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__MUX_ff_mem_wr_request_enq_1___05FVAL_1[5U] 
        = ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[4U] 
            >> 0x15U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[5U] 
                         << 0xbU));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__MUX_ff_mem_wr_request_enq_1___05FVAL_1[6U] 
        = ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[5U] 
            >> 0x15U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[6U] 
                         << 0xbU));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__MUX_ff_mem_wr_request_enq_1___05FVAL_1[7U] 
        = ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[6U] 
            >> 0x15U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[7U] 
                         << 0xbU));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__MUX_ff_mem_wr_request_enq_1___05FVAL_1[8U] 
        = ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[7U] 
            >> 0x15U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[8U] 
                         << 0xbU));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__MUX_ff_mem_wr_request_enq_1___05FVAL_1[9U] 
        = ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[8U] 
            >> 0x15U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[9U] 
                         << 0xbU));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__MUX_ff_mem_wr_request_enq_1___05FVAL_1[0xaU] 
        = ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[9U] 
            >> 0x15U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[0xaU] 
                         << 0xbU));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__MUX_ff_mem_wr_request_enq_1___05FVAL_1[0xbU] 
        = ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[0xaU] 
            >> 0x15U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[0xbU] 
                         << 0xbU));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__MUX_ff_mem_wr_request_enq_1___05FVAL_1[0xcU] 
        = ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[0xbU] 
            >> 0x15U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[0xcU] 
                         << 0xbU));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__MUX_ff_mem_wr_request_enq_1___05FVAL_1[0xdU] 
        = ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[0xcU] 
            >> 0x15U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[0xdU] 
                         << 0xbU));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__MUX_ff_mem_wr_request_enq_1___05FVAL_1[0xeU] 
        = ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[0xdU] 
            >> 0x15U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[0xeU] 
                         << 0xbU));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__MUX_ff_mem_wr_request_enq_1___05FVAL_1[0xfU] 
        = ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[0xeU] 
            >> 0x15U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[0xfU] 
                         << 0xbU));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__MUX_ff_mem_wr_request_enq_1___05FVAL_1[0x10U] 
        = ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_data_mv_line_select[0xfU] 
            >> 0x15U) | ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_tag__DOT__v_tags_0_ram_single_0__DOT__out_reg 
                          << 0x17U) | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_fence_set) 
                                       << 0x11U)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__MUX_ff_mem_wr_request_enq_1___05FVAL_1[0x11U] 
        = (0x7ffU & ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_tag__DOT__v_tags_0_ram_single_0__DOT__out_reg 
                      >> 9U) | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_fence_set) 
                                >> 0xfU)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__MUX_rg_bht_arr_0_upd_1___05FSEL_1 
        = ((~ (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__wr_training_data[2U] 
               >> 6U)) & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0_EN_s0_bpu_ma_train_bpu) 
                          & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT____VdfgRegularize_h27894f64_0_61)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__MUX_rg_bht_arr_1_upd_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0_EN_s0_bpu_ma_train_bpu) 
           & ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__wr_training_data[2U] 
               >> 6U) & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT____VdfgRegularize_h27894f64_0_61)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__MUX_rg_allocate_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0_EN_s0_bpu_ma_train_bpu) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT____VdfgRegularize_h27894f64_0_58));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__MUX_v_reg_btb_tag_0_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0_EN_s0_bpu_ma_train_bpu) 
           & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_52));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__MUX_v_reg_btb_tag_1_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0_EN_s0_bpu_ma_train_bpu) 
           & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_53));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__MUX_v_reg_btb_tag_2_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0_EN_s0_bpu_ma_train_bpu) 
           & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_54));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__MUX_v_reg_btb_tag_3_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0_EN_s0_bpu_ma_train_bpu) 
           & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_55));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__MUX_v_reg_btb_tag_4_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0_EN_s0_bpu_ma_train_bpu) 
           & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_56));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__MUX_v_reg_btb_tag_5_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0_EN_s0_bpu_ma_train_bpu) 
           & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_57));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__MUX_v_reg_btb_tag_6_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0_EN_s0_bpu_ma_train_bpu) 
           & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_58));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__MUX_v_reg_btb_tag_7_write_1___05FSEL_1 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0_EN_s0_bpu_ma_train_bpu) 
           & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_59));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__MUX_m_data_ma_request_1___05FVAL_2 
        = (1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__SEL_ARR_v_reg_valid_0_9_v_reg_valid_1_00_v_reg_ETC___05F_d1429)) 
                 | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_release_readphase)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_allocate_D_IN 
        = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__MUX_rg_allocate_write_1___05FSEL_1)
            ? (7U & ((IData)(1U) + (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_allocate)))
            : 0U);
    vlSelf->__VdfgRegularize_hd87f99a1_4_50 = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_fence)
                                                ? 1U
                                                : (
                                                   (0U 
                                                    == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT___theResult___05F___05F_6___05Fh3249))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT____VdfgRegularize_h27894f64_0_57)
                                                     ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__y_avValue_fst___05Fh105276)
                                                     : 1U)));
    vlSelf->__VdfgRegularize_hd87f99a1_4_51 = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_fence)) 
                                               & (0U 
                                                  != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT___theResult___05F___05F_6___05Fh3249)));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT____VdfgRegularize_hff374577_0_6 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_fence)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT____VdfgRegularize_h27894f64_0_2));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT____VdfgRegularize_hff374577_0_5 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_fence)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT____VdfgRegularize_h27894f64_0_4));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT____VdfgRegularize_h9be507e3_2_55 
        = ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer__DOT__x___05Fh19896)) 
           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__MUX_m_data_ma_request_1___05FVAL_2));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0_D_IN[0U] 
        = (IData)((0xfffffffffffffffcULL & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_pc));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0_D_IN[1U] 
        = (IData)(((0xfffffffffffffffcULL & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_pc) 
                   >> 0x20U));
    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0_D_IN[2U] 
        = ((0x1000U & ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_pc 
                                >> 1U)) << 0xcU)) | 
           (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT____VdfgRegularize_hff374577_0_5) 
             << 0xbU) | ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_fence)
                            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__rg_ghr)
                            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__lv_ghr___05F_2___05Fh105311)) 
                          << 3U) | (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_50) 
                                     << 1U) | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_51)))));
}

VL_INLINE_OPT void VmkTbSoc_edited___024root___nba_comb__TOP__0(VmkTbSoc_edited___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->mkTbSoc__DOT__bram_s_xactor_f_rd_data_D_IN[0U] 
        = (((IData)(vlSelf->mkTbSoc__DOT__bram_dut_dmemMSB__DOT__DOA_R) 
            << 5U) | (((IData)(vlSelf->mkTbSoc__DOT__bram_rg_readburst_counter_6_EQ_bram_rg_read_pa_ETC___05F_d69) 
                       << 4U) | (0xfU & (IData)(vlSelf->mkTbSoc__DOT__bram_rg_read_packet))));
    vlSelf->mkTbSoc__DOT__bram_s_xactor_f_rd_data_D_IN[1U] 
        = (((IData)(vlSelf->mkTbSoc__DOT__bram_dut_dmemMSB__DOT__DOA_R) 
            >> 0x1bU) | ((IData)((vlSelf->mkTbSoc__DOT__bram_dut_dmemMSB__DOT__DOA_R 
                                  >> 0x20U)) << 5U));
    vlSelf->mkTbSoc__DOT__bram_s_xactor_f_rd_data_D_IN[2U] 
        = ((IData)((vlSelf->mkTbSoc__DOT__bram_dut_dmemMSB__DOT__DOA_R 
                    >> 0x20U)) >> 0x1bU);
}
