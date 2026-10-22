// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VmkTbSoc_edited__Syms.h"


extern const VlWide<10>/*319:0*/ VmkTbSoc_edited__ConstPool__CONST_h021016e1_0;

void VmkTbSoc_edited___024root__trace_chg_0_sub_10(VmkTbSoc_edited___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root__trace_chg_0_sub_10\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 19753);
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<10>/*319:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_48;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2aU])) {
        bufp->chgBit(oldp+0,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_1_DEQ));
        bufp->chgBit(oldp+1,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_1_ENQ));
        bufp->chgBit(oldp+2,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_mbox_out_beforeDeq_EN));
        bufp->chgBit(oldp+3,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_mbox_out_beforeEnq_EN));
        bufp->chgBit(oldp+4,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_mbox_out_ff_DEQ));
        bufp->chgBit(oldp+5,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_mbox_out_ff_ENQ));
        bufp->chgBit(oldp+6,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_memoryout_DEQ));
        bufp->chgWData(oldp+7,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_pipe1_D_IN),120);
        bufp->chgBit(oldp+11,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_pipe1_DEQ));
        bufp->chgBit(oldp+12,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_pipe1_ENQ));
        bufp->chgWData(oldp+13,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_1_D_IN),81);
        bufp->chgBit(oldp+16,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_1_ENQ));
        bufp->chgWData(oldp+17,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_trapout_D_IN),72);
        bufp->chgBit(oldp+20,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_trapout_ENQ));
        bufp->chgWData(oldp+21,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_D_IN),69);
        bufp->chgBit(oldp+24,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_wbmemop_ENQ));
        bufp->chgBit(oldp+25,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__mbox_EN_ma_inputs));
        bufp->chgBit(oldp+26,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__mbox_tx_output_enq_ena));
        bufp->chgBit(oldp+27,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0_DEQ));
        bufp->chgBit(oldp+28,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_commitlog_DEQ));
        bufp->chgBit(oldp+29,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_commitlog_ENQ));
        bufp->chgBit(oldp+30,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_commitlog_FULL_N));
        bufp->chgBit(oldp+31,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_DEQ));
        bufp->chgBit(oldp+32,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_ENQ));
        bufp->chgBit(oldp+33,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_FULL_N));
        bufp->chgBit(oldp+34,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_DEQ));
        bufp->chgBit(oldp+35,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_ENQ));
        bufp->chgBit(oldp+36,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_FULL_N));
        bufp->chgBit(oldp+37,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_mtval_DEQ));
        bufp->chgBit(oldp+38,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_mtval_ENQ));
        bufp->chgBit(oldp+39,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_mtval_FULL_N));
        bufp->chgBit(oldp+40,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_opmeta_DEQ));
        bufp->chgBit(oldp+41,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_opmeta_ENQ));
        bufp->chgBit(oldp+42,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_opmeta_FULL_N));
        bufp->chgBit(oldp+43,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0_EN_common_ma_flush));
        bufp->chgBit(oldp+44,((1U & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_106))));
        bufp->chgBit(oldp+45,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1_rx_rx_from_stage0_deq_ena));
        bufp->chgBit(oldp+46,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1_tx_tx_commitlog_enq_ena));
        bufp->chgBit(oldp+47,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2_EN_common_ma_clear_stall));
        bufp->chgBit(oldp+48,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2_rx_rx_commitlog_deq_ena));
        bufp->chgBit(oldp+49,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2_tx_tx_commitlog_enq_ena));
        bufp->chgBit(oldp+50,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_perfmonitors_mv_count_exestalls));
        bufp->chgBit(oldp+51,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_rx_rx_commitlog_deq_ena));
        bufp->chgBit(oldp+52,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_tx_tx_commitlog_enq_ena));
        bufp->chgBit(oldp+53,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4_rx_rx_commitlog_deq_ena));
        bufp->chgBit(oldp+54,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4_rx_rx_memoryout_from_stage3_deq_ena));
        bufp->chgBit(oldp+55,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4_s4_mbox_rx_mbox_output_deq_ena));
        bufp->chgBit(oldp+56,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT____VdfgRegularize_h3b2c5113_32_0));
        bufp->chgBit(oldp+57,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4__DOT__MUX_tx_baseout_w_data_wset_1___05FSEL_1) 
                               | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4__DOT____VdfgRegularize_h57e54287_0_16))));
        bufp->chgBit(oldp+58,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4__DOT____VdfgRegularize_h57e54287_0_17) 
                               & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U] 
                                  >> 0x19U))));
        __Vtemp_2[0U] = (((IData)((((QData)((IData)(
                                                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__wr_flush_wget[2U])) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__wr_flush_wget[1U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__wr_flush_wget[0U])) 
                                                    >> 1U)))) 
                          << 1U) | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__wr_flush_whas) 
                                    & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__wr_flush_wget[0U]));
        __Vtemp_2[1U] = (((IData)((((QData)((IData)(
                                                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__wr_flush_wget[2U])) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__wr_flush_wget[1U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__wr_flush_wget[0U])) 
                                                    >> 1U)))) 
                          >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__wr_flush_wget[2U])) 
                                                  << 0x3fU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__wr_flush_wget[1U])) 
                                                     << 0x1fU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__wr_flush_wget[0U])) 
                                                       >> 1U))) 
                                                >> 0x20U)) 
                                       << 1U));
        __Vtemp_2[2U] = (((IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_106) 
                          << 1U) | ((IData)(((((QData)((IData)(
                                                               vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__wr_flush_wget[2U])) 
                                               << 0x3fU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__wr_flush_wget[1U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__wr_flush_wget[0U])) 
                                                    >> 1U))) 
                                             >> 0x20U)) 
                                    >> 0x1fU));
        bufp->chgWData(oldp+59,(__Vtemp_2),67);
        bufp->chgBit(oldp+62,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__mbox__DOT__div___05FEN_ma_inputs));
        bufp->chgBit(oldp+63,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__mbox__DOT__mul___05FEN_ma_inputs));
        bufp->chgBit(oldp+64,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__rg_prev_EN) 
                               & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__rg_eEpoch_8_CONCAT_rg_wEpoch_9_0_EQ_IF_ff_memo_ETC___05F_d60)) 
                                  | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__NOT_rg_action_4_5_AND_rg_prev_6_BITS_13_TO_12___05FETC___05F_d87)))));
        bufp->chgBit(oldp+65,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__rg_prev_EN));
        bufp->chgBit(oldp+66,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__ff_memory_response_ff_DEQ));
        bufp->chgBit(oldp+67,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__ff_memory_response_ff_ENQ));
        bufp->chgQData(oldp+68,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__x1_avValue_snd_snd_snd_pc___05Fh3576),64);
        bufp->chgQData(oldp+70,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__x_pc___05Fh3851),64);
        bufp->chgIData(oldp+72,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d43),32);
        bufp->chgIData(oldp+73,((((IData)((0x1000U 
                                           == (0xf003U 
                                               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353))) 
                                  | (IData)(((0U == 
                                              (0xe003U 
                                               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)) 
                                             & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT____VdfgRegularize_h4cfba4c1_0_63) 
                                                | (IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))))))
                                  ? (0x10413U | (((0x3c000000U 
                                                   & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                      << 0x13U)) 
                                                  | ((0x3000000U 
                                                      & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                         << 0xdU)) 
                                                     | ((0x800000U 
                                                         & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                            << 0x12U)) 
                                                        | (0x400000U 
                                                           & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                              << 0x10U))))) 
                                                 | (0x380U 
                                                    & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                       << 5U))))
                                  : ((IData)((0x4000U 
                                              == (0xe003U 
                                                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                      ? (0x42403U | 
                                         (((0x4000000U 
                                            & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                               << 0x15U)) 
                                           | ((0x3800000U 
                                               & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                  << 0xdU)) 
                                              | (0x400000U 
                                                 & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                    << 0x10U)))) 
                                          | ((0x38000U 
                                              & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                 << 8U)) 
                                             | (0x380U 
                                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                   << 5U)))))
                                      : ((IData)((0x6000U 
                                                  == 
                                                  (0xe003U 
                                                   & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                          ? (0x43403U 
                                             | (((0xc000000U 
                                                  & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                     << 0x15U)) 
                                                 | (0x3800000U 
                                                    & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                       << 0xdU))) 
                                                | ((0x38000U 
                                                    & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                       << 8U)) 
                                                   | (0x380U 
                                                      & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                         << 5U)))))
                                          : ((IData)(
                                                     (0xc000U 
                                                      == 
                                                      (0xe003U 
                                                       & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                              ? (0x842023U 
                                                 | (((0x4000000U 
                                                      & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                         << 0x15U)) 
                                                     | (0x2000000U 
                                                        & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                           << 0xdU))) 
                                                    | ((0x700000U 
                                                        & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                           << 0x12U)) 
                                                       | ((0x38000U 
                                                           & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                              << 8U)) 
                                                          | ((0xc00U 
                                                              & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353) 
                                                             | (0x200U 
                                                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                                   << 3U)))))))
                                              : ((IData)(
                                                         (0xe000U 
                                                          == 
                                                          (0xe003U 
                                                           & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                                  ? 
                                                 (0x843023U 
                                                  | (((0xc000000U 
                                                       & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                          << 0x15U)) 
                                                      | (0x2000000U 
                                                         & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                            << 0xdU))) 
                                                     | ((0x700000U 
                                                         & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                            << 0x12U)) 
                                                        | ((0x38000U 
                                                            & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                               << 8U)) 
                                                           | (0xc00U 
                                                              & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))))
                                                  : 
                                                 ((IData)(
                                                          (1U 
                                                           == 
                                                           (0xe003U 
                                                            & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                                   ? 
                                                  (0x13U 
                                                   | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__SEXT_fn_decompress_inst_BIT_12_0_CONCAT_fn_dec_ETC___05F_d67) 
                                                       << 0x14U) 
                                                      | ((0xf8000U 
                                                          & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                             << 8U)) 
                                                         | (0xf80U 
                                                            & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353))))
                                                   : 
                                                  ((IData)(
                                                           ((0x2001U 
                                                             == 
                                                             (0xe003U 
                                                              & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)) 
                                                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT____VdfgRegularize_h4cfba4c1_0_63)))
                                                    ? 
                                                   (0x1bU 
                                                    | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__SEXT_fn_decompress_inst_BIT_12_0_CONCAT_fn_dec_ETC___05F_d67) 
                                                        << 0x14U) 
                                                       | ((0xf8000U 
                                                           & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                              << 8U)) 
                                                          | (0xf80U 
                                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353))))
                                                    : 
                                                   ((IData)(
                                                            (0x4001U 
                                                             == 
                                                             (0xe003U 
                                                              & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                                     ? 
                                                    (0x13U 
                                                     | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__SEXT_fn_decompress_inst_BIT_12_0_CONCAT_fn_dec_ETC___05F_d67) 
                                                         << 0x14U) 
                                                        | (0xf80U 
                                                           & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                                     : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__IF_fn_decompress_inst_BITS_15_TO_7_3_EQ_0b1110_ETC___05F_d340))))))))),32);
        bufp->chgIData(oldp+74,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353),32);
        bufp->chgIData(oldp+75,((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__rg_eEpoch_8_CONCAT_rg_wEpoch_9_0_EQ_IF_ff_memo_ETC___05F_d60) 
                                  & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__IF_NOT_rg_action_4_5_AND_rg_prev_6_BITS_13_TO___05FETC___05F_d165))
                                  ? (((IData)((0x1000U 
                                               == (0xf003U 
                                                   & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353))) 
                                      | (IData)(((0U 
                                                  == 
                                                  (0xe003U 
                                                   & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)) 
                                                 & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT____VdfgRegularize_h4cfba4c1_0_63) 
                                                    | (IData)(
                                                              (0U 
                                                               != 
                                                               (0x60U 
                                                                & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))))))
                                      ? (0x10413U | 
                                         (((0x3c000000U 
                                            & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                               << 0x13U)) 
                                           | ((0x3000000U 
                                               & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                  << 0xdU)) 
                                              | ((0x800000U 
                                                  & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                     << 0x12U)) 
                                                 | (0x400000U 
                                                    & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                       << 0x10U))))) 
                                          | (0x380U 
                                             & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                << 5U))))
                                      : ((IData)((0x4000U 
                                                  == 
                                                  (0xe003U 
                                                   & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                          ? (0x42403U 
                                             | (((0x4000000U 
                                                  & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                     << 0x15U)) 
                                                 | ((0x3800000U 
                                                     & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                        << 0xdU)) 
                                                    | (0x400000U 
                                                       & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                          << 0x10U)))) 
                                                | ((0x38000U 
                                                    & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                       << 8U)) 
                                                   | (0x380U 
                                                      & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                         << 5U)))))
                                          : ((IData)(
                                                     (0x6000U 
                                                      == 
                                                      (0xe003U 
                                                       & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                              ? (0x43403U 
                                                 | (((0xc000000U 
                                                      & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                         << 0x15U)) 
                                                     | (0x3800000U 
                                                        & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                           << 0xdU))) 
                                                    | ((0x38000U 
                                                        & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                           << 8U)) 
                                                       | (0x380U 
                                                          & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                             << 5U)))))
                                              : ((IData)(
                                                         (0xc000U 
                                                          == 
                                                          (0xe003U 
                                                           & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                                  ? 
                                                 (0x842023U 
                                                  | (((0x4000000U 
                                                       & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                          << 0x15U)) 
                                                      | (0x2000000U 
                                                         & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                            << 0xdU))) 
                                                     | ((0x700000U 
                                                         & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                            << 0x12U)) 
                                                        | ((0x38000U 
                                                            & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                               << 8U)) 
                                                           | ((0xc00U 
                                                               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353) 
                                                              | (0x200U 
                                                                 & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                                    << 3U)))))))
                                                  : 
                                                 ((IData)(
                                                          (0xe000U 
                                                           == 
                                                           (0xe003U 
                                                            & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                                   ? 
                                                  (0x843023U 
                                                   | (((0xc000000U 
                                                        & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                           << 0x15U)) 
                                                       | (0x2000000U 
                                                          & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                             << 0xdU))) 
                                                      | ((0x700000U 
                                                          & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                             << 0x12U)) 
                                                         | ((0x38000U 
                                                             & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                                << 8U)) 
                                                            | (0xc00U 
                                                               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))))
                                                   : 
                                                  ((IData)(
                                                           (1U 
                                                            == 
                                                            (0xe003U 
                                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                                    ? 
                                                   (0x13U 
                                                    | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__SEXT_fn_decompress_inst_BIT_12_0_CONCAT_fn_dec_ETC___05F_d67) 
                                                        << 0x14U) 
                                                       | ((0xf8000U 
                                                           & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                              << 8U)) 
                                                          | (0xf80U 
                                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353))))
                                                    : 
                                                   ((IData)(
                                                            ((0x2001U 
                                                              == 
                                                              (0xe003U 
                                                               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)) 
                                                             & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT____VdfgRegularize_h4cfba4c1_0_63)))
                                                     ? 
                                                    (0x1bU 
                                                     | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__SEXT_fn_decompress_inst_BIT_12_0_CONCAT_fn_dec_ETC___05F_d67) 
                                                         << 0x14U) 
                                                        | ((0xf8000U 
                                                            & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                               << 8U)) 
                                                           | (0xf80U 
                                                              & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353))))
                                                     : 
                                                    ((IData)(
                                                             (0x4001U 
                                                              == 
                                                              (0xe003U 
                                                               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                                      ? 
                                                     (0x13U 
                                                      | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__SEXT_fn_decompress_inst_BIT_12_0_CONCAT_fn_dec_ETC___05F_d67) 
                                                          << 0x14U) 
                                                         | (0xf80U 
                                                            & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                                      : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__IF_fn_decompress_inst_BITS_15_TO_7_3_EQ_0b1110_ETC___05F_d340))))))))
                                  : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)),32);
        bufp->chgIData(oldp+76,((0xffffU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d43)),32);
        bufp->chgIData(oldp+77,(VL_SHIFTR_III(32,32,32, vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d43, 0x10U)),32);
        bufp->chgIData(oldp+78,(((3U == (3U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d43))
                                  ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d43
                                  : (0xffffU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d43))),32);
        bufp->chgSData(oldp+79,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__x1_avValue_snd_snd_snd_instruction___05Fh3577),16);
        bufp->chgSData(oldp+80,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__IF_IF_ff_memory_response_ff_i_notEmpty_THEN_ff_ETC___05F_d125),12);
        bufp->chgBit(oldp+81,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__IF_NOT_rg_action_4_5_AND_rg_prev_6_BITS_13_TO___05FETC___05F_d165));
        bufp->chgBit(oldp+82,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d162));
        bufp->chgBit(oldp+83,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__NOT_rg_action_4_5_AND_rg_prev_6_BITS_13_TO_12___05FETC___05F_d134));
        bufp->chgBit(oldp+84,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__NOT_rg_action_4_5_AND_rg_prev_6_BITS_13_TO_12___05FETC___05F_d87));
        bufp->chgBit(oldp+85,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__rg_eEpoch_8_CONCAT_rg_wEpoch_9_0_EQ_IF_ff_memo_ETC___05F_d60));
        bufp->chgSData(oldp+86,((0xffffU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)),16);
        bufp->chgIData(oldp+87,((((IData)((0x9802U 
                                           == (0xf87fU 
                                               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353))) 
                                  | (IData)(((0x9000U 
                                              == (0xf000U 
                                                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)) 
                                             & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__fn_decompress_inst_BIT_10_AND_fn_decompress_in_ETC___05F_d277))))
                                  ? (0xe7U | (0xf8000U 
                                              & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                 << 8U)))
                                  : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__IF_fn_decompress_inst_BITS_15_TO_12_EQ_0b1001___05FETC___05F_d319)),32);
        bufp->chgIData(oldp+88,((((IData)((0x8802U 
                                           == (0xf87fU 
                                               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353))) 
                                  | (IData)(((0x8000U 
                                              == (0xf000U 
                                                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)) 
                                             & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__fn_decompress_inst_BIT_10_AND_fn_decompress_in_ETC___05F_d277))))
                                  ? (0x67U | (0xf8000U 
                                              & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                 << 8U)))
                                  : ((IData)(((0x8000U 
                                               == (0xf000U 
                                                   & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)) 
                                              & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT____VdfgRegularize_h4cfba4c1_0_22)))
                                      ? (0x33U | ((0x1f00000U 
                                                   & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                      << 0x12U)) 
                                                  | (0xf80U 
                                                     & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                      : ((0x9002U == 
                                          (0xffffU 
                                           & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353))
                                          ? 0x100073U
                                          : (((IData)(
                                                      (0x9802U 
                                                       == 
                                                       (0xf87fU 
                                                        & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353))) 
                                              | (IData)(
                                                        ((0x9000U 
                                                          == 
                                                          (0xf000U 
                                                           & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)) 
                                                         & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__fn_decompress_inst_BIT_10_AND_fn_decompress_in_ETC___05F_d277))))
                                              ? (0xe7U 
                                                 | (0xf8000U 
                                                    & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                       << 8U)))
                                              : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__IF_fn_decompress_inst_BITS_15_TO_12_EQ_0b1001___05FETC___05F_d319))))),32);
        bufp->chgIData(oldp+89,(((IData)(((0x8000U 
                                           == (0xf000U 
                                               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)) 
                                          & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT____VdfgRegularize_h4cfba4c1_0_22)))
                                  ? (0x33U | ((0x1f00000U 
                                               & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                  << 0x12U)) 
                                              | (0xf80U 
                                                 & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                  : ((0x9002U == (0xffffU 
                                                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353))
                                      ? 0x100073U : 
                                     (((IData)((0x9802U 
                                                == 
                                                (0xf87fU 
                                                 & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353))) 
                                       | (IData)(((0x9000U 
                                                   == 
                                                   (0xf000U 
                                                    & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)) 
                                                  & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__fn_decompress_inst_BIT_10_AND_fn_decompress_in_ETC___05F_d277))))
                                       ? (0xe7U | (0xf8000U 
                                                   & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                      << 8U)))
                                       : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__IF_fn_decompress_inst_BITS_15_TO_12_EQ_0b1001___05FETC___05F_d319)))),32);
        bufp->chgIData(oldp+90,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__IF_fn_decompress_inst_BITS_15_TO_12_EQ_0b1001___05FETC___05F_d319),32);
        bufp->chgIData(oldp+91,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__IF_fn_decompress_inst_BITS_15_TO_13_EQ_0b100_8_ETC___05F_d336),32);
        bufp->chgIData(oldp+92,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__IF_fn_decompress_inst_BITS_15_TO_13_EQ_0b10_2___05FETC___05F_d325),32);
        bufp->chgIData(oldp+93,(((IData)((0xc002U == 
                                          (0xe003U 
                                           & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                  ? (0x12023U | (((0xc000000U 
                                                   & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                      << 0x13U)) 
                                                  | (0x2000000U 
                                                     & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                        << 0xdU))) 
                                                 | ((0x1f00000U 
                                                     & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                        << 0x12U)) 
                                                    | (0xe00U 
                                                       & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353))))
                                  : ((IData)((0xe002U 
                                              == (0xe003U 
                                                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                      ? (0x13023U | 
                                         (((0x1c000000U 
                                            & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                               << 0x13U)) 
                                           | (0x2000000U 
                                              & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                 << 0xdU))) 
                                          | ((0x1f00000U 
                                              & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                 << 0x12U)) 
                                             | (0xc00U 
                                                & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353))))
                                      : (0xffffU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))),32);
        bufp->chgIData(oldp+94,(((IData)((0xe000U == 
                                          (0xe003U 
                                           & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                  ? (0x843023U | ((
                                                   (0xc000000U 
                                                    & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                       << 0x15U)) 
                                                   | (0x2000000U 
                                                      & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                         << 0xdU))) 
                                                  | ((0x700000U 
                                                      & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                         << 0x12U)) 
                                                     | ((0x38000U 
                                                         & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                            << 8U)) 
                                                        | (0xc00U 
                                                           & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))))
                                  : ((IData)((1U == 
                                              (0xe003U 
                                               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                      ? (0x13U | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__SEXT_fn_decompress_inst_BIT_12_0_CONCAT_fn_dec_ETC___05F_d67) 
                                                   << 0x14U) 
                                                  | ((0xf8000U 
                                                      & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                         << 8U)) 
                                                     | (0xf80U 
                                                        & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353))))
                                      : ((IData)(((0x2001U 
                                                   == 
                                                   (0xe003U 
                                                    & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)) 
                                                  & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT____VdfgRegularize_h4cfba4c1_0_63)))
                                          ? (0x1bU 
                                             | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__SEXT_fn_decompress_inst_BIT_12_0_CONCAT_fn_dec_ETC___05F_d67) 
                                                 << 0x14U) 
                                                | ((0xf8000U 
                                                    & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                       << 8U)) 
                                                   | (0xf80U 
                                                      & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353))))
                                          : ((IData)(
                                                     (0x4001U 
                                                      == 
                                                      (0xe003U 
                                                       & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                              ? (0x13U 
                                                 | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__SEXT_fn_decompress_inst_BIT_12_0_CONCAT_fn_dec_ETC___05F_d67) 
                                                     << 0x14U) 
                                                    | (0xf80U 
                                                       & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                              : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__IF_fn_decompress_inst_BITS_15_TO_7_3_EQ_0b1110_ETC___05F_d340))))),32);
        bufp->chgIData(oldp+95,(((IData)((0x6000U == 
                                          (0xe003U 
                                           & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                  ? (0x43403U | (((0xc000000U 
                                                   & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                      << 0x15U)) 
                                                  | (0x3800000U 
                                                     & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                        << 0xdU))) 
                                                 | ((0x38000U 
                                                     & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                        << 8U)) 
                                                    | (0x380U 
                                                       & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                          << 5U)))))
                                  : ((IData)((0xc000U 
                                              == (0xe003U 
                                                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                      ? (0x842023U 
                                         | (((0x4000000U 
                                              & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                 << 0x15U)) 
                                             | (0x2000000U 
                                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                   << 0xdU))) 
                                            | ((0x700000U 
                                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                   << 0x12U)) 
                                               | ((0x38000U 
                                                   & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                      << 8U)) 
                                                  | ((0xc00U 
                                                      & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353) 
                                                     | (0x200U 
                                                        & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                           << 3U)))))))
                                      : ((IData)((0xe000U 
                                                  == 
                                                  (0xe003U 
                                                   & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                          ? (0x843023U 
                                             | (((0xc000000U 
                                                  & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                     << 0x15U)) 
                                                 | (0x2000000U 
                                                    & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                       << 0xdU))) 
                                                | ((0x700000U 
                                                    & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                       << 0x12U)) 
                                                   | ((0x38000U 
                                                       & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                          << 8U)) 
                                                      | (0xc00U 
                                                         & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))))
                                          : ((IData)(
                                                     (1U 
                                                      == 
                                                      (0xe003U 
                                                       & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                              ? (0x13U 
                                                 | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__SEXT_fn_decompress_inst_BIT_12_0_CONCAT_fn_dec_ETC___05F_d67) 
                                                     << 0x14U) 
                                                    | ((0xf8000U 
                                                        & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                           << 8U)) 
                                                       | (0xf80U 
                                                          & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353))))
                                              : ((IData)(
                                                         ((0x2001U 
                                                           == 
                                                           (0xe003U 
                                                            & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)) 
                                                          & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT____VdfgRegularize_h4cfba4c1_0_63)))
                                                  ? 
                                                 (0x1bU 
                                                  | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__SEXT_fn_decompress_inst_BIT_12_0_CONCAT_fn_dec_ETC___05F_d67) 
                                                      << 0x14U) 
                                                     | ((0xf8000U 
                                                         & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                            << 8U)) 
                                                        | (0xf80U 
                                                           & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353))))
                                                  : 
                                                 ((IData)(
                                                          (0x4001U 
                                                           == 
                                                           (0xe003U 
                                                            & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                                   ? 
                                                  (0x13U 
                                                   | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__SEXT_fn_decompress_inst_BIT_12_0_CONCAT_fn_dec_ETC___05F_d67) 
                                                       << 0x14U) 
                                                      | (0xf80U 
                                                         & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                                   : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__IF_fn_decompress_inst_BITS_15_TO_7_3_EQ_0b1110_ETC___05F_d340))))))),32);
        bufp->chgIData(oldp+96,(((IData)(((0x2001U 
                                           == (0xe003U 
                                               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)) 
                                          & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT____VdfgRegularize_h4cfba4c1_0_63)))
                                  ? (0x1bU | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__SEXT_fn_decompress_inst_BIT_12_0_CONCAT_fn_dec_ETC___05F_d67) 
                                               << 0x14U) 
                                              | ((0xf8000U 
                                                  & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                     << 8U)) 
                                                 | (0xf80U 
                                                    & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353))))
                                  : ((IData)((0x4001U 
                                              == (0xe003U 
                                                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                      ? (0x13U | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__SEXT_fn_decompress_inst_BIT_12_0_CONCAT_fn_dec_ETC___05F_d67) 
                                                   << 0x14U) 
                                                  | (0xf80U 
                                                     & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))
                                      : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__IF_fn_decompress_inst_BITS_15_TO_7_3_EQ_0b1110_ETC___05F_d340))),32);
        bufp->chgIData(oldp+97,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__IF_fn_decompress_inst_BITS_15_TO_7_3_EQ_0b1110_ETC___05F_d340),32);
        bufp->chgSData(oldp+98,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__SEXT_fn_decompress_inst_BIT_12_0_CONCAT_fn_dec_ETC___05F_d67),12);
        bufp->chgSData(oldp+99,(((0x3c0U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                            >> 1U)) 
                                 | ((0x30U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                              >> 7U)) 
                                    | ((8U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                              >> 2U)) 
                                       | (4U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                >> 4U)))))),10);
        bufp->chgSData(oldp+100,(((0x200U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                             >> 3U)) 
                                  | ((0x180U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                << 4U)) 
                                     | ((0x40U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                  << 1U)) 
                                        | ((0x20U & 
                                            (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                             << 3U)) 
                                           | (0x10U 
                                              & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                 >> 2U))))))),10);
        bufp->chgSData(oldp+101,(((0x1c0U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                             << 4U)) 
                                  | ((0x20U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                               >> 7U)) 
                                     | (0x18U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                 >> 2U))))),9);
        bufp->chgCData(oldp+102,(((0xc0U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                            << 4U)) 
                                  | ((0x20U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                               >> 7U)) 
                                     | (0x1cU & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                                 >> 2U))))),8);
        bufp->chgCData(oldp+103,(((0xc0U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                            << 1U)) 
                                  | (0x38U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                              >> 7U)))),8);
        bufp->chgCData(oldp+104,(((0x40U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                            << 1U)) 
                                  | ((0x38U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                               >> 7U)) 
                                     | (4U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                              >> 4U))))),7);
        bufp->chgCData(oldp+105,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__fn_decompress_inst_BIT_12_CONCAT_fn_decompress_ETC___05Fq1),6);
        bufp->chgCData(oldp+106,(((0xeU & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                           >> 6U)) 
                                  | (1U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                           >> 0xcU)))),4);
        bufp->chgCData(oldp+107,(((6U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                         >> 6U)) | 
                                  (1U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                         >> 0xcU)))),3);
        bufp->chgCData(oldp+108,(((6U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                         >> 4U)) | 
                                  (1U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                         >> 0xcU)))),3);
        bufp->chgCData(oldp+109,(((2U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                         >> 4U)) | 
                                  (1U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353 
                                         >> 0xcU)))),2);
        bufp->chgBit(oldp+110,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__instance_fn_decompress_0__DOT__fn_decompress_inst_BIT_10_AND_fn_decompress_in_ETC___05F_d277));
        bufp->chgBit(oldp+111,(((IData)((0x22U == (0x23U 
                                                   & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353))) 
                                | ((IData)((0x12U == 
                                            (0x13U 
                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353))) 
                                   | ((IData)((0xaU 
                                               == (0xbU 
                                                   & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353))) 
                                      | (6U == (7U 
                                                & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__final_instruction___05Fh3353)))))));
        bufp->chgWData(oldp+112,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op1_port1___05Fread),75);
        bufp->chgWData(oldp+115,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op3_D_IN),75);
        bufp->chgCData(oldp+118,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2type_D_IN),2);
        bufp->chgBit(oldp+119,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2_EN_common_ma_clear_stall) 
                                | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2_tx_tx_commitlog_enq_ena))));
        bufp->chgBit(oldp+120,(((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2_EN_common_ma_clear_stall)) 
                                & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__MUX_rg_stall_write_1___05FVAL_2))));
        bufp->chgBit(oldp+121,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__MUX_rg_stall_write_1___05FVAL_2));
        bufp->chgBit(oldp+122,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__CAN_FIRE_RL_rl_mbox));
        bufp->chgBit(oldp+123,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__MUX_tx_commitlog_w_data_wset_1___05FPSEL_2));
        bufp->chgCData(oldp+124,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_1_port1___05Fread),5);
        bufp->chgCData(oldp+125,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_10_port1___05Fread),5);
        bufp->chgCData(oldp+126,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_11_port1___05Fread),5);
        bufp->chgCData(oldp+127,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_12_port1___05Fread),5);
        bufp->chgCData(oldp+128,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_13_port1___05Fread),5);
        bufp->chgCData(oldp+129,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_14_port1___05Fread),5);
        bufp->chgCData(oldp+130,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_15_port1___05Fread),5);
        bufp->chgCData(oldp+131,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_16_port1___05Fread),5);
        bufp->chgCData(oldp+132,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_17_port1___05Fread),5);
        bufp->chgCData(oldp+133,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_18_port1___05Fread),5);
        bufp->chgCData(oldp+134,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_19_port1___05Fread),5);
        bufp->chgCData(oldp+135,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_2_port1___05Fread),5);
        bufp->chgCData(oldp+136,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_20_port1___05Fread),5);
        bufp->chgCData(oldp+137,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_21_port1___05Fread),5);
        bufp->chgCData(oldp+138,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_22_port1___05Fread),5);
        bufp->chgCData(oldp+139,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_23_port1___05Fread),5);
        bufp->chgCData(oldp+140,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_24_port1___05Fread),5);
        bufp->chgCData(oldp+141,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_25_port1___05Fread),5);
        bufp->chgCData(oldp+142,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_26_port1___05Fread),5);
        bufp->chgCData(oldp+143,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_27_port1___05Fread),5);
        bufp->chgCData(oldp+144,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_28_port1___05Fread),5);
        bufp->chgCData(oldp+145,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_29_port1___05Fread),5);
        bufp->chgCData(oldp+146,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_3_port1___05Fread),5);
        bufp->chgCData(oldp+147,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_30_port1___05Fread),5);
        bufp->chgCData(oldp+148,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_31_port1___05Fread),5);
        bufp->chgCData(oldp+149,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_4_port1___05Fread),5);
        bufp->chgCData(oldp+150,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_5_port1___05Fread),5);
        bufp->chgCData(oldp+151,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_6_port1___05Fread),5);
        bufp->chgCData(oldp+152,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_7_port1___05Fread),5);
        bufp->chgCData(oldp+153,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_8_port1___05Fread),5);
        bufp->chgCData(oldp+154,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_9_port1___05Fread),5);
        __Vtemp_6[0U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_core_response_rv_port1___05Fread[0U];
        __Vtemp_6[1U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_core_response_rv_port1___05Fread[1U];
        __Vtemp_6[2U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_core_response_rv_port1___05Fread[2U];
        __Vtemp_6[3U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_core_response_rv_port1___05Fread[3U];
        __Vtemp_6[4U] = (0x10U | (0xfU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_core_response_rv_port1___05Fread[4U]));
        bufp->chgWData(oldp+155,(__Vtemp_6),133);
        bufp->chgWData(oldp+160,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread),133);
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_handle_memory) {
            __Vtemp_8[0U] = 0U;
            __Vtemp_8[1U] = 0U;
            __Vtemp_8[2U] = 0U;
            __Vtemp_8[3U] = 0U;
            __Vtemp_8[4U] = 0U;
        } else {
            __Vtemp_8[0U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[0U];
            __Vtemp_8[1U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U];
            __Vtemp_8[2U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U];
            __Vtemp_8[3U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[3U];
            __Vtemp_8[4U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[4U];
        }
        bufp->chgWData(oldp+165,(__Vtemp_8),133);
        bufp->chgBit(oldp+170,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4__DOT__CAN_FIRE_RL_rl_handle_memory));
        __Vtemp_10[0U] = (IData)((((QData)((IData)(
                                                   vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[4U])) 
                                   << 0x3cU) | (((QData)((IData)(
                                                                 vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[3U])) 
                                                 << 0x1cU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U])) 
                                                   >> 4U))));
        __Vtemp_10[1U] = (IData)(((((QData)((IData)(
                                                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[4U])) 
                                    << 0x3cU) | (((QData)((IData)(
                                                                  vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[3U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U])) 
                                                    >> 4U))) 
                                  >> 0x20U));
        __Vtemp_10[2U] = (0x7fU & ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[2U] 
                                    << 4U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4__DOT__ff_memory_response_rv_port1___05Fread[1U] 
                                              >> 0x1cU)));
        bufp->chgWData(oldp+171,(__Vtemp_10),72);
        bufp->chgBit(oldp+174,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4__DOT__MUX_tx_baseout_w_data_wset_1___05FSEL_1));
        bufp->chgBit(oldp+175,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage4__DOT__MUX_tx_trapout_w_data_wset_1___05FSEL_1));
        bufp->chgWData(oldp+176,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__wr_flush_wget),67);
        bufp->chgBit(oldp+179,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__wr_flush_whas));
        bufp->chgBit(oldp+180,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_csr_wait_EN));
        bufp->chgBit(oldp+181,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_epoch_D_IN));
        bufp->chgBit(oldp+182,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__MUX_rg_epoch_write_1___05FSEL_1) 
                                | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT____VdfgRegularize_h708c710d_0_23))));
        bufp->chgQData(oldp+183,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_mav_upd_on_trap),64);
        bufp->chgQData(oldp+185,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_mav_upd_on_trap_tval),64);
        bufp->chgCData(oldp+187,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_mav_upd_on_trap_cause),7);
        bufp->chgBit(oldp+188,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_EN_ma_core_req));
        bufp->chgBit(oldp+189,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_EN_mav_upd_on_ret));
        bufp->chgBit(oldp+190,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_EN_mav_upd_on_trap));
        __Vtemp_12[0U] = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_mav_upd_on_trap) 
                          << 1U);
        __Vtemp_12[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_mav_upd_on_trap) 
                           >> 0x1fU) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_mav_upd_on_trap 
                                                 >> 0x20U)) 
                                        << 1U));
        __Vtemp_12[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_mav_upd_on_trap 
                                         >> 0x20U)) 
                                >> 0x1fU));
        bufp->chgWData(oldp+191,(__Vtemp_12),67);
        bufp->chgBit(oldp+194,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__MUX_csr_mav_upd_on_trap_1___05FSEL_1));
        bufp->chgBit(oldp+195,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__MUX_rg_epoch_write_1___05FSEL_1));
        bufp->chgBit(oldp+196,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__MUX_wr_flush_wset_1___05FSEL_1));
        bufp->chgQData(oldp+197,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mcycle_port1___05Fwrite_1),64);
        bufp->chgQData(oldp+199,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_minstret_port0___05Fwrite_1),64);
        bufp->chgQData(oldp+201,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mcycle_D_IN),64);
        bufp->chgQData(oldp+203,((1ULL + vlSelf->mkTbSoc__DOT__soc_soc_sb_sbread_mv_csr_minstret)),64);
        bufp->chgCData(oldp+205,((0x1fU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mcause_exception_code_wlrl_write_1___05FSEL_1)
                                            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh17529)
                                            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_mav_upd_on_trap_cause)))),5);
        bufp->chgBit(oldp+206,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mcause_exception_code_wlrl_EN));
        bufp->chgBit(oldp+207,((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mcause_exception_code_wlrl_write_1___05FSEL_1)
                                       ? (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh17529 
                                                  >> 0x3fU))
                                       : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_mav_upd_on_trap_cause) 
                                          >> 6U)))));
        bufp->chgIData(oldp+208,((0x1fU & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__word___05Fh20079))),32);
        bufp->chgQData(oldp+209,((QData)((IData)(((0xf000U 
                                                   & ((IData)(
                                                              (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__IF_ma_core_req_req_BITS_2_TO_1_20_EQ_1_21_THEN_ETC___05F_d792 
                                                               >> 0xcU)) 
                                                      << 0xcU)) 
                                                  | (0x7ffU 
                                                     & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__IF_ma_core_req_req_BITS_2_TO_1_20_EQ_1_21_THEN_ETC___05F_d792)))))),64);
        bufp->chgBit(oldp+211,((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh20343 
                                              >> 6U)))));
        bufp->chgBit(oldp+212,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_menvcfg_cbcfe_EN));
        bufp->chgCData(oldp+213,((3U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh20343 
                                                >> 4U)))),2);
        bufp->chgBit(oldp+214,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_menvcfg_cbcfe_EN) 
                                & ((0U == (3U & (IData)(
                                                        (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh20343 
                                                         >> 4U)))) 
                                   | ((1U == (3U & (IData)(
                                                           (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh20343 
                                                            >> 4U)))) 
                                      | (3U == (3U 
                                                & (IData)(
                                                          (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh20343 
                                                           >> 4U)))))))));
        bufp->chgBit(oldp+215,((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh20343 
                                              >> 7U)))));
        bufp->chgBit(oldp+216,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mepc_warl_write_1___05FSEL_1) 
                                | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mcause_exception_code_wlrl_write_1___05FSEL_2))));
        bufp->chgQData(oldp+217,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mideleg_warl_D_IN),64);
        bufp->chgBit(oldp+219,((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh15963 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+220,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mie_debug_interrupt_EN));
        bufp->chgBit(oldp+221,((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh15963 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+222,((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh15963 
                                              >> 3U)))));
        bufp->chgBit(oldp+223,((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh15963 
                                              >> 7U)))));
        bufp->chgBit(oldp+224,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mie_seie_EN));
        bufp->chgBit(oldp+225,((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh15963 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+226,((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh15963 
                                              >> 2U)))));
        bufp->chgBit(oldp+227,((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh15963 
                                              >> 6U)))));
        bufp->chgBit(oldp+228,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mip_seip_EN));
        bufp->chgIData(oldp+229,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_misa_extensions_warl_D_IN),26);
        bufp->chgBit(oldp+230,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_misa_extensions_warl_EN));
        bufp->chgCData(oldp+231,((3U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__IF_ma_core_req_req_BITS_2_TO_1_20_EQ_1_21_THEN_ETC___05F_d428 
                                                >> 0x3eU)))),2);
        bufp->chgBit(oldp+232,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_misa_extensions_warl_EN) 
                                & (0x8000000000000000ULL 
                                   == (0xc000000000000000ULL 
                                       & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__IF_ma_core_req_req_BITS_2_TO_1_20_EQ_1_21_THEN_ETC___05F_d428)))));
        bufp->chgQData(oldp+233,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mscratch_warl_D_IN),64);
        bufp->chgCData(oldp+235,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mstatus_fs_warl_D_IN),2);
        bufp->chgBit(oldp+236,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mstatus_fs_warl_EN));
        bufp->chgBit(oldp+237,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mstatus_mie_D_IN));
        bufp->chgBit(oldp+238,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mstatus_mie_EN));
        bufp->chgBit(oldp+239,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mstatus_mpie_D_IN));
        bufp->chgCData(oldp+240,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mstatus_mpp_warl_D_IN),2);
        bufp->chgBit(oldp+241,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mstatus_mpp_warl_EN));
        bufp->chgBit(oldp+242,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mstatus_tsr_EN) 
                                & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh13301 
                                           >> 0x11U)))));
        bufp->chgBit(oldp+243,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mstatus_mxr_D_IN));
        bufp->chgBit(oldp+244,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mstatus_sie_D_IN));
        bufp->chgBit(oldp+245,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mstatus_sie_EN));
        bufp->chgBit(oldp+246,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mstatus_spie_D_IN));
        bufp->chgBit(oldp+247,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mstatus_spp_D_IN));
        bufp->chgBit(oldp+248,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mstatus_sum_D_IN));
        bufp->chgBit(oldp+249,((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh13301 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+250,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mstatus_tsr_EN));
        bufp->chgBit(oldp+251,((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh13301 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+252,((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh13301 
                                              >> 0x15U)))));
        bufp->chgQData(oldp+253,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mtval_warl_write_1___05FSEL_1)
                                   ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mtval_warl_write_1___05FVAL_1
                                   : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_mav_upd_on_trap_tval)),64);
        bufp->chgBit(oldp+255,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mtval_warl_write_1___05FSEL_1) 
                                | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mcause_exception_code_wlrl_write_1___05FSEL_2))));
        bufp->chgQData(oldp+256,((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh13160 
                                  >> 2U)),62);
        bufp->chgBit(oldp+258,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mtvec_base_warl_EN));
        bufp->chgCData(oldp+259,((3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh13160))),2);
        bufp->chgBit(oldp+260,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mtvec_base_warl_EN) 
                                & (1U >= (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh13160))))));
        bufp->chgIData(oldp+261,((0x3ffffffeU & ((IData)(
                                                         (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__word___05Fh19446 
                                                          >> 1U)) 
                                                 << 1U))),30);
        bufp->chgIData(oldp+262,((0x3ffffffeU & ((IData)(
                                                         (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__word___05Fh19608 
                                                          >> 1U)) 
                                                 << 1U))),30);
        bufp->chgIData(oldp+263,((0x3ffffffeU & ((IData)(
                                                         (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__word___05Fh19765 
                                                          >> 1U)) 
                                                 << 1U))),30);
        bufp->chgIData(oldp+264,((0x3ffffffeU & ((IData)(
                                                         (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__word___05Fh19922 
                                                          >> 1U)) 
                                                 << 1U))),30);
        bufp->chgCData(oldp+265,((0xffU & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh18324))),8);
        bufp->chgCData(oldp+266,((0xffU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh18324 
                                                   >> 8U)))),8);
        bufp->chgCData(oldp+267,((0xffU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh18324 
                                                   >> 0x10U)))),8);
        bufp->chgCData(oldp+268,((0xffU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh18324 
                                                   >> 0x18U)))),8);
        bufp->chgSData(oldp+269,((0xffffU & (IData)(
                                                    (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__IF_ma_core_req_req_BITS_2_TO_1_20_EQ_1_21_THEN_ETC___05F_d942 
                                                     >> 0x2cU)))),16);
        bufp->chgBit(oldp+270,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_satp_mode_warl_EN) 
                                & (0xffU >= (0xffffU 
                                             & (IData)(
                                                       (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__IF_ma_core_req_req_BITS_2_TO_1_20_EQ_1_21_THEN_ETC___05F_d942 
                                                        >> 0x2cU)))))));
        bufp->chgCData(oldp+271,((0xfU & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__IF_ma_core_req_req_BITS_2_TO_1_20_EQ_1_21_THEN_ETC___05F_d942 
                                                  >> 0x3cU)))),4);
        bufp->chgBit(oldp+272,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_satp_mode_warl_EN));
        bufp->chgQData(oldp+273,((0xfffffffffffULL 
                                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__IF_ma_core_req_req_BITS_2_TO_1_20_EQ_1_21_THEN_ETC___05F_d942)),44);
        bufp->chgCData(oldp+275,((0x1fU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_scause_exception_code_wlrl_write_1___05FSEL_1)
                                            ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh17284)
                                            : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_mav_upd_on_trap_cause)))),5);
        bufp->chgBit(oldp+276,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_scause_exception_code_wlrl_EN));
        bufp->chgBit(oldp+277,((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_scause_exception_code_wlrl_write_1___05FSEL_1)
                                       ? (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh17284 
                                                  >> 0x3fU))
                                       : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_mav_upd_on_trap_cause) 
                                          >> 6U)))));
        bufp->chgIData(oldp+278,((0x1fU & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__word___05Fh20213))),32);
        bufp->chgBit(oldp+279,((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh20608 
                                              >> 6U)))));
        bufp->chgBit(oldp+280,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_senvcfg_cbcfe_EN));
        bufp->chgCData(oldp+281,((3U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh20608 
                                                >> 4U)))),2);
        bufp->chgBit(oldp+282,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_senvcfg_cbcfe_EN) 
                                & ((0U == (3U & (IData)(
                                                        (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh20608 
                                                         >> 4U)))) 
                                   | ((1U == (3U & (IData)(
                                                           (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh20608 
                                                            >> 4U)))) 
                                      | (3U == (3U 
                                                & (IData)(
                                                          (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh20608 
                                                           >> 4U)))))))));
        bufp->chgBit(oldp+283,((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh20608 
                                              >> 7U)))));
        bufp->chgBit(oldp+284,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_sepc_warl_write_1___05FSEL_1) 
                                | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mstatus_sie_write_1___05FSEL_3))));
        bufp->chgQData(oldp+285,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_sscratch_warl_D_IN),64);
        bufp->chgQData(oldp+287,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_stval_warl_write_1___05FSEL_1)
                                   ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_stval_warl_write_1___05FVAL_1
                                   : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_mav_upd_on_trap_tval)),64);
        bufp->chgBit(oldp+289,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_stval_warl_write_1___05FSEL_1) 
                                | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mstatus_sie_write_1___05FSEL_3))));
        bufp->chgQData(oldp+290,((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh13019 
                                  >> 2U)),62);
        bufp->chgBit(oldp+292,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_stvec_base_warl_EN));
        bufp->chgCData(oldp+293,((3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh13019))),2);
        bufp->chgBit(oldp+294,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_stvec_base_warl_EN) 
                                & (1U >= (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh13019))))));
        bufp->chgCData(oldp+295,(((0x40U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_mav_upd_on_trap_cause))
                                   ? 3U : (7U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_mav_upd_on_trap_cause)))),3);
        bufp->chgBit(oldp+296,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp2_rg_dcsr_cause_EN));
        bufp->chgBit(oldp+297,((1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_rg_debug_mode_write_1___05FSEL_1)))));
        bufp->chgBit(oldp+298,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_rg_debug_mode_write_1___05FSEL_1) 
                                | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp2_rg_dcsr_cause_EN))));
        bufp->chgBit(oldp+299,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_rg_prv_write_1___05FSEL_1) 
                                | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_EN_mav_upd_on_trap) 
                                   & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__NOT_mav_upd_on_trap_cause_BIT_6_073_074_AND_ma_ETC___05F_d1100) 
                                      | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__mav_upd_on_trap_cause_BIT_6_073_OR_NOT_mav_upd_ETC___05F_d1134))))));
        bufp->chgBit(oldp+300,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_ff_fwd_request_ENQ));
        bufp->chgQData(oldp+301,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mtval_warl_write_1___05FVAL_1),64);
        bufp->chgQData(oldp+303,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_stval_warl_write_1___05FVAL_1),64);
        bufp->chgQData(oldp+305,((0xfffffffffffffffeULL 
                                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__CASE_ma_core_req_req_BITS_2_TO_1_1_ma_core_req_ETC___05Fq1)),64);
        bufp->chgQData(oldp+307,((0xfffffffffffffffeULL 
                                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__CASE_ma_core_req_req_BITS_2_TO_1_1_ma_core_req_ETC___05Fq2)),64);
        bufp->chgCData(oldp+309,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__NOT_mav_upd_on_trap_cause_BIT_6_073_074_AND_ma_ETC___05F_d1100)
                                   ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT____VdfgRegularize_h1a88907d_0_3)
                                       ? 3U : 1U) : 3U)),2);
        bufp->chgBit(oldp+310,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mcause_exception_code_wlrl_write_1___05FSEL_1));
        bufp->chgBit(oldp+311,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mcause_exception_code_wlrl_write_1___05FSEL_2));
        bufp->chgBit(oldp+312,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mepc_warl_write_1___05FSEL_1));
        bufp->chgBit(oldp+313,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mstatus_mie_write_1___05FSEL_2));
        bufp->chgBit(oldp+314,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mstatus_mpp_warl_write_1___05FSEL_1));
        bufp->chgBit(oldp+315,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mstatus_mpp_warl_write_1___05FSEL_3));
        bufp->chgBit(oldp+316,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mstatus_sie_write_1___05FSEL_1));
        bufp->chgBit(oldp+317,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mstatus_sie_write_1___05FSEL_3));
        bufp->chgBit(oldp+318,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mstatus_sie_write_1___05FVAL_2));
        bufp->chgBit(oldp+319,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mstatus_spie_write_1___05FVAL_2));
        bufp->chgBit(oldp+320,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mstatus_spp_write_1___05FVAL_2));
        bufp->chgBit(oldp+321,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_mtval_warl_write_1___05FSEL_1));
        bufp->chgBit(oldp+322,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_scause_exception_code_wlrl_write_1___05FSEL_1));
        bufp->chgBit(oldp+323,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_sepc_warl_write_1___05FSEL_1));
        bufp->chgBit(oldp+324,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_grp1_rg_stval_warl_write_1___05FSEL_1));
        bufp->chgBit(oldp+325,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_rg_debug_mode_write_1___05FSEL_1));
        bufp->chgBit(oldp+326,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_rg_prv_write_1___05FSEL_1));
        bufp->chgQData(oldp+327,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__CASE_ma_core_req_req_BITS_2_TO_1_1_ma_core_req_ETC___05Fq1),64);
        bufp->chgQData(oldp+329,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__CASE_ma_core_req_req_BITS_2_TO_1_1_ma_core_req_ETC___05Fq2),64);
        bufp->chgQData(oldp+331,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__IF_ma_core_req_req_BITS_2_TO_1_20_EQ_1_21_THEN_ETC___05F_d428),64);
        bufp->chgQData(oldp+333,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__IF_ma_core_req_req_BITS_2_TO_1_20_EQ_1_21_THEN_ETC___05F_d773),64);
        bufp->chgQData(oldp+335,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__IF_ma_core_req_req_BITS_2_TO_1_20_EQ_1_21_THEN_ETC___05F_d792),64);
        bufp->chgQData(oldp+337,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__IF_ma_core_req_req_BITS_2_TO_1_20_EQ_1_21_THEN_ETC___05F_d942),64);
        bufp->chgQData(oldp+339,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__word___05Fh15670),64);
        bufp->chgQData(oldp+341,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__word___05Fh19446),64);
        bufp->chgQData(oldp+343,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__word___05Fh19608),64);
        bufp->chgQData(oldp+345,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__word___05Fh19765),64);
        bufp->chgQData(oldp+347,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__word___05Fh19922),64);
        bufp->chgQData(oldp+349,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__word___05Fh20079),64);
        bufp->chgQData(oldp+351,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__word___05Fh20213),64);
        bufp->chgQData(oldp+353,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh13019),64);
        bufp->chgQData(oldp+355,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh13160),64);
        bufp->chgQData(oldp+357,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh13301),64);
        bufp->chgQData(oldp+359,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh14322),64);
        bufp->chgQData(oldp+361,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh15963),64);
        bufp->chgQData(oldp+363,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh16729),64);
        bufp->chgQData(oldp+365,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh17284),64);
        bufp->chgQData(oldp+367,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh17529),64);
        bufp->chgQData(oldp+369,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh18324),64);
        bufp->chgQData(oldp+371,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh20343),64);
        bufp->chgQData(oldp+373,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__x___05Fh20608),64);
        bufp->chgQData(oldp+375,(((IData)((3U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_mav_upd_on_trap_cause)))
                                   ? 0x800ULL : 0x808ULL)),64);
        bufp->chgQData(oldp+377,((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__lv_tvec___05Fh24075 
                                  + (QData)((IData)(
                                                    (0xfcU 
                                                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_mav_upd_on_trap_cause) 
                                                        << 2U)))))),64);
        bufp->chgQData(oldp+379,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__lv_tvec___05Fh24075),64);
        bufp->chgQData(oldp+381,((0x7ffffffffffffffeULL 
                                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__v___05Fh21520)),63);
        bufp->chgQData(oldp+383,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__v___05Fh21520),63);
        bufp->chgQData(oldp+385,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__v___05Fh21811),63);
        bufp->chgBit(oldp+387,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__NOT_grp1_rg_mideleg_warl_61_SRL_mav_upd_on_tra_ETC___05F_d1132));
        bufp->chgBit(oldp+388,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__NOT_mav_upd_on_trap_cause_BIT_6_073_074_AND_ma_ETC___05F_d1100));
        bufp->chgBit(oldp+389,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_medeleg_warl_62_SRL_mav_upd_on_trap_ca_ETC___05F_d1093));
        bufp->chgBit(oldp+390,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mideleg_warl_61_SRL_mav_upd_on_trap_ca_ETC___05F_d1098));
        bufp->chgBit(oldp+391,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT____VdfgRegularize_h1a88907d_0_36) 
                                & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mideleg_warl_61_SRL_mav_upd_on_trap_ca_ETC___05F_d1098))));
        bufp->chgBit(oldp+392,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__mav_upd_on_trap_cause_BIT_6_073_OR_NOT_mav_upd_ETC___05F_d1134));
        bufp->chgBit(oldp+393,((1U & (~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_mav_upd_on_trap_cause) 
                                         >> 6U)))));
        bufp->chgBit(oldp+394,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_end_address_EN));
        bufp->chgBit(oldp+395,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_end_address_EN) 
                                | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__ff_lower_order_bits_DEQ))));
        bufp->chgBit(oldp+396,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__ff_lower_order_bits_DEQ));
        bufp->chgBit(oldp+397,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_uart_rXmitDataOut_D_IN));
        bufp->chgBit(oldp+398,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_uart_rXmitDataOut_D_IN));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x2aU] 
                     | vlSelf->__Vm_traceActivity[0x2cU]))) {
        __Vtemp_14[0U] = (((IData)((((QData)((IData)(
                                                     vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[0U])))) 
                           << 1U) | (1U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op1_port1___05Fread[0U]));
        __Vtemp_14[1U] = (((IData)((((QData)((IData)(
                                                     vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[0U])))) 
                           >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                   vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[0U]))) 
                                                 >> 0x20U)) 
                                        << 1U));
        __Vtemp_14[2U] = ((0x7feU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op1_port1___05Fread[2U]) 
                          | ((IData)(((((QData)((IData)(
                                                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[0U]))) 
                                      >> 0x20U)) >> 0x1fU));
        bufp->chgWData(oldp+399,(__Vtemp_14),75);
        if (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__registerfile_EN_commit_rd) 
             & (((0x1fU & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op1_port1___05Fread[2U] 
                           >> 1U)) == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])) 
                & (0U != (0x1fU & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op1_port1___05Fread[2U] 
                                   >> 1U)))))) {
            __Vtemp_18[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[0U])))) 
                               << 1U) | (1U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op1_port1___05Fread[0U]));
            __Vtemp_18[1U] = (((IData)((((QData)((IData)(
                                                         vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[0U])))) 
                               >> 0x1fU) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[0U]))) 
                                                     >> 0x20U)) 
                                            << 1U));
            __Vtemp_18[2U] = ((0x7feU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op1_port1___05Fread[2U]) 
                              | ((IData)(((((QData)((IData)(
                                                            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[0U]))) 
                                          >> 0x20U)) 
                                 >> 0x1fU));
        } else {
            __Vtemp_18[0U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op1_port1___05Fread[0U];
            __Vtemp_18[1U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op1_port1___05Fread[1U];
            __Vtemp_18[2U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op1_port1___05Fread[2U];
        }
        bufp->chgWData(oldp+402,(__Vtemp_18),75);
        __Vtemp_19[1U] = (((IData)(((((0x1fU & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U] 
                                                >> 1U)) 
                                      == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])) 
                                     & ((0U != (0x1fU 
                                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U] 
                                                   >> 1U))) 
                                        & (0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2type_D_IN))))
                                     ? (((QData)((IData)(
                                                         vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[0U])))
                                     : (((QData)((IData)(
                                                         vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[1U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[0U])) 
                                              >> 1U))))) 
                           >> 0x1fU) | ((IData)((((
                                                   ((0x1fU 
                                                     & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U] 
                                                        >> 1U)) 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])) 
                                                   & ((0U 
                                                       != 
                                                       (0x1fU 
                                                        & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U] 
                                                           >> 1U))) 
                                                      & (0U 
                                                         == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2type_D_IN))))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[0U])))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U])) 
                                                    << 0x3fU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[1U])) 
                                                       << 0x1fU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[0U])) 
                                                         >> 1U)))) 
                                                 >> 0x20U)) 
                                        << 1U));
        __Vtemp_20[0U] = (((IData)(((((0x1fU & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U] 
                                                >> 1U)) 
                                      == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])) 
                                     & ((0U != (0x1fU 
                                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U] 
                                                   >> 1U))) 
                                        & (0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2type_D_IN))))
                                     ? (((QData)((IData)(
                                                         vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[0U])))
                                     : (((QData)((IData)(
                                                         vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[1U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[0U])) 
                                              >> 1U))))) 
                           << 1U) | (1U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[0U]));
        __Vtemp_20[1U] = __Vtemp_19[1U];
        __Vtemp_20[2U] = ((0x7feU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U]) 
                          | ((IData)((((((0x1fU & (
                                                   vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U] 
                                                   >> 1U)) 
                                         == (0x1fU 
                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])) 
                                        & ((0U != (0x1fU 
                                                   & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U] 
                                                      >> 1U))) 
                                           & (0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2type_D_IN))))
                                        ? (((QData)((IData)(
                                                            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[0U])))
                                        : (((QData)((IData)(
                                                            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U])) 
                                            << 0x3fU) 
                                           | (((QData)((IData)(
                                                               vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[1U])) 
                                               << 0x1fU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[0U])) 
                                                 >> 1U)))) 
                                      >> 0x20U)) >> 0x1fU));
        bufp->chgWData(oldp+405,(__Vtemp_20),75);
        __Vtemp_21[1U] = (((IData)(((((0x1fU & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U] 
                                                >> 1U)) 
                                      == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])) 
                                     & ((0U != (0x1fU 
                                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U] 
                                                   >> 1U))) 
                                        & (0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2type_D_IN))))
                                     ? (((QData)((IData)(
                                                         vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[0U])))
                                     : (((QData)((IData)(
                                                         vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[1U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[0U])) 
                                              >> 1U))))) 
                           >> 0x1fU) | ((IData)((((
                                                   ((0x1fU 
                                                     & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U] 
                                                        >> 1U)) 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])) 
                                                   & ((0U 
                                                       != 
                                                       (0x1fU 
                                                        & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U] 
                                                           >> 1U))) 
                                                      & (0U 
                                                         == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2type_D_IN))))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[0U])))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U])) 
                                                    << 0x3fU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[1U])) 
                                                       << 0x1fU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[0U])) 
                                                         >> 1U)))) 
                                                 >> 0x20U)) 
                                        << 1U));
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__registerfile_EN_commit_rd) {
            __Vtemp_23[0U] = (((IData)(((((0x1fU & 
                                           (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U] 
                                            >> 1U)) 
                                          == (0x1fU 
                                              & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])) 
                                         & ((0U != 
                                             (0x1fU 
                                              & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U] 
                                                 >> 1U))) 
                                            & (0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2type_D_IN))))
                                         ? (((QData)((IData)(
                                                             vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[0U])))
                                         : (((QData)((IData)(
                                                             vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U])) 
                                             << 0x3fU) 
                                            | (((QData)((IData)(
                                                                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[1U])) 
                                                << 0x1fU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[0U])) 
                                                  >> 1U))))) 
                               << 1U) | (1U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[0U]));
            __Vtemp_23[1U] = __Vtemp_21[1U];
            __Vtemp_23[2U] = ((0x7feU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U]) 
                              | ((IData)((((((0x1fU 
                                              & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U] 
                                                 >> 1U)) 
                                             == (0x1fU 
                                                 & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])) 
                                            & ((0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U] 
                                                    >> 1U))) 
                                               & (0U 
                                                  == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2type_D_IN))))
                                            ? (((QData)((IData)(
                                                                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[0U])))
                                            : (((QData)((IData)(
                                                                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U])) 
                                                << 0x3fU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[1U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[0U])) 
                                                     >> 1U)))) 
                                          >> 0x20U)) 
                                 >> 0x1fU));
        } else {
            __Vtemp_23[0U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[0U];
            __Vtemp_23[1U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[1U];
            __Vtemp_23[2U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U];
        }
        bufp->chgWData(oldp+408,(__Vtemp_23),75);
        bufp->chgBit(oldp+411,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__registerfile_EN_commit_rd) 
                                & (((0x1fU & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op1_port1___05Fread[2U] 
                                              >> 1U)) 
                                    == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op1_port1___05Fread[2U] 
                                                >> 1U)))))));
        bufp->chgQData(oldp+412,(((((0x1fU & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U] 
                                              >> 1U)) 
                                    == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])) 
                                   & ((0U != (0x1fU 
                                              & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U] 
                                                 >> 1U))) 
                                      & (0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2type_D_IN))))
                                   ? (((QData)((IData)(
                                                       vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[0U])))
                                   : (((QData)((IData)(
                                                       vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[2U])) 
                                       << 0x3fU) | 
                                      (((QData)((IData)(
                                                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[1U])) 
                                        << 0x1fU) | 
                                       ((QData)((IData)(
                                                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread[0U])) 
                                        >> 1U))))),64);
        bufp->chgQData(oldp+414,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_EN_ma_core_req)
                                   ? (((QData)((IData)(
                                                       vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[2U])) 
                                       << 0x3fU) | 
                                      (((QData)((IData)(
                                                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[1U])) 
                                        << 0x1fU) | 
                                       ((QData)((IData)(
                                                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[0U])) 
                                        >> 1U))) : 0ULL)),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2bU])) {
        bufp->chgQData(oldp+416,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__fifoMem[0]),37);
        bufp->chgQData(oldp+418,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__fifoMem[1]),37);
        bufp->chgQData(oldp+420,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__fifoMem[2]),37);
        bufp->chgQData(oldp+422,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__fifoMem[3]),37);
        bufp->chgQData(oldp+424,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__fifoMem[0]),37);
        bufp->chgQData(oldp+426,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__fifoMem[1]),37);
        bufp->chgQData(oldp+428,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__fifoMem[2]),37);
        bufp->chgQData(oldp+430,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__fifoMem[3]),37);
        bufp->chgQData(oldp+432,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__fifoMem[0]),37);
        bufp->chgQData(oldp+434,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__fifoMem[1]),37);
        bufp->chgQData(oldp+436,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__fifoMem[2]),37);
        bufp->chgQData(oldp+438,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__fifoMem[3]),37);
        bufp->chgQData(oldp+440,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__fifoMem[0]),37);
        bufp->chgQData(oldp+442,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__fifoMem[1]),37);
        bufp->chgQData(oldp+444,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__fifoMem[2]),37);
        bufp->chgQData(oldp+446,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__fifoMem[3]),37);
        bufp->chgIData(oldp+448,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_start_address),32);
        bufp->chgCData(oldp+449,((7U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_start_address)),3);
        bufp->chgQData(oldp+450,((0x8012ULL | ((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_start_address)) 
                                               << 0x14U))),52);
        bufp->chgIData(oldp+452,(((IData)(4U) + vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_start_address)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2cU])) {
        bufp->chgQData(oldp+453,(vlSelf->mkTbSoc__DOT__wdata___05Fh89444),64);
        bufp->chgBit(oldp+455,(vlSelf->mkTbSoc__DOT__NOT_IF_soc_soc_sb_commitlog___05F60_BITS_210_TO_20_ETC___05F_d1454));
        bufp->chgIData(oldp+456,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__wr_total_count_D_IN),31);
        bufp->chgBit(oldp+457,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_DEQ));
        bufp->chgBit(oldp+458,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_DEQ));
        bufp->chgBit(oldp+459,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_DEQ));
        bufp->chgWData(oldp+460,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd),74);
        bufp->chgBit(oldp+463,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release));
        bufp->chgBit(oldp+464,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_rx_rx_commitlog_deq_ena));
        bufp->chgBit(oldp+465,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_rx_rx_systemout_from_stage4_deq_ena));
        bufp->chgWData(oldp+466,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_op2_port1___05Fread),75);
        bufp->chgBit(oldp+469,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__registerfile_EN_commit_rd));
        bufp->chgBit(oldp+470,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_wfi_D_IN));
        bufp->chgBit(oldp+471,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__wr_resume_wfi_whas___05F74_AND_wr_resume_wfi_wget___05FETC___05F_d180));
        bufp->chgQData(oldp+472,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__registerfile__DOT__MUX_xrf_upd_1___05FSEL_1)
                                   ? (((QData)((IData)(
                                                       vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[0U])))
                                   : 0ULL)),64);
        bufp->chgBit(oldp+474,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__registerfile__DOT__MUX_xrf_upd_1___05FSEL_1));
        bufp->chgSData(oldp+475,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard_ma_release_rd_rls),9);
        bufp->chgCData(oldp+476,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_0_port1___05Fwrite_1),5);
        bufp->chgCData(oldp+477,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_1_D_IN),5);
        bufp->chgCData(oldp+478,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_10_D_IN),5);
        bufp->chgCData(oldp+479,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_11_D_IN),5);
        bufp->chgCData(oldp+480,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_12_D_IN),5);
        bufp->chgCData(oldp+481,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_13_D_IN),5);
        bufp->chgCData(oldp+482,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_14_D_IN),5);
        bufp->chgCData(oldp+483,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_15_D_IN),5);
        bufp->chgCData(oldp+484,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_16_D_IN),5);
        bufp->chgCData(oldp+485,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_17_D_IN),5);
        bufp->chgCData(oldp+486,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_18_D_IN),5);
        bufp->chgCData(oldp+487,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_19_D_IN),5);
        bufp->chgCData(oldp+488,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_2_D_IN),5);
        bufp->chgCData(oldp+489,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_20_D_IN),5);
        bufp->chgCData(oldp+490,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_21_D_IN),5);
        bufp->chgCData(oldp+491,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_22_D_IN),5);
        bufp->chgCData(oldp+492,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_23_D_IN),5);
        bufp->chgCData(oldp+493,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_24_D_IN),5);
        bufp->chgCData(oldp+494,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_25_D_IN),5);
        bufp->chgCData(oldp+495,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_26_D_IN),5);
        bufp->chgCData(oldp+496,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_27_D_IN),5);
        bufp->chgCData(oldp+497,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_28_D_IN),5);
        bufp->chgCData(oldp+498,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_29_D_IN),5);
        bufp->chgCData(oldp+499,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_3_D_IN),5);
        bufp->chgCData(oldp+500,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_30_D_IN),5);
        bufp->chgCData(oldp+501,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_31_D_IN),5);
        bufp->chgCData(oldp+502,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_4_D_IN),5);
        bufp->chgCData(oldp+503,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_5_D_IN),5);
        bufp->chgCData(oldp+504,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_6_D_IN),5);
        bufp->chgCData(oldp+505,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_7_D_IN),5);
        bufp->chgCData(oldp+506,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_8_D_IN),5);
        bufp->chgCData(oldp+507,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__rg_rf_board_9_D_IN),5);
        bufp->chgBit(oldp+508,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (1U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+509,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (0xaU == (0x1fU & 
                                            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+510,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (0xbU == (0x1fU & 
                                            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+511,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (0xcU == (0x1fU & 
                                            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+512,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (0xdU == (0x1fU & 
                                            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+513,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (0xeU == (0x1fU & 
                                            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+514,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (0xfU == (0x1fU & 
                                            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+515,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (0x10U == (0x1fU 
                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+516,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (0x11U == (0x1fU 
                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+517,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (0x12U == (0x1fU 
                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+518,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (0x13U == (0x1fU 
                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+519,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (2U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+520,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (0x14U == (0x1fU 
                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+521,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (0x15U == (0x1fU 
                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+522,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (0x16U == (0x1fU 
                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+523,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (0x17U == (0x1fU 
                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+524,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (0x18U == (0x1fU 
                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+525,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (0x19U == (0x1fU 
                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+526,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (0x1aU == (0x1fU 
                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+527,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (0x1bU == (0x1fU 
                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+528,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (0x1cU == (0x1fU 
                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+529,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (0x1dU == (0x1fU 
                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+530,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (3U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+531,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (0x1eU == (0x1fU 
                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+532,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (0x1fU == (0x1fU 
                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+533,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (4U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+534,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (5U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+535,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (6U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+536,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (7U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+537,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (8U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgBit(oldp+538,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3_EN_common_ma_sb_release) 
                                & (9U == (0x1fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5_common_mv_commit_rd[2U])))));
        bufp->chgCData(oldp+539,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BITS_4_TO_ETC___05F_d102),4);
        bufp->chgBit(oldp+540,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__sboard__DOT__SEL_ARR_rg_rf_board_0_port1___05Fread___05F6_BIT_0_06___05FETC___05F_d139));
        bufp->chgWData(oldp+541,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget),310);
        bufp->chgBit(oldp+551,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_EN_ma_incr_minstret));
        if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_EN_ma_incr_minstret) {
            __Vtemp_24[0U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[0U];
            __Vtemp_24[1U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[1U];
            __Vtemp_24[2U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[2U];
            __Vtemp_24[3U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[3U];
            __Vtemp_24[4U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[4U];
            __Vtemp_24[5U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[5U];
            __Vtemp_24[6U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[6U];
            __Vtemp_24[7U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[7U];
            __Vtemp_24[8U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[8U];
            __Vtemp_24[9U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog_1_wget[9U];
        } else {
            __Vtemp_24[0U] = VmkTbSoc_edited__ConstPool__CONST_h021016e1_0[0U];
            __Vtemp_24[1U] = VmkTbSoc_edited__ConstPool__CONST_h021016e1_0[1U];
            __Vtemp_24[2U] = VmkTbSoc_edited__ConstPool__CONST_h021016e1_0[2U];
            __Vtemp_24[3U] = VmkTbSoc_edited__ConstPool__CONST_h021016e1_0[3U];
            __Vtemp_24[4U] = VmkTbSoc_edited__ConstPool__CONST_h021016e1_0[4U];
            __Vtemp_24[5U] = VmkTbSoc_edited__ConstPool__CONST_h021016e1_0[5U];
            __Vtemp_24[6U] = VmkTbSoc_edited__ConstPool__CONST_h021016e1_0[6U];
            __Vtemp_24[7U] = VmkTbSoc_edited__ConstPool__CONST_h021016e1_0[7U];
            __Vtemp_24[8U] = VmkTbSoc_edited__ConstPool__CONST_h021016e1_0[8U];
            __Vtemp_24[9U] = VmkTbSoc_edited__ConstPool__CONST_h021016e1_0[9U];
        }
        bufp->chgWData(oldp+552,(__Vtemp_24),310);
        bufp->chgBit(oldp+562,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__MUX_rg_commitlog_1_wset_1___05FSEL_2));
        bufp->chgWData(oldp+563,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget),66);
        bufp->chgQData(oldp+566,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_minstret_D_IN),64);
        bufp->chgBit(oldp+568,((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__word___05Fh14925 
                                              >> 9U)))));
        bufp->chgBit(oldp+569,((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__word___05Fh14925 
                                              >> 5U)))));
        bufp->chgBit(oldp+570,((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__word___05Fh14925 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+571,((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__word___05Fh14925 
                                              >> 2U)))));
        bufp->chgBit(oldp+572,((1U & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__word___05Fh14925 
                                              >> 6U)))));
        bufp->chgQData(oldp+573,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__word___05Fh14925),64);
        bufp->chgQData(oldp+575,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__anydata___05Fh5518),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2dU])) {
        bufp->chgIData(oldp+577,(((0x20000U & vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__x_wget___05Fh5578)
                                   ? (0x38000000U | 
                                      ((0x10000U & vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__x_wget___05Fh5578)
                                        ? (3U | ((0x7000U 
                                                  & (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__x_wget___05Fh5578 
                                                     >> 8U)) 
                                                 | (0xf80U 
                                                    & (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__x_wget___05Fh5578 
                                                       << 7U))))
                                        : (0x23U | 
                                           ((0x1f00000U 
                                             & (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__x_wget___05Fh5578 
                                                << 0x14U)) 
                                            | (0x7000U 
                                               & (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__x_wget___05Fh5578 
                                                  >> 8U))))))
                                   : 0x13U)),32);
        bufp->chgIData(oldp+578,(((0x40000U & vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__x_wget___05Fh5578)
                                   ? 0x13U : 0x100073U)),32);
        bufp->chgIData(oldp+579,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v___05Fh95142),32);
        bufp->chgIData(oldp+580,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v___05Fh95396),32);
        bufp->chgIData(oldp+581,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh95715),32);
        bufp->chgIData(oldp+582,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__x_wget___05Fh5578),24);
        bufp->chgBit(oldp+583,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dtm_access_putCommand_put_BITS_1_TO_0_05_EQ_2___05FETC___05F_d1038));
        bufp->chgBit(oldp+584,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dtm_access_putCommand_put_BITS_1_TO_0_05_EQ_2___05FETC___05F_d1080));
        bufp->chgBit(oldp+585,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dtm_access_putCommand_put_BITS_40_TO_34_07_EQ___05FETC___05F_d828));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2eU])) {
        bufp->chgQData(oldp+586,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg_port0___05Fwrite_1),40);
        bufp->chgBit(oldp+588,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__bypass_sr_D_IN));
        bufp->chgIData(oldp+589,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dtmcontrol_shiftreg_D_IN),32);
        bufp->chgIData(oldp+590,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__idcode_sr_D_IN),32);
        bufp->chgCData(oldp+591,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate_D_IN),4);
        bufp->chgBit(oldp+592,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate_EN));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2fU])) {
        bufp->chgBit(oldp+593,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg_EN_port0___05Fwrite));
        bufp->chgBit(oldp+594,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__rg_dmihardreset_EN));
        bufp->chgBit(oldp+595,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmihardreset_generated_whas));
        bufp->chgBit(oldp+596,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmireset_generated_whas));
        bufp->chgBit(oldp+597,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__bypass_sr_EN));
        bufp->chgBit(oldp+598,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__capture_repsonse_from_dm_D_IN));
        bufp->chgBit(oldp+599,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__capture_repsonse_from_dm_EN));
        bufp->chgBit(oldp+600,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmistat_EN));
        bufp->chgBit(oldp+601,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__idcode_sr_EN));
        bufp->chgBit(oldp+602,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_status_EN));
        bufp->chgBit(oldp+603,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__rg_dmireset_D_IN));
        bufp->chgBit(oldp+604,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__request_to_DM_DEQ));
        bufp->chgBit(oldp+605,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__request_to_DM_ENQ));
        bufp->chgBit(oldp+606,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM_DEQ));
        bufp->chgBit(oldp+607,((1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmihardreset_generated_whas)))));
        bufp->chgBit(oldp+608,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__WILL_FIRE_RL_dmihardreset_generated));
        bufp->chgBit(oldp+609,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__MUX_capture_repsonse_from_dm_write_1___05FSEL_2));
        bufp->chgBit(oldp+610,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__IF_instruction_EQ_0x1_99_THEN_crossed_idcode_s_ETC___05F_d221));
        bufp->chgBit(oldp+611,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__crossed_instruction_wget___05F00_EQ_0x11_34_AND_re_ETC___05F_d148));
        bufp->chgBit(oldp+612,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate_EQ_3_8_AND_crossed_instruction_wget___05F_ETC___05F_d152));
        bufp->chgBit(oldp+613,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_11) 
                                | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_12))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x30U])) {
        bufp->chgSData(oldp+614,((0xffffU & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                             >> 9U))),16);
        bufp->chgBit(oldp+615,((1U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                      >> 8U))));
        bufp->chgBit(oldp+616,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__downreset_OUT_RST));
        bufp->chgWData(oldp+617,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg),72);
        bufp->chgBit(oldp+620,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dNotEmptyReg));
        bufp->chgCData(oldp+621,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dGDeqPtr),4);
        bufp->chgCData(oldp+622,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dGDeqPtr1),4);
        bufp->chgBit(oldp+623,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dNextNotEmpty));
        bufp->chgCData(oldp+624,((3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dGDeqPtr))),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x30U] 
                     | vlSelf->__Vm_traceActivity[0x36U]))) {
        bufp->chgBit(oldp+625,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                   >> 0x17U))));
        bufp->chgBit(oldp+626,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                   >> 0x11U))));
        bufp->chgBit(oldp+627,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                   >> 0x12U))));
        bufp->chgBit(oldp+628,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                   >> 0xeU))));
        bufp->chgBit(oldp+629,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                   >> 0xdU))));
        bufp->chgBit(oldp+630,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                   >> 8U))));
        bufp->chgCData(oldp+631,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1)
                                   ? (3U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                            >> 0xaU))
                                   : 0U)),2);
        bufp->chgBit(oldp+632,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                   >> 0xcU))));
        bufp->chgBit(oldp+633,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                   >> 9U))));
        bufp->chgBit(oldp+634,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                   >> 0xfU))));
        bufp->chgBit(oldp+635,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                   >> 0x10U))));
        bufp->chgIData(oldp+636,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_duty_cycle_write_1___05FSEL_1)
                                   ? ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[1U] 
                                       << 0x18U) | 
                                      (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                       >> 8U)) : 0U)),32);
        bufp->chgIData(oldp+637,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_period_write_1___05FSEL_1)
                                   ? ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[1U] 
                                       << 0x18U) | 
                                      (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                       >> 8U)) : 0U)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x31U])) {
        bufp->chgSData(oldp+638,((0xffffU & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                             >> 9U))),16);
        bufp->chgBit(oldp+639,((1U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                      >> 8U))));
        bufp->chgBit(oldp+640,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__downreset_OUT_RST));
        bufp->chgWData(oldp+641,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg),72);
        bufp->chgBit(oldp+644,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dNotEmptyReg));
        bufp->chgCData(oldp+645,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dGDeqPtr),4);
        bufp->chgCData(oldp+646,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dGDeqPtr1),4);
        bufp->chgBit(oldp+647,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dNextNotEmpty));
        bufp->chgCData(oldp+648,((3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dGDeqPtr))),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x31U] 
                     | vlSelf->__Vm_traceActivity[0x37U]))) {
        bufp->chgBit(oldp+649,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                   >> 0x17U))));
        bufp->chgBit(oldp+650,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                   >> 0x11U))));
        bufp->chgBit(oldp+651,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                   >> 0x12U))));
        bufp->chgBit(oldp+652,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                   >> 0xeU))));
        bufp->chgBit(oldp+653,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                   >> 0xdU))));
        bufp->chgBit(oldp+654,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                   >> 8U))));
        bufp->chgCData(oldp+655,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1)
                                   ? (3U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                            >> 0xaU))
                                   : 0U)),2);
        bufp->chgBit(oldp+656,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                   >> 0xcU))));
        bufp->chgBit(oldp+657,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                   >> 9U))));
        bufp->chgBit(oldp+658,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                   >> 0xfU))));
        bufp->chgBit(oldp+659,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                   >> 0x10U))));
        bufp->chgIData(oldp+660,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_duty_cycle_write_1___05FSEL_1)
                                   ? ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[1U] 
                                       << 0x18U) | 
                                      (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                       >> 8U)) : 0U)),32);
        bufp->chgIData(oldp+661,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_period_write_1___05FSEL_1)
                                   ? ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[1U] 
                                       << 0x18U) | 
                                      (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__dDoutReg[0U] 
                                       >> 8U)) : 0U)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x32U])) {
        bufp->chgBit(oldp+662,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_start_D_IN));
        bufp->chgBit(oldp+663,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__MUX_rg_start_address_write_1___05FSEL_1) 
                                | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__ff_lower_order_bits_ENQ))));
        bufp->chgBit(oldp+664,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__ff_lower_order_bits_ENQ));
        bufp->chgBit(oldp+665,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__MUX_rg_start_address_write_1___05FSEL_1));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x33U])) {
        bufp->chgQData(oldp+666,((0x400000000ULL | vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__CASE_dtm_access_putCommand_put_BITS_1_TO_0_1_y_ETC___05Fq6)),35);
        bufp->chgQData(oldp+668,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__CASE_dtm_access_putCommand_put_BITS_1_TO_0_1_y_ETC___05Fq6),34);
        bufp->chgIData(oldp+670,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__y_avValue_fst___05Fh95821),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x35U])) {
        bufp->chgWData(oldp+671,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__fifoMem[0]),72);
        bufp->chgWData(oldp+674,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__fifoMem[1]),72);
        bufp->chgWData(oldp+677,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__fifoMem[2]),72);
        bufp->chgWData(oldp+680,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__fifoMem[3]),72);
        bufp->chgWData(oldp+683,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__fifoMem[0]),72);
        bufp->chgWData(oldp+686,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__fifoMem[1]),72);
        bufp->chgWData(oldp+689,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__fifoMem[2]),72);
        bufp->chgWData(oldp+692,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__fifoMem[3]),72);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x36U])) {
        bufp->chgBit(oldp+695,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_capture_input_EN));
        bufp->chgBit(oldp+696,((1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_cntr_overflow_intr_write_1___05FSEL_1)))));
        bufp->chgBit(oldp+697,((1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_cntr_underflow_intr_write_1___05FSEL_1)))));
        bufp->chgBit(oldp+698,((1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_pwm_fall_intr_write_1___05FSEL_1)))));
        bufp->chgBit(oldp+699,((1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_pwm_rise_intr_write_1___05FSEL_1)))));
        bufp->chgBit(oldp+700,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_divider_EN));
        bufp->chgBit(oldp+701,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request_dDEQ));
        bufp->chgBit(oldp+702,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1));
        bufp->chgBit(oldp+703,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_cntr_overflow_intr_write_1___05FSEL_1));
        bufp->chgBit(oldp+704,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_cntr_underflow_intr_write_1___05FSEL_1));
        bufp->chgBit(oldp+705,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_pwm_fall_intr_write_1___05FSEL_1));
        bufp->chgBit(oldp+706,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_pwm_rise_intr_write_1___05FSEL_1));
        bufp->chgBit(oldp+707,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_duty_cycle_write_1___05FSEL_1));
        bufp->chgBit(oldp+708,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_period_write_1___05FSEL_1));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x37U])) {
        bufp->chgBit(oldp+709,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_capture_input_EN));
        bufp->chgBit(oldp+710,((1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_cntr_overflow_intr_write_1___05FSEL_1)))));
        bufp->chgBit(oldp+711,((1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_cntr_underflow_intr_write_1___05FSEL_1)))));
        bufp->chgBit(oldp+712,((1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_pwm_fall_intr_write_1___05FSEL_1)))));
        bufp->chgBit(oldp+713,((1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_pwm_rise_intr_write_1___05FSEL_1)))));
        bufp->chgBit(oldp+714,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_divider_EN));
        bufp->chgBit(oldp+715,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request_dDEQ));
        bufp->chgBit(oldp+716,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1));
        bufp->chgBit(oldp+717,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_cntr_overflow_intr_write_1___05FSEL_1));
        bufp->chgBit(oldp+718,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_cntr_underflow_intr_write_1___05FSEL_1));
        bufp->chgBit(oldp+719,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_pwm_fall_intr_write_1___05FSEL_1));
        bufp->chgBit(oldp+720,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_pwm_rise_intr_write_1___05FSEL_1));
        bufp->chgBit(oldp+721,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_duty_cycle_write_1___05FSEL_1));
        bufp->chgBit(oldp+722,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_period_write_1___05FSEL_1));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x38U])) {
        bufp->chgBit(oldp+723,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__busy_D_IN));
        bufp->chgBit(oldp+724,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__wr_errexception_whas));
        bufp->chgBit(oldp+725,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__autoexecdata_EN));
        bufp->chgBit(oldp+726,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__rg_sbread_en_D_IN));
        bufp->chgBit(oldp+727,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__rg_sbwrite_en_D_IN));
        bufp->chgBit(oldp+728,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbaccess_EN));
        bufp->chgBit(oldp+729,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbbusy_D_IN));
        bufp->chgCData(oldp+730,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sberr_D_IN),3);
        bufp->chgBit(oldp+731,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_abstract_reg_0_EN));
        bufp->chgBit(oldp+732,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__NOT_wr_cmdtype_wren_whas___05F0_6_OR_NOT_wr_cmdtyp_ETC___05F_d105));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x39U])) {
        bufp->chgBit(oldp+733,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__relaxedpriv_EN));
        bufp->chgBit(oldp+734,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dmactive_EN));
        bufp->chgBit(oldp+735,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__wr_resumereq_wren_whas));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x3aU])) {
        bufp->chgBit(oldp+736,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__wr_errhaltresume_whas));
        bufp->chgBit(oldp+737,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__wr_errnotsupported_whas));
        bufp->chgBit(oldp+738,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__cmdtype_EN));
        bufp->chgBit(oldp+739,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__haresumereq_D_IN));
        bufp->chgIData(oldp+740,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbaddress0_D_IN),32);
        bufp->chgBit(oldp+741,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbaddress0_EN));
        bufp->chgBit(oldp+742,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__MUX_sbaddress0_write_1___05FSEL_1));
        bufp->chgBit(oldp+743,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__MUX_sbdata1_write_1___05FSEL_1));
        bufp->chgBit(oldp+744,((1U & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__haresumereq_D_IN)))));
    }
    bufp->chgBit(oldp+745,(vlSelf->CLK));
    bufp->chgBit(oldp+746,(vlSelf->RST_N));
    bufp->chgIData(oldp+747,(((IData)(vlSelf->mkTbSoc__DOT__MUX_dump_write_1___05FSEL_1)
                               ? vlSelf->mkTbSoc__DOT__TASK_fopen___05F_d935
                               : vlSelf->mkTbSoc__DOT__TASK_fopen___05F_d974)),32);
    bufp->chgBit(oldp+748,(((IData)(vlSelf->mkTbSoc__DOT__MUX_dump_write_1___05FSEL_1) 
                            | ((0U != (IData)(vlSelf->mkTbSoc__DOT__rg_cnt)) 
                               & (IData)(vlSelf->mkTbSoc__DOT__soc_soc_sb_commitlog___05F60_BIT_309_61_AND_TASK_t_ETC___05F_d970)))));
    bufp->chgBit(oldp+749,(vlSelf->mkTbSoc__DOT__rg_client_fd_EN));
    bufp->chgBit(oldp+750,(vlSelf->mkTbSoc__DOT__rg_initial_init_EN));
    bufp->chgBit(oldp+751,(vlSelf->mkTbSoc__DOT__rg_inst_count_EN));
    bufp->chgBit(oldp+752,(((IData)(vlSelf->mkTbSoc__DOT__rg_inst_count_EN) 
                            & (IData)(((0x40000U == 
                                        (0x60000U & 
                                         vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_commitlog[6U])) 
                                       & (IData)(vlSelf->mkTbSoc__DOT__NOT_IF_soc_soc_sb_commitlog___05F60_BITS_210_TO_20_ETC___05F_d1454))))));
    bufp->chgBit(oldp+753,(vlSelf->mkTbSoc__DOT__rg_prev_mstatus_EN));
    bufp->chgCData(oldp+754,((0x1fU & ((IData)(vlSelf->mkTbSoc__DOT__uart0_uart_error_status_register_EN)
                                        ? ((IData)(1U) 
                                           + (IData)(vlSelf->mkTbSoc__DOT__uart0_uart_fifoRecv_countReg))
                                        : ((IData)(vlSelf->mkTbSoc__DOT__uart0_uart_fifoRecv_countReg) 
                                           - (IData)(1U))))),5);
    bufp->chgBit(oldp+755,(((IData)(vlSelf->mkTbSoc__DOT__uart0_uart_fifoRecv_countReg) 
                            >= (IData)(vlSelf->mkTbSoc__DOT__uart0_rg_rx_threshold))));
    bufp->chgBit(oldp+756,(vlSelf->mkTbSoc__DOT__uart0_uart_rXmitDataOut_D_IN));
    bufp->chgCData(oldp+757,((0x1fU & ((IData)(vlSelf->mkTbSoc__DOT__uart1_uart_error_status_register_EN)
                                        ? ((IData)(1U) 
                                           + (IData)(vlSelf->mkTbSoc__DOT__uart1_uart_fifoRecv_countReg))
                                        : ((IData)(vlSelf->mkTbSoc__DOT__uart1_uart_fifoRecv_countReg) 
                                           - (IData)(1U))))),5);
    bufp->chgBit(oldp+758,(((IData)(vlSelf->mkTbSoc__DOT__uart1_uart_fifoRecv_countReg) 
                            >= (IData)(vlSelf->mkTbSoc__DOT__uart1_rg_rx_threshold))));
    bufp->chgBit(oldp+759,(vlSelf->mkTbSoc__DOT__uart1_uart_rXmitDataOut_D_IN));
    bufp->chgBit(oldp+760,(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset));
    bufp->chgBit(oldp+761,(vlSelf->mkTbSoc__DOT__tck_clk_CLK_OUT));
    bufp->chgBit(oldp+762,(vlSelf->mkTbSoc__DOT__MUX_dump_write_1___05FSEL_1));
    bufp->chgBit(oldp+763,((((~ (IData)(vlSelf->mkTbSoc__DOT__eth0_s_xactor_f_rd_addr__DOT__empty_reg)) 
                             & (IData)(vlSelf->mkTbSoc__DOT__eth0_s_xactor_f_rd_addr_ENQ)) 
                            | ((IData)(vlSelf->mkTbSoc__DOT__eth0_s_xactor_f_rd_addr_ENQ) 
                               & ((IData)(vlSelf->mkTbSoc__DOT__eth0_s_xactor_f_rd_addr__DOT__empty_reg) 
                                  & (IData)(vlSelf->mkTbSoc__DOT__eth0_s_xactor_f_rd_addr__DOT__full_reg))))));
    bufp->chgBit(oldp+764,((1U & (((~ (IData)(vlSelf->mkTbSoc__DOT__eth0_s_xactor_f_rd_addr__DOT__empty_reg)) 
                                   & (~ (IData)(vlSelf->mkTbSoc__DOT__eth0_s_xactor_f_rd_addr_ENQ))) 
                                  | ((~ (IData)(vlSelf->mkTbSoc__DOT__eth0_s_xactor_f_rd_addr_ENQ)) 
                                     & (IData)(vlSelf->mkTbSoc__DOT__eth0_s_xactor_f_rd_addr__DOT__full_reg))))));
    bufp->chgBit(oldp+765,(((IData)(vlSelf->mkTbSoc__DOT__eth0_s_xactor_f_rd_addr_ENQ) 
                            & (IData)(vlSelf->mkTbSoc__DOT__eth0_s_xactor_f_rd_addr__DOT__empty_reg))));
    bufp->chgBit(oldp+766,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module_EN_dtm_access_putCommand_put));
    bufp->chgBit(oldp+767,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap_EN_response_from_dm));
    bufp->chgBit(oldp+768,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dEnqToggle) 
                            != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dDeqToggle))));
    bufp->chgBit(oldp+769,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_response_from_dm__DOT__sDeqToggle) 
                            == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_response_from_dm__DOT__sEnqToggle))));
    bufp->chgBit(oldp+770,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dmactive_EN) 
                            & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                       >> 0x1eU)))));
    bufp->chgBit(oldp+771,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dm_reset_RST_OUT));
    bufp->chgBit(oldp+772,(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__hahavereset_port0___05Fwrite_1));
    bufp->chgBit(oldp+773,(((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dmactive_EN) 
                                & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                           >> 0x1eU)))) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__hahavereset_port0___05Fwrite_1))));
    bufp->chgBit(oldp+774,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module_EN_dtm_access_putCommand_put) 
                            & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_124) 
                                & ((0x16U == (0x7fU 
                                              & (IData)(
                                                        (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                         >> 0x22U)))) 
                                   | ((0x17U == (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                            >> 0x22U)))) 
                                      | ((0x18U == 
                                          (0x7fU & (IData)(
                                                           (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                            >> 0x22U)))) 
                                         | ((0x19U 
                                             != (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                            >> 0x22U)))) 
                                            & ((0x1aU 
                                                != 
                                                (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                            >> 0x22U)))) 
                                               & ((0x1bU 
                                                   != 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                               >> 0x22U)))) 
                                                  & ((0x1cU 
                                                      != 
                                                      (0x7fU 
                                                       & (IData)(
                                                                 (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                                  >> 0x22U)))) 
                                                     & ((0x1dU 
                                                         != 
                                                         (0x7fU 
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
                                     & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_118)))))));
    bufp->chgBit(oldp+775,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__busy_D_IN) 
                            | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__busy_3_AND_NOT_v_flags_0_4_BIT_0_5_6_7_AND_wr___05FETC___05F_d89) 
                               | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_49)))));
    bufp->chgCData(oldp+776,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_50)
                               ? 1U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__wr_errnotsupported_whas)
                                        ? 2U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__wr_errexception_whas)
                                                 ? 3U
                                                 : 
                                                ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__wr_errhaltresume_whas)
                                                  ? 4U
                                                  : 
                                                 ((~ (IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                              >> 0xaU))) 
                                                  & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__cmderr))))))),3);
    bufp->chgBit(oldp+777,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_50) 
                            | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__wr_errnotsupported_whas) 
                               | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__wr_errexception_whas) 
                                  | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__wr_errhaltresume_whas) 
                                     | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__relaxedpriv_EN)))))));
    bufp->chgIData(oldp+778,((0xffffffU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__NOT_wr_cmdtype_wren_whas___05F0_6_OR_NOT_wr_cmdtyp_ETC___05F_d105)
                                            ? ((0x7f0000U 
                                                & vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__control) 
                                               | (0xffffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__control)))
                                            : (IData)(
                                                      (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                       >> 2U))))),24);
    bufp->chgBit(oldp+779,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__NOT_wr_cmdtype_wren_whas___05F0_6_OR_NOT_wr_cmdtyp_ETC___05F_d105) 
                            | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__cmdtype_EN))));
    bufp->chgQData(oldp+780,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module_EN_dtm_access_getResponse_get)
                               ? 0ULL : (0x400000000ULL 
                                         | vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__CASE_dtm_access_putCommand_put_BITS_1_TO_0_1_y_ETC___05Fq6))),35);
    bufp->chgBit(oldp+782,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module_EN_dtm_access_getResponse_get) 
                            | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module_EN_dtm_access_putCommand_put))));
    bufp->chgBit(oldp+783,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__dmactive_EN) 
                            & (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                       >> 0x21U)))));
    bufp->chgBit(oldp+784,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_3) 
                            & (0x5400000000ULL == (0x1fc00000000ULL 
                                                   & vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data)))));
    bufp->chgBit(oldp+785,((1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__wr_resumereq_wren_whas)) 
                                  & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__haresumereq_D_IN))))));
    bufp->chgBit(oldp+786,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module_EN_dtm_access_putCommand_put) 
                            & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_120) 
                                & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_0) 
                                   | (((0x39U == (0x7fU 
                                                  & (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0x22U)))) 
                                       | (((0x3aU == 
                                            (0x7fU 
                                             & (IData)(
                                                       (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                        >> 0x22U)))) 
                                           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_105)) 
                                          | ((0x3cU 
                                              == (0x7fU 
                                                  & (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0x22U)))) 
                                             | ((0x3dU 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0x22U)))) 
                                                | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_93))))) 
                                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbbusy)))) 
                               | ((1U == (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data))) 
                                  & (((0x3cU == (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                            >> 0x22U)))) 
                                      | ((0x3dU == 
                                          (0x7fU & (IData)(
                                                           (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                            >> 0x22U)))) 
                                         | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_93))) 
                                     & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbbusy)))))));
    bufp->chgIData(oldp+787,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__rg_sbwrite_en_D_IN)
                               ? (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                          >> 2U)) : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__data___05Fh14244))),32);
    bufp->chgIData(oldp+788,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__MUX_sbdata1_write_1___05FSEL_1)
                               ? (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                          >> 2U)) : (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__data___05Fh14244 
                                                             >> 0x20U)))),32);
    bufp->chgBit(oldp+789,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbdata2_EN) 
                            | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__MUX_sbdata1_write_1___05FSEL_1))));
    bufp->chgCData(oldp+790,((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__haresumereq) 
                               << 1U) | (1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_abstract_reg_0_EN) 
                                               | ((~ 
                                                   ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_wr_addr_DEQ) 
                                                    & (0x10400000ULL 
                                                       == 
                                                       (0xfff00000ULL 
                                                        & vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_wr_addr__DOT__data0_reg)))) 
                                                  & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_flags_0)))))),8);
    bufp->chgBit(oldp+791,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_3) 
                            & (0x4800000000ULL == (0x1fc00000000ULL 
                                                   & vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data)))));
    bufp->chgQData(oldp+792,(((0x300U == (0xfffU & (IData)(
                                                           (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_rd_addr__DOT__data0_reg 
                                                            >> 0x14U))))
                               ? 0x340006f0340006fULL
                               : ((0x37cU == (0xfffU 
                                              & (IData)(
                                                        (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_rd_addr__DOT__data0_reg 
                                                         >> 0x14U))))
                                   ? 0x10007300100073ULL
                                   : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_77)
                                       ? ((2U == (7U 
                                                  & (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_rd_addr__DOT__data0_reg 
                                                             >> 0xeU))))
                                           ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_v_abstract_reg_0_12_v_abstract_reg_1_1_ETC___05F_d320)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_v_abstract_reg_0_12_v_abstract_reg_1_1_ETC___05F_d320)))
                                           : 0ULL) : 
                                      ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__NOT_slave_xactor_f_rd_addr_first___05F77_BITS_31_T_ETC___05F_d293)
                                        ? (((QData)((IData)(
                                                            ((0x3000000U 
                                                              & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_flags_0) 
                                                                 << 0x18U)) 
                                                             | vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_101))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((0x3000000U 
                                                               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_flags_0) 
                                                                  << 0x18U)) 
                                                              | vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_101))))
                                        : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_78)
                                            ? (((QData)((IData)(
                                                                ((3U 
                                                                  == 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_rd_addr__DOT__data0_reg 
                                                                              >> 0xeU))))
                                                                  ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__spliced_bits___05Fh20009
                                                                  : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_v_data_reg_0_30_v_data_reg_1_31_v_data_ETC___05F_d346))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_v_data_reg_0_30_v_data_reg_1_31_v_data_ETC___05F_d346)))
                                            : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_79)
                                                ? (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_rd_addr__DOT__data0_reg 
                                                                >> 0xeU))))
                                                    ? 
                                                   (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_v_progbuf_reg_0_49_v_progbuf_reg_1_50___05FETC___05F_d368)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_v_progbuf_reg_0_49_v_progbuf_reg_1_50___05FETC___05F_d368)))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_rd_addr__DOT__data0_reg 
                                                                 >> 0xeU))))
                                                     ? 
                                                    (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__spliced_bits___05Fh17896)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_v_progbuf_reg_0_49_v_progbuf_reg_1_50___05FETC___05F_d368)))
                                                     : 0ULL))
                                                : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_80)
                                                    ? 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_rd_addr__DOT__data0_reg 
                                                                 >> 0xeU))))
                                                     ? 
                                                    (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_0xC0006F_0x600006F_0x380006F_0xFF0000F_ETC___05F_d378)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_0xC0006F_0x600006F_0x380006F_0xFF0000F_ETC___05F_d378)))
                                                     : 0ULL)
                                                    : 0ULL)))))))),64);
    bufp->chgQData(oldp+794,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__NOT_slave_xactor_f_rd_addr_first___05F77_BITS_31_T_ETC___05F_d293)
                               ? (((QData)((IData)(
                                                   ((0x3000000U 
                                                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_flags_0) 
                                                        << 0x18U)) 
                                                    | vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_101))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((0x3000000U 
                                                                 & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_flags_0) 
                                                                    << 0x18U)) 
                                                                | vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_101))))
                               : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_78)
                                   ? (((QData)((IData)(
                                                       ((3U 
                                                         == 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_rd_addr__DOT__data0_reg 
                                                                     >> 0xeU))))
                                                         ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__spliced_bits___05Fh20009
                                                         : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_v_data_reg_0_30_v_data_reg_1_31_v_data_ETC___05F_d346))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_v_data_reg_0_30_v_data_reg_1_31_v_data_ETC___05F_d346)))
                                   : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_79)
                                       ? ((2U == (7U 
                                                  & (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_rd_addr__DOT__data0_reg 
                                                             >> 0xeU))))
                                           ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_v_progbuf_reg_0_49_v_progbuf_reg_1_50___05FETC___05F_d368)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_v_progbuf_reg_0_49_v_progbuf_reg_1_50___05FETC___05F_d368)))
                                           : ((3U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_rd_addr__DOT__data0_reg 
                                                           >> 0xeU))))
                                               ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__spliced_bits___05Fh17896)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_v_progbuf_reg_0_49_v_progbuf_reg_1_50___05FETC___05F_d368)))
                                               : 0ULL))
                                       : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_80)
                                           ? ((2U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_rd_addr__DOT__data0_reg 
                                                           >> 0xeU))))
                                               ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_0xC0006F_0x600006F_0x380006F_0xFF0000F_ETC___05F_d378)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_0xC0006F_0x600006F_0x380006F_0xFF0000F_ETC___05F_d378)))
                                               : 0ULL)
                                           : 0ULL))))),64);
    bufp->chgQData(oldp+796,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_77)
                               ? ((2U == (7U & (IData)(
                                                       (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_rd_addr__DOT__data0_reg 
                                                        >> 0xeU))))
                                   ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_v_abstract_reg_0_12_v_abstract_reg_1_1_ETC___05F_d320)) 
                                       << 0x20U) | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_v_abstract_reg_0_12_v_abstract_reg_1_1_ETC___05F_d320)))
                                   : 0ULL) : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__NOT_slave_xactor_f_rd_addr_first___05F77_BITS_31_T_ETC___05F_d293)
                                               ? (((QData)((IData)(
                                                                   ((0x3000000U 
                                                                     & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_flags_0) 
                                                                        << 0x18U)) 
                                                                    | vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_101))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0x3000000U 
                                                                      & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_flags_0) 
                                                                         << 0x18U)) 
                                                                     | vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_101))))
                                               : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_78)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    ((3U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_rd_addr__DOT__data0_reg 
                                                                                >> 0xeU))))
                                                                      ? vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__spliced_bits___05Fh20009
                                                                      : vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_v_data_reg_0_30_v_data_reg_1_31_v_data_ETC___05F_d346))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_v_data_reg_0_30_v_data_reg_1_31_v_data_ETC___05F_d346)))
                                                   : 
                                                  ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_79)
                                                    ? 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_rd_addr__DOT__data0_reg 
                                                                 >> 0xeU))))
                                                     ? 
                                                    (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_v_progbuf_reg_0_49_v_progbuf_reg_1_50___05FETC___05F_d368)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_v_progbuf_reg_0_49_v_progbuf_reg_1_50___05FETC___05F_d368)))
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_rd_addr__DOT__data0_reg 
                                                                  >> 0xeU))))
                                                      ? 
                                                     (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__spliced_bits___05Fh17896)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_v_progbuf_reg_0_49_v_progbuf_reg_1_50___05FETC___05F_d368)))
                                                      : 0ULL))
                                                    : 
                                                   ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_80)
                                                     ? 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_rd_addr__DOT__data0_reg 
                                                                  >> 0xeU))))
                                                      ? 
                                                     (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_0xC0006F_0x600006F_0x380006F_0xFF0000F_ETC___05F_d378)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__SEL_ARR_0xC0006F_0x600006F_0x380006F_0xFF0000F_ETC___05F_d378)))
                                                      : 0ULL)
                                                     : 0ULL)))))),64);
    bufp->chgCData(oldp+798,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__wr_errnotsupported_whas)
                               ? 2U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__wr_errexception_whas)
                                        ? 3U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__wr_errhaltresume_whas)
                                                 ? 4U
                                                 : 
                                                ((~ (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                             >> 0xaU))) 
                                                 & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__cmderr)))))),3);
    bufp->chgBit(oldp+799,(((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__hahalted)) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_110))));
    bufp->chgBit(oldp+800,(((IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_0) 
                            | (((0x39U == (0x7fU & (IData)(
                                                           (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                            >> 0x22U)))) 
                                | (((0x3aU == (0x7fU 
                                               & (IData)(
                                                         (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                          >> 0x22U)))) 
                                    | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_105)) 
                                   | ((0x3cU == (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                            >> 0x22U)))) 
                                      | ((0x3dU == 
                                          (0x7fU & (IData)(
                                                           (vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__syncFIFO1Data 
                                                            >> 0x22U)))) 
                                         | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT____VdfgRegularize_h2df2c646_20_93))))) 
                               & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__sbbusy)))));
    bufp->chgBit(oldp+801,((1U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_abstract_reg_0_EN) 
                                  | ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_wr_addr_DEQ) 
                                         & (0x10400000ULL 
                                            == (0xfff00000ULL 
                                                & vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__slave_xactor_f_wr_addr__DOT__data0_reg)))) 
                                     & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__v_flags_0))))));
    bufp->chgBit(oldp+802,(((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__master_xactor_f_rd_addr__DOT__full_reg)) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__master_xactor_f_rd_addr_DEQ))));
    bufp->chgBit(oldp+803,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__master_xactor_f_rd_data_ENQ) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__master_xactor_f_rd_data__DOT__empty_reg))));
    bufp->chgBit(oldp+804,(((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__master_xactor_f_wr_addr__DOT__full_reg)) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__master_xactor_f_wr_addr_DEQ))));
    bufp->chgBit(oldp+805,(((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__master_xactor_f_wr_data__DOT__full_reg)) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__master_xactor_f_wr_data_DEQ))));
    bufp->chgBit(oldp+806,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__master_xactor_f_wr_resp_ENQ) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__master_xactor_f_wr_resp__DOT__empty_reg))));
    bufp->chgQData(oldp+807,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg_port1___05Fread),40);
    bufp->chgQData(oldp+809,((0xfffffffffcULL & vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg_port1___05Fread)),40);
    bufp->chgQData(oldp+811,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmireset_generated_whas)
                               ? (0xfffffffffcULL & vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg_port1___05Fread)
                               : vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg_port1___05Fread)),40);
    bufp->chgBit(oldp+813,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_7) 
                            & (0x10U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction)))));
    bufp->chgCData(oldp+814,(((0xaU == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate))
                               ? 0x15U : (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__tdi) 
                                           << 4U) | 
                                          (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction_shiftreg) 
                                                   >> 1U))))),5);
    bufp->chgCData(oldp+815,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__wr_dmireset_generated_whas)
                               ? 0U : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM__DOT__empty_reg)
                                        ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmistat_D_IN)
                                        : 3U))),2);
    bufp->chgBit(oldp+816,(((0U != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
                            & (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dtmcontrol_shiftreg 
                               >> 0x11U))));
    bufp->chgBit(oldp+817,((1U & ((0xbU == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate))
                                   ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction_shiftreg)
                                   : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__IF_instruction_EQ_0x1_99_THEN_crossed_idcode_s_ETC___05F_d221)))));
    bufp->chgBit(oldp+818,((1U & (~ (IData)(vlSelf->mkTbSoc__DOT__tck_clk_CLK_OUT)))));
    bufp->chgBit(oldp+819,(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM_ENQ));
    bufp->chgCData(oldp+820,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM__DOT__empty_reg)
                               ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmistat_D_IN)
                               : 3U)),2);
    bufp->chgQData(oldp+821,((((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__tdi)) 
                               << 0x27U) | (0x7fffffffffULL 
                                            & (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg 
                                               >> 1U)))),40);
    bufp->chgQData(oldp+823,((((QData)((IData)((0x3fU 
                                                & (IData)(
                                                          (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmiaccess_shiftreg 
                                                           >> 0x22U))))) 
                               << 0x22U) | (((QData)((IData)(
                                                             (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM_D_OUT 
                                                              >> 2U))) 
                                             << 2U) 
                                            | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dmistat_D_IN))))),40);
    bufp->chgIData(oldp+825,((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__tdi) 
                               << 0x1fU) | (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dtmcontrol_shiftreg 
                                            >> 1U))),32);
    bufp->chgIData(oldp+826,((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__tdi) 
                               << 0x1fU) | (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__idcode_sr 
                                            >> 1U))),32);
    bufp->chgCData(oldp+827,((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__tdi) 
                               << 4U) | (0xfU & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__instruction_shiftreg) 
                                                 >> 1U)))),5);
    bufp->chgBit(oldp+828,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT____VdfgRegularize_h06092ea3_0_10) 
                            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__capture_repsonse_from_dm) 
                               | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__response_from_DM__DOT__empty_reg)))));
    bufp->chgBit(oldp+829,(((0U != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__tapstate)) 
                            & (vlSelf->mkTbSoc__DOT__soc__DOT__jtag_tap__DOT__dtmcontrol_shiftreg 
                               >> 0x10U))));
    bufp->chgBit(oldp+830,(((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore_mv_stop_timer)) 
                            & (0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__clint_clint_rg_tick)))));
    bufp->chgSData(oldp+831,((((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a13_in_wset_1___05FSEL_1) 
                                 | (0U == (3U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux_muxsel_config 
                                                 >> 0x14U)))) 
                                & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a13_in_wset_1___05FSEL_1))) 
                               << 0xdU) | (((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a12_in_wset_1___05FSEL_1) 
                                              | (0U 
                                                 == 
                                                 (3U 
                                                  & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux_muxsel_config 
                                                     >> 0x12U)))) 
                                             & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a12_in_wset_1___05FSEL_1))) 
                                            << 0xcU) 
                                           | (((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a11_in_wset_1___05FSEL_1) 
                                                 | (0U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux_muxsel_config 
                                                        >> 0x10U)))) 
                                                & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a11_in_wset_1___05FSEL_1))) 
                                               << 0xbU) 
                                              | (((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a10_in_wset_1___05FSEL_1) 
                                                    | (0U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux_muxsel_config 
                                                           >> 0xeU)))) 
                                                   & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a10_in_wset_1___05FSEL_1))) 
                                                  << 0xaU) 
                                                 | ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a1_in_wset_1___05FSEL_1) 
                                                      | (0U 
                                                         == 
                                                         (3U 
                                                          & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux_muxsel_config 
                                                             >> 2U)))) 
                                                     & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a1_in_wset_1___05FSEL_1)) 
                                                        & (IData)(vlSelf->mkTbSoc__DOT__uart1_uart_rXmitDataOut))) 
                                                    << 1U)))))),16);
    bufp->chgSData(oldp+832,((((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a13_in_wset_1___05FSEL_1) 
                                 | (0U == (3U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux_muxsel_config 
                                                 >> 0x14U)))) 
                                & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a13_in_wset_1___05FSEL_1))) 
                               << 0xaU) | (((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a12_in_wset_1___05FSEL_1) 
                                              | (0U 
                                                 == 
                                                 (3U 
                                                  & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux_muxsel_config 
                                                     >> 0x12U)))) 
                                             & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a12_in_wset_1___05FSEL_1))) 
                                            << 9U) 
                                           | (((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a11_in_wset_1___05FSEL_1) 
                                                 | (0U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux_muxsel_config 
                                                        >> 0x10U)))) 
                                                & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a11_in_wset_1___05FSEL_1))) 
                                               << 8U) 
                                              | (((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a10_in_wset_1___05FSEL_1) 
                                                    | (0U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux_muxsel_config 
                                                           >> 0xeU)))) 
                                                   & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a10_in_wset_1___05FSEL_1))) 
                                                  << 7U) 
                                                 | ((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a1_in_wset_1___05FSEL_1) 
                                                      | (0U 
                                                         == 
                                                         (3U 
                                                          & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux_muxsel_config 
                                                             >> 2U)))) 
                                                     & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a1_in_wset_1___05FSEL_1)) 
                                                        & (IData)(vlSelf->mkTbSoc__DOT__uart1_uart_rXmitDataOut))) 
                                                    << 1U)))))),11);
    bufp->chgBit(oldp+833,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__MUX_m_data_ma_request_1___05FSEL_2) 
                            & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_release_readphase)) 
                               & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__SEL_ARR_v_reg_valid_0_9_v_reg_valid_1_00_v_reg_ETC___05F_d1429)))));
    bufp->chgBit(oldp+834,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__empty_reg) 
                            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_fence_pending) 
                               & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                  >> 0xcU)))));
    bufp->chgBit(oldp+835,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT____VdfgRegularize_h9be507e3_2_14) 
                            & ((~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_mem_io_resp_D_OUT[0U]) 
                               | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_io_atomic_done)))));
    bufp->chgBit(oldp+836,(((0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__IF_wr_ram_state_whas___05F43_THEN_wr_ram_state_wge_ETC___05F_d345)) 
                            & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_fbfull)) 
                               & ((0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__IF_wr_fb_state_whas___05F48_THEN_wr_fb_state_wget___05FETC___05F_d350)) 
                                  & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__wr_fault_whas)) 
                                     & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_handling_miss)) 
                                        & ((~ (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                               >> 0xcU)) 
                                           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_pending_req__DOT__full_reg)))))))));
    bufp->chgBit(oldp+837,((1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__empty_reg)) 
                                  & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache_EN_receive_core_req_put)) 
                                     & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info___05F75_BITS_13_TO_8___05FETC___05F_d1409)))))));
    bufp->chgBit(oldp+838,((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_fbfull) 
                             | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__rg_fence_stall) 
                                | ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__empty_reg)) 
                                   & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache_EN_receive_core_req_put)) 
                                      & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_release_info___05F75_BITS_13_TO_8___05FETC___05F_d1409)))))) 
                            & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_fbempty)) 
                               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache_mv_storebuffer_empty) 
                                  & ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_EN_mav_polling_response) 
                                         & ((0U != 
                                             (3U & 
                                              (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__ff_core_request__DOT__data0_reg[2U] 
                                               >> 9U))) 
                                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__NOT_ff_from_tlb_rv_port1___05Fread___05F93_BITS_104_TO_ETC___05F_d289)))) 
                                     & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__m_fillbuffer_mv_fbhead_valid)))))));
    bufp->chgBit(oldp+839,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT____VdfgRegularize_hd167511c_0_14)
                             ? ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_15) 
                                & (((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp1cfg_warl)) 
                                    & (0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__pmp_access___05Fh31122))) 
                                   | (((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp1cfg_warl) 
                                           >> 1U)) 
                                       & (1U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__pmp_access___05Fh31122))) 
                                      | ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp1cfg_warl) 
                                             >> 2U)) 
                                         & (2U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__pmp_access___05Fh31122))))))
                             : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_17) 
                                & (((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp0cfg_warl)) 
                                    & (0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__pmp_access___05Fh31122))) 
                                   | (((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp0cfg_warl) 
                                           >> 1U)) 
                                       & (1U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__pmp_access___05Fh31122))) 
                                      | ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp0cfg_warl) 
                                             >> 2U)) 
                                         & (2U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__pmp_access___05Fh31122)))))))));
    bufp->chgBit(oldp+840,((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULT_IF_fn_pmp_l_ETC___05F_d99) 
                             & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULT_IF_fn_pmp_l_ETC___05F_d62) 
                                | ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULE_fn_pmp_look_ETC___05F_d64)) 
                                   | (0U == (3U & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp2cfg_warl) 
                                                   >> 3U))))))
                             ? ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_22) 
                                & (((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp3cfg_warl)) 
                                    & (0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__pmp_access___05Fh31122))) 
                                   | (((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp3cfg_warl) 
                                           >> 1U)) 
                                       & (1U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__pmp_access___05Fh31122))) 
                                      | ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp3cfg_warl) 
                                             >> 2U)) 
                                         & (2U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__pmp_access___05Fh31122))))))
                             : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT__fn_pmp_lookup_req_BITS_33_TO_5_ULT_IF_fn_pmp_l_ETC___05F_d99)
                                 ? ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_24) 
                                    & (((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp2cfg_warl)) 
                                        & (0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__pmp_access___05Fh31122))) 
                                       | (((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp2cfg_warl) 
                                               >> 1U)) 
                                           & (1U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__pmp_access___05Fh31122))) 
                                          | ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp2cfg_warl) 
                                                 >> 2U)) 
                                             & (2U 
                                                == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__pmp_access___05Fh31122))))))
                                 : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__instance_fn_pmp_lookup_0__DOT____VdfgRegularize_hd167511c_0_14)
                                     ? ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_15) 
                                        & (((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp1cfg_warl)) 
                                            & (0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__pmp_access___05Fh31122))) 
                                           | (((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp1cfg_warl) 
                                                   >> 1U)) 
                                               & (1U 
                                                  == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__pmp_access___05Fh31122))) 
                                              | ((~ 
                                                  ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp1cfg_warl) 
                                                   >> 2U)) 
                                                 & (2U 
                                                    == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__pmp_access___05Fh31122))))))
                                     : ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_17) 
                                        & (((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp0cfg_warl)) 
                                            & (0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__pmp_access___05Fh31122))) 
                                           | (((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp0cfg_warl) 
                                                   >> 1U)) 
                                               & (1U 
                                                  == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__pmp_access___05Fh31122))) 
                                              | ((~ 
                                                  ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp0cfg_warl) 
                                                   >> 2U)) 
                                                 & (2U 
                                                    == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__dmem__DOT__dcache__DOT__pmp_access___05Fh31122)))))))))));
    bufp->chgBit(oldp+841,(((0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache__DOT__IF_wr_ram_state_whas___05F64_THEN_wr_ram_state_wge_ETC___05F_d166)) 
                            & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache__DOT__m_fillbuffer_mv_fbfull)) 
                               & ((0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache__DOT__IF_wr_fb_state_whas___05F69_THEN_wr_fb_state_wget___05FETC___05F_d171)) 
                                  & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache__DOT__wr_fault_whas)) 
                                     & ((~ (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache__DOT__ff_core_request__DOT__data0_reg[0U] 
                                            >> 2U)) 
                                        & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache__DOT__ff_pending_io_req__DOT__full_reg) 
                                           & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache__DOT__ff_pending_req__DOT__full_reg)))))))));
    bufp->chgBit(oldp+842,((1U & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache__DOT__ff_core_request__DOT__empty_reg)) 
                                  & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache_EN_put_core_req_put)) 
                                     & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache__DOT__m_fillbuffer_mv_release_info___05F33_BITS_12_TO_7___05FETC___05F_d647)))))));
    bufp->chgBit(oldp+843,((((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache__DOT__ff_core_request__DOT__empty_reg)) 
                             & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache_EN_put_core_req_put)) 
                            | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache_EN_put_core_req_put) 
                               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache__DOT__ff_core_request_DEQ) 
                                  & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache__DOT__ff_core_request__DOT__full_reg))))));
    bufp->chgBit(oldp+844,((1U & (((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache__DOT__ff_core_request_DEQ)) 
                                   & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache_EN_put_core_req_put))) 
                                  | (((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache__DOT__ff_core_request_DEQ)) 
                                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache__DOT__ff_core_request__DOT__empty_reg)) 
                                     | ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache_EN_put_core_req_put)) 
                                        & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__imem__DOT__icache__DOT__ff_core_request__DOT__full_reg)))))));
    bufp->chgCData(oldp+845,(((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__mbox__DOT__ff_ordering__DOT__full_reg) 
                                & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__mbox__DOT__mul___05Fmv_ready)) 
                               << 1U) | (((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__mbox__DOT__div___DOT__rg_valid)) 
                                          & (0U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__mbox__DOT__div___DOT__rg_count))) 
                                         & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__mbox__DOT__ff_ordering__DOT__full_reg)))),2);
    bufp->chgBit(oldp+846,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_csr_wait_EN) 
                            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT____VdfgRegularize_h708c710d_0_7) 
                               & (0U != (7U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[0U]))))));
    bufp->chgBit(oldp+847,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__mbox__DOT__div___DOT__rg_result_EN) 
                            | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__mbox__DOT__CAN_FIRE_RL_rl_capture_output) 
                               & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__mbox__DOT____VdfgRegularize_h914c6fe7_3_1)))));
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0_EN_common_ma_flush) {
        __Vtemp_29[0U] = 0U;
        __Vtemp_29[1U] = 0U;
        __Vtemp_29[2U] = 0U;
    } else if (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu_EN_mav_prediction_response) 
                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect[2U] 
                   | ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT____VdfgRegularize_hff374577_0_6)) 
                      & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT____VdfgRegularize_hff374577_0_5) 
                         & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_fence)) 
                            & (1U < (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_50)))))))) {
        __Vtemp_29[0U] = (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT____VdfgRegularize_hff374577_0_7);
        __Vtemp_29[1U] = (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT____VdfgRegularize_hff374577_0_7 
                                  >> 0x20U));
        __Vtemp_29[2U] = (1U & (~ vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect[2U]));
    } else {
        __Vtemp_29[0U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect[0U];
        __Vtemp_29[1U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect[1U];
        __Vtemp_29[2U] = vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect[2U];
    }
    bufp->chgWData(oldp+848,(__Vtemp_29),65);
    bufp->chgQData(oldp+851,((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_initialize_EN) 
                               | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0_EN_common_ma_flush))
                               ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_initialize_EN)
                                   ? 0x1000ULL : ((1U 
                                                   & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_106))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__wr_flush_wget[2U])) 
                                                    << 0x3fU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__wr_flush_wget[1U])) 
                                                       << 0x1fU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__wr_flush_wget[0U])) 
                                                         >> 1U)))
                                                   : 
                                                  ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__rg_eEpoch_EN)
                                                    ? 
                                                   (((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__btaken___05Fh14480)) 
                                                     & (2U 
                                                        == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_D_OUT)))
                                                     ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__nlogical_pc___05Fh14479
                                                     : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__jump_address___05Fh14477)
                                                    : 0ULL)))
                               : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0_tx_tx_to_stage1_enq_ena)
                                   ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_sfence)
                                       ? (4ULL + (0xfffffffffffffffcULL 
                                                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_pc))
                                       : ((1U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect[2U])
                                           ? (((QData)((IData)(
                                                               vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_delayed_redirect[0U])))
                                           : (((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_fence)) 
                                               & ((0U 
                                                   != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT___theResult___05F___05F_6___05Fh3249)) 
                                                  & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT____VdfgRegularize_h27894f64_0_57) 
                                                     & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__bpu__DOT__y_avValue_fst___05Fh105276) 
                                                         >> 1U) 
                                                        & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_51) 
                                                           & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT____VdfgRegularize_hff374577_0_5)) 
                                                              | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT____VdfgRegularize_hff374577_0_6)))))))
                                               ? vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT____VdfgRegularize_hff374577_0_7
                                               : (4ULL 
                                                  + 
                                                  (0xfffffffffffffffcULL 
                                                   & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_pc)))))
                                   : vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_pc))),64);
    bufp->chgBit(oldp+853,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0_EN_common_ma_flush)
                             ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__wr_flush_whas) 
                                & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__wr_flush_wget[0U])
                             : ((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__CAN_FIRE_RL_rl_gen_next_pc) 
                                    & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_fence))) 
                                & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage0__DOT__rg_fence)))));
    bufp->chgQData(oldp+854,(((3U == (3U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__IF_ff_memory_response_ff_i_notEmpty_THEN_ff_me_ETC___05F_d43 
                                            >> 0x10U)))
                               ? (((QData)((IData)(
                                                   vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s0s1_notEmpty_ff_pipe0__DOT__data0_reg[0U])))
                               : (((QData)((IData)(
                                                   vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__rg_prev[2U])) 
                                   << 0x22U) | (((QData)((IData)(
                                                                 vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__rg_prev[1U])) 
                                                 << 2U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage1__DOT__rg_prev[0U])) 
                                                   >> 0x1eU))))),64);
    __Vtemp_32[0U] = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__op2___05Fh3646) 
                       << 1U) | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__wEpoch));
    __Vtemp_32[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__op2___05Fh3646) 
                       >> 0x1fU) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__op2___05Fh3646 
                                             >> 0x20U)) 
                                    << 1U));
    __Vtemp_32[2U] = (0x40U | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__registerfile_read_rs2_addr) 
                                << 1U) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__op2___05Fh3646 
                                                   >> 0x20U)) 
                                          >> 0x1fU)));
    bufp->chgWData(oldp+856,(__Vtemp_32),75);
    bufp->chgBit(oldp+859,(((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2_EN_common_ma_clear_stall)) 
                            & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_microtrap)) 
                               & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_133) 
                                  & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__MUX_rg_stall_write_1___05FVAL_2))))));
    bufp->chgBit(oldp+860,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2_EN_common_ma_clear_stall) 
                            | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2_tx_tx_commitlog_enq_ena) 
                               & (6U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_D_IN))))));
    bufp->chgBit(oldp+861,(((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__rg_microtrap)) 
                            & ((IData)(vlSelf->__VdfgRegularize_hd87f99a1_4_133) 
                               & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__MUX_rg_stall_write_1___05FVAL_2)))));
    bufp->chgBit(oldp+862,(((7U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__IF_rg_microtrap_9_OR_chk_interrupt_7_BIT_0_8_A_ETC___05F_d67)) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage2__DOT__MUX_rg_stall_write_1___05FVAL_2))));
    bufp->chgBit(oldp+863,(((8U == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_insttype_D_OUT)) 
                            & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage3__DOT__rg_eEpoch_read___05F7_CONCAT_rg_wEpoch_9_8_EQ_IF_r_ETC___05F_d93) 
                               & (((~ (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                       >> 0xcU)) & 
                                   ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__mbox__DOT__ff_ordering__DOT__full_reg) 
                                    & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__mbox__DOT__mul___05Fmv_ready))) 
                                  | ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__pipe_s2s3_notEmpty_ff_meta_D_OUT[2U] 
                                      >> 0xcU) & ((
                                                   (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__mbox__DOT__div___DOT__rg_valid)) 
                                                   & (0U 
                                                      == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__mbox__DOT__div___DOT__rg_count))) 
                                                  & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__mbox__DOT__ff_ordering__DOT__full_reg))))))));
    bufp->chgBit(oldp+864,(((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT____VdfgRegularize_h708c710d_0_7)) 
                            & (0U != (7U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[0U])))));
    __Vtemp_34[0U] = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__anydata___05Fh5518) 
                       << 1U) | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_EN_ma_core_req) 
                                  & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_resp_to_core_wget[0U]) 
                                 | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_ff_fwd_request__DOT__empty_reg) 
                                    & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp2_rg_resp_to_core_wget[0U])));
    __Vtemp_34[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__anydata___05Fh5518) 
                       >> 0x1fU) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__anydata___05Fh5518 
                                             >> 0x20U)) 
                                    << 1U));
    __Vtemp_34[2U] = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT____VdfgRegularize_h708c710d_0_7) 
                       << 1U) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__anydata___05Fh5518 
                                          >> 0x20U)) 
                                 >> 0x1fU));
    bufp->chgWData(oldp+865,(__Vtemp_34),66);
    if (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_epoch_1_EQ_IF_rx_fuid_w_data_whas___05F1_THEN_r_ETC___05F_d24) {
        __Vtemp_39[0U] = (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__anydata___05Fh5518);
        __Vtemp_39[1U] = (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__anydata___05Fh5518 
                                  >> 0x20U));
    } else {
        __Vtemp_39[0U] = 0U;
        __Vtemp_39[1U] = (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U] 
                          << 0x1dU);
    }
    __Vtemp_39[2U] = ((0x3c0U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[2U] 
                                 >> 2U)) | ((0x20U 
                                             & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_epoch_1_EQ_IF_rx_fuid_w_data_whas___05F1_THEN_r_ETC___05F_d24)) 
                                                << 5U)) 
                                            | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__rg_epoch_1_EQ_IF_rx_fuid_w_data_whas___05F1_THEN_r_ETC___05F_d24)
                                                ? (0x1fU 
                                                   & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U] 
                                                      >> 3U))
                                                : (0x1fU 
                                                   & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U] 
                                                      >> 3U)))));
    bufp->chgWData(oldp+868,(__Vtemp_39),74);
    if ((0x80U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_trapout_D_OUT[2U])) {
        __Vtemp_46[0U] = (((IData)((((QData)((IData)(
                                                     vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[2U])) 
                                     << 0x38U) | (((QData)((IData)(
                                                                   vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[1U])) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U])) 
                                                     >> 8U)))) 
                           << 1U) | (1U == (0x7fU & 
                                            vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_trapout_D_OUT[2U])));
        __Vtemp_46[1U] = (((IData)((((QData)((IData)(
                                                     vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[2U])) 
                                     << 0x38U) | (((QData)((IData)(
                                                                   vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[1U])) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U])) 
                                                     >> 8U)))) 
                           >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                   vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[2U])) 
                                                   << 0x38U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[1U])) 
                                                      << 0x18U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U])) 
                                                        >> 8U))) 
                                                 >> 0x20U)) 
                                        << 1U));
        __Vtemp_46[2U] = (2U | (((2U == (0x7fU & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_trapout_D_OUT[2U])) 
                                 << 2U) | ((IData)(
                                                   ((((QData)((IData)(
                                                                      vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[2U])) 
                                                      << 0x38U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[1U])) 
                                                         << 0x18U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_fuid_D_OUT[0U])) 
                                                           >> 8U))) 
                                                    >> 0x20U)) 
                                           >> 0x1fU)));
    } else {
        __Vtemp_46[0U] = ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_mav_upd_on_trap) 
                          << 1U);
        __Vtemp_46[1U] = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_mav_upd_on_trap) 
                           >> 0x1fU) | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_mav_upd_on_trap 
                                                 >> 0x20U)) 
                                        << 1U));
        __Vtemp_46[2U] = (2U | ((IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_mav_upd_on_trap 
                                         >> 0x20U)) 
                                >> 0x1fU));
    }
    bufp->chgWData(oldp+871,(__Vtemp_46),67);
    bufp->chgQData(oldp+874,(((0U == (7U & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[0U]))
                               ? (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__r1___05Fread___05Fh9002 
                                  << 1U) : (((QData)((IData)(
                                                             vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[4U])) 
                                             << 0x39U) 
                                            | (((QData)((IData)(
                                                                vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[3U])) 
                                                << 0x19U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_commitlog_D_OUT[2U])) 
                                                  >> 7U))))),64);
    bufp->chgBit(oldp+876,((1U & ((0x344U == (0xfffU 
                                              & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[0U] 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__word___05Fh14925 
                                              >> 1U))
                                   : (IData)((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__word___05Fh15670 
                                              >> 1U))))));
    bufp->chgBit(oldp+877,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mstatus_tsr_EN) 
                            | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_EN_mav_upd_on_ret) 
                               & ((IData)(((0x580U 
                                            == (0x780U 
                                                & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[0U])) 
                                           & (3U != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp2_rg_dcsr_prv_warl)))) 
                                  | ((0xbU != (0xfU 
                                               & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[0U] 
                                                  >> 7U))) 
                                     & ((1U == (3U 
                                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[0U] 
                                                   >> 0xbU))) 
                                        | (IData)((
                                                   (0x1800U 
                                                    == 
                                                    (0x1800U 
                                                     & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[0U])) 
                                                   & (3U 
                                                      != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mstatus_mpp_warl)))))))))));
    bufp->chgBit(oldp+878,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_EN_ma_core_req) 
                            & (IData)(((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp0cfg_warl) 
                                           >> 7U)) 
                                       & (0x1d80U == 
                                          (0x7ff8U 
                                           & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[0U])))))));
    bufp->chgBit(oldp+879,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_EN_ma_core_req) 
                            & (IData)(((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp1cfg_warl) 
                                           >> 7U)) 
                                       & (0x1d88U == 
                                          (0x7ff8U 
                                           & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[0U])))))));
    bufp->chgBit(oldp+880,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_EN_ma_core_req) 
                            & (IData)(((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp2cfg_warl) 
                                           >> 7U)) 
                                       & (0x1d90U == 
                                          (0x7ff8U 
                                           & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[0U])))))));
    bufp->chgBit(oldp+881,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr_EN_ma_core_req) 
                            & (IData)(((~ ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_pmpcfg0_pmp3cfg_warl) 
                                           >> 7U)) 
                                       & (0x1d98U == 
                                          (0x7ff8U 
                                           & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[0U])))))));
    bufp->chgCData(oldp+882,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__MUX_rg_prv_write_1___05FSEL_1)
                               ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT____VdfgRegularize_h1a88907d_0_16)
                                   ? ((0xbU == (0xfU 
                                                & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[0U] 
                                                   >> 7U)))
                                       ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp2_rg_dcsr_prv_warl)
                                       : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mstatus_spp))
                                   : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mstatus_mpp_warl))
                               : ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__NOT_mav_upd_on_trap_cause_BIT_6_073_074_AND_ma_ETC___05F_d1100)
                                   ? ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT____VdfgRegularize_h1a88907d_0_3)
                                       ? 3U : 1U) : 3U))),2);
    bufp->chgCData(oldp+883,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT____VdfgRegularize_h1a88907d_0_16)
                               ? ((0xbU == (0xfU & 
                                            (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__ff_systemout_D_OUT[0U] 
                                             >> 7U)))
                                   ? (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp2_rg_dcsr_prv_warl)
                                   : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mstatus_spp))
                               : (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore__DOT__riscv__DOT__stage5__DOT__csr__DOT__grp1_rg_mstatus_mpp_warl))),2);
    bufp->chgQData(oldp+884,((((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__debug_module__DOT__hahaltreq)) 
                               << 5U) | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__ccore_sb_plic_meip_ex_i)))),53);
    bufp->chgBit(oldp+886,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__hart_reset_0__DOT__rst) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc_RST_N_soc_reset))));
    bufp->chgQData(oldp+887,((((QData)((IData)(((((
                                                   (((((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__WILL_FIRE_RL_sspi_rl_receive_state) 
                                                         & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_count_rx_data_bits_06_EQ_sspi_rg_total_ETC___05F_d409) 
                                                             | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT____VdfgRegularize_h227e91ef_0_29)) 
                                                            & (0U 
                                                               == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rx_fifo_ifc_rDataAvail)))) 
                                                        & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_rx_over_run_err_intr_en)) 
                                                       | ((0x20U 
                                                           == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rx_fifo_ifc_rDataCount)) 
                                                          & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_rx_fifo_full_intr_en))) 
                                                      | ((0x10U 
                                                          == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rx_fifo_ifc_rDataCount)) 
                                                         & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_rx_fifo_half_intr_en))) 
                                                     | ((8U 
                                                         == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rx_fifo_ifc_rDataCount)) 
                                                        & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_rx_fifo_quad_intr_en))) 
                                                    | ((0U 
                                                        == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rx_fifo_ifc_rDataCount)) 
                                                       & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_rx_fifo_empty_intr_en))) 
                                                   | ((0x20U 
                                                       == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_tx_fifo_ifc_rDataCount)) 
                                                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_tx_fifo_full_intr_en))) 
                                                  | ((0x10U 
                                                      == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_tx_fifo_ifc_rDataCount)) 
                                                     & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_tx_fifo_half_intr_en))) 
                                                 | ((8U 
                                                     == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_tx_fifo_ifc_rDataCount)) 
                                                    & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_tx_fifo_quad_intr_en))) 
                                                | ((0U 
                                                    == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_tx_fifo_ifc_rDataCount)) 
                                                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi1__DOT__sspi_rg_tx_fifo_empty_intr_en))))) 
                               << 0x22U) | (((QData)((IData)(
                                                             (((((((((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__WILL_FIRE_RL_sspi_rl_receive_state) 
                                                                       & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_count_rx_data_bits_06_EQ_sspi_rg_total_ETC___05F_d409) 
                                                                           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT____VdfgRegularize_h227e91ef_0_29)) 
                                                                          & (0U 
                                                                             == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rx_fifo_ifc_rDataAvail)))) 
                                                                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_rx_over_run_err_intr_en)) 
                                                                     | ((0x20U 
                                                                         == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rx_fifo_ifc_rDataCount)) 
                                                                        & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_rx_fifo_full_intr_en))) 
                                                                    | ((0x10U 
                                                                        == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rx_fifo_ifc_rDataCount)) 
                                                                       & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_rx_fifo_half_intr_en))) 
                                                                   | ((8U 
                                                                       == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rx_fifo_ifc_rDataCount)) 
                                                                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_rx_fifo_quad_intr_en))) 
                                                                  | ((0U 
                                                                      == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rx_fifo_ifc_rDataCount)) 
                                                                     & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_rx_fifo_empty_intr_en))) 
                                                                 | ((0x20U 
                                                                     == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_tx_fifo_ifc_rDataCount)) 
                                                                    & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_tx_fifo_full_intr_en))) 
                                                                | ((0x10U 
                                                                    == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_tx_fifo_ifc_rDataCount)) 
                                                                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_tx_fifo_half_intr_en))) 
                                                               | ((8U 
                                                                   == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_tx_fifo_ifc_rDataCount)) 
                                                                  & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_tx_fifo_quad_intr_en))) 
                                                              | ((0U 
                                                                  == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_tx_fifo_ifc_rDataCount)) 
                                                                 & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__spi_cluster__DOT__spi0__DOT__sspi_rg_tx_fifo_empty_intr_en))))) 
                                             << 0x21U) 
                                            | (QData)((IData)(
                                                              ((((0U 
                                                                  != 
                                                                  ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__status___05Fh37266) 
                                                                   & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart1__DOT__user_ifc_rg_interrupt_en))) 
                                                                 << 0x1dU) 
                                                                | ((0U 
                                                                    != 
                                                                    ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__status___05Fh37266) 
                                                                     & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__uart_cluster__DOT__uart0__DOT__user_ifc_rg_interrupt_en))) 
                                                                   << 0x1cU)) 
                                                               | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__i2c0_isint) 
                                                                   << 0x1aU) 
                                                                  | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__sync_interrupt__DOT__dSyncReg2) 
                                                                      << 0x17U) 
                                                                     | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__sync_interrupt__DOT__dSyncReg2) 
                                                                         << 0x16U) 
                                                                        | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gpio__DOT__gpio_toplic_15) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gpio__DOT__gpio_toplic_14) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gpio__DOT__gpio_toplic_13) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gpio__DOT__gpio_toplic_12) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gpio__DOT__gpio_toplic_11) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gpio__DOT__gpio_toplic_10) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gpio__DOT__gpio_toplic_9) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gpio__DOT__gpio_toplic_8) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gpio__DOT__gpio_toplic_7) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gpio__DOT__gpio_toplic_6) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gpio__DOT__gpio_toplic_5) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gpio__DOT__gpio_toplic_4) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gpio__DOT__gpio_toplic_3) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gpio__DOT__gpio_toplic_2) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gpio__DOT__gpio_toplic_1) 
                                                                                << 7U) 
                                                                                | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gpio__DOT__gpio_toplic_0) 
                                                                                << 6U))))))))))))))))))))))))),35);
    bufp->chgBit(oldp+889,((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a1_in_wset_1___05FSEL_1) 
                             | (0U == (3U & (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux_muxsel_config 
                                             >> 2U)))) 
                            & ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a1_in_wset_1___05FSEL_1)) 
                               & (IData)(vlSelf->mkTbSoc__DOT__uart1_uart_rXmitDataOut)))));
    bufp->chgBit(oldp+890,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_wr_cntr_overflow_intr_whas) 
                            | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_cntr_overflow_intr_write_1___05FSEL_1))));
    bufp->chgBit(oldp+891,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_wr_cntr_underflow_intr_whas) 
                            | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_cntr_underflow_intr_write_1___05FSEL_1))));
    bufp->chgBit(oldp+892,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                            | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__WILL_FIRE_RL_gptimer_rl_gpt_reset))));
    bufp->chgBit(oldp+893,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_pwm_fall_intr_write_1___05FSEL_2) 
                            | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_pwm_fall_intr_write_1___05FSEL_1))));
    bufp->chgBit(oldp+894,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_pwm_rise_intr_write_1___05FSEL_2) 
                            | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_pwm_rise_intr_write_1___05FSEL_1))));
    bufp->chgBit(oldp+895,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_2) 
                            | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_duty_cycle_write_1___05FSEL_1))));
    bufp->chgBit(oldp+896,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_2) 
                            | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_capture_input) 
                                == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__sync_gpt_in__DOT__dSyncReg2)) 
                               & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_prev_input) 
                                   != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__sync_gpt_in__DOT__dSyncReg2)) 
                                  & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_enable))))));
    bufp->chgBit(oldp+897,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_2) 
                            | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_rg_period_write_1___05FSEL_1))));
    bufp->chgBit(oldp+898,(((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__MUX_gptimer_capture_input_write_1___05FSEL_2)) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__sync_gpt_in__DOT__dSyncReg2))));
    bufp->chgBit(oldp+899,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_clock_selector_CLK_OUT));
    bufp->chgBit(oldp+900,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_new_clock__DOT__current_clk) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_new_clock__DOT__current_gate))));
    bufp->chgBit(oldp+901,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request_dDEQ));
    __Vtemp_47[0U] = (IData)(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT____VdfgRegularize_h4bf44f78_14_13)
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
                               : ((IData)((0x82ULL 
                                           == (0x1fe3ULL 
                                               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))
                                   ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_divider)) 
                                       << 0x21U) | 
                                      (((QData)((IData)(
                                                        (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_src) 
                                                          << 0x1fU) 
                                                         | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_divider)))) 
                                        << 1U) | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_src))))
                                   : ((IData)((0x102ULL 
                                               == (0x1fe3ULL 
                                                   & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))
                                       ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter)))
                                       : ((IData)((0x182ULL 
                                                   == 
                                                   (0x1fe3ULL 
                                                    & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))
                                           ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_repeated_count)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_repeated_count)))
                                           : ((IData)(
                                                      (0x202ULL 
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
                                                   ? 
                                                  (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_period)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_period)))
                                                   : 
                                                  ((IData)(
                                                           (0x302ULL 
                                                            == 
                                                            (0x1fe3ULL 
                                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))
                                                    ? 
                                                   (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_input_capture)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_input_capture)))
                                                    : 0ULL))))))));
    __Vtemp_47[1U] = (IData)((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT____VdfgRegularize_h4bf44f78_14_13)
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
                                : ((IData)((0x82ULL 
                                            == (0x1fe3ULL 
                                                & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))
                                    ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_divider)) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_src) 
                                                           << 0x1fU) 
                                                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_divider)))) 
                                         << 1U) | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_clk_src))))
                                    : ((IData)((0x102ULL 
                                                == 
                                                (0x1fe3ULL 
                                                 & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))
                                        ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_counter)))
                                        : ((IData)(
                                                   (0x182ULL 
                                                    == 
                                                    (0x1fe3ULL 
                                                     & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))
                                            ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_repeated_count)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_repeated_count)))
                                            : ((IData)(
                                                       (0x202ULL 
                                                        == 
                                                        (0x1fe3ULL 
                                                         & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))
                                                ? (
                                                   ((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_duty_cycle)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_duty_cycle)))
                                                : ((IData)(
                                                           (0x282ULL 
                                                            == 
                                                            (0x1fe3ULL 
                                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))
                                                    ? 
                                                   (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_period)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_period)))
                                                    : 
                                                   ((IData)(
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
    __Vtemp_47[2U] = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT____VdfgRegularize_h4bf44f78_14_13) 
                       | (((4U == (0xffU & (IData)(
                                                   (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg 
                                                    >> 5U)))) 
                           | ((8U == (0xffU & (IData)(
                                                      (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg 
                                                       >> 5U)))) 
                              | ((0xcU == (0xffU & (IData)(
                                                           (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg 
                                                            >> 5U)))) 
                                 | ((0x10U == (0xffU 
                                               & (IData)(
                                                         (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg 
                                                          >> 5U)))) 
                                    | ((0x14U == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg 
                                                             >> 5U)))) 
                                       | (0x18U == 
                                          (0xffU & (IData)(
                                                           (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg 
                                                            >> 5U))))))))) 
                          & (2U == (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__dDoutReg)))))
                       ? 0U : 2U);
    bufp->chgWData(oldp+902,(__Vtemp_47),66);
    bufp->chgBit(oldp+905,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response_dDEQ));
    bufp->chgBit(oldp+906,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response_dDEQ));
    bufp->chgQData(oldp+907,((((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__r1___05Fread___05Fh2016)) 
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
                                                                           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_enable))))))))))),64);
    bufp->chgBit(oldp+909,((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_capture_input) 
                             == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__sync_gpt_in__DOT__dSyncReg2)) 
                            & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_rg_prev_input) 
                                != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__sync_gpt_in__DOT__dSyncReg2)) 
                               & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__gptimer_gpt_enable)))));
    bufp->chgBit(oldp+910,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_new_clock__DOT__current_gate));
    bufp->chgBit(oldp+911,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__clk_divider_new_clock__DOT__current_clk));
    bufp->chgIData(oldp+912,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__i),32);
    bufp->chgIData(oldp+913,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_rd_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__i),32);
    bufp->chgIData(oldp+914,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wdata_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__i),32);
    bufp->chgIData(oldp+915,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__i),32);
    bufp->chgIData(oldp+916,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__ff_wr_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__i),32);
    bufp->chgBit(oldp+917,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__sync_gpt_in__DOT__sSyncReg));
    bufp->chgBit(oldp+918,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_wr_cntr_overflow_intr_whas) 
                            | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_cntr_overflow_intr_write_1___05FSEL_1))));
    bufp->chgBit(oldp+919,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_wr_cntr_underflow_intr_whas) 
                            | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_cntr_underflow_intr_write_1___05FSEL_1))));
    bufp->chgBit(oldp+920,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_1) 
                            | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__WILL_FIRE_RL_gptimer_rl_gpt_reset))));
    bufp->chgBit(oldp+921,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_pwm_fall_intr_write_1___05FSEL_2) 
                            | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_pwm_fall_intr_write_1___05FSEL_1))));
    bufp->chgBit(oldp+922,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_pwm_rise_intr_write_1___05FSEL_2) 
                            | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_pwm_rise_intr_write_1___05FSEL_1))));
    bufp->chgBit(oldp+923,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_2) 
                            | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_duty_cycle_write_1___05FSEL_1))));
    bufp->chgBit(oldp+924,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_2) 
                            | (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_capture_input) 
                                == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__sync_gpt_in__DOT__dSyncReg2)) 
                               & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_prev_input) 
                                   != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__sync_gpt_in__DOT__dSyncReg2)) 
                                  & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_enable))))));
    bufp->chgBit(oldp+925,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_2) 
                            | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_rg_period_write_1___05FSEL_1))));
    bufp->chgBit(oldp+926,(((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__MUX_gptimer_capture_input_write_1___05FSEL_2)) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__sync_gpt_in__DOT__dSyncReg2))));
    bufp->chgBit(oldp+927,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_clock_selector_CLK_OUT));
    bufp->chgBit(oldp+928,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_new_clock__DOT__current_clk) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_new_clock__DOT__current_gate))));
    bufp->chgBit(oldp+929,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request_dDEQ));
    __Vtemp_48[0U] = (IData)(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT____VdfgRegularize_h4bf44f78_14_13)
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
                               : ((IData)((0x82ULL 
                                           == (0x1fe3ULL 
                                               & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))
                                   ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_divider)) 
                                       << 0x21U) | 
                                      (((QData)((IData)(
                                                        (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_src) 
                                                          << 0x1fU) 
                                                         | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_divider)))) 
                                        << 1U) | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_src))))
                                   : ((IData)((0x102ULL 
                                               == (0x1fe3ULL 
                                                   & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))
                                       ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter)))
                                       : ((IData)((0x182ULL 
                                                   == 
                                                   (0x1fe3ULL 
                                                    & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))
                                           ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_repeated_count)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_repeated_count)))
                                           : ((IData)(
                                                      (0x202ULL 
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
                                                   ? 
                                                  (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_period)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_period)))
                                                   : 
                                                  ((IData)(
                                                           (0x302ULL 
                                                            == 
                                                            (0x1fe3ULL 
                                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))
                                                    ? 
                                                   (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_input_capture)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_input_capture)))
                                                    : 0ULL))))))));
    __Vtemp_48[1U] = (IData)((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT____VdfgRegularize_h4bf44f78_14_13)
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
                                : ((IData)((0x82ULL 
                                            == (0x1fe3ULL 
                                                & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))
                                    ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_divider)) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_src) 
                                                           << 0x1fU) 
                                                          | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_divider)))) 
                                         << 1U) | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_clk_src))))
                                    : ((IData)((0x102ULL 
                                                == 
                                                (0x1fe3ULL 
                                                 & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))
                                        ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_counter)))
                                        : ((IData)(
                                                   (0x182ULL 
                                                    == 
                                                    (0x1fe3ULL 
                                                     & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))
                                            ? (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_repeated_count)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_repeated_count)))
                                            : ((IData)(
                                                       (0x202ULL 
                                                        == 
                                                        (0x1fe3ULL 
                                                         & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))
                                                ? (
                                                   ((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_duty_cycle)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_duty_cycle)))
                                                : ((IData)(
                                                           (0x282ULL 
                                                            == 
                                                            (0x1fe3ULL 
                                                             & vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))
                                                    ? 
                                                   (((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_period)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_period)))
                                                    : 
                                                   ((IData)(
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
    __Vtemp_48[2U] = (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT____VdfgRegularize_h4bf44f78_14_13) 
                       | (((4U == (0xffU & (IData)(
                                                   (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg 
                                                    >> 5U)))) 
                           | ((8U == (0xffU & (IData)(
                                                      (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg 
                                                       >> 5U)))) 
                              | ((0xcU == (0xffU & (IData)(
                                                           (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg 
                                                            >> 5U)))) 
                                 | ((0x10U == (0xffU 
                                               & (IData)(
                                                         (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg 
                                                          >> 5U)))) 
                                    | ((0x14U == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg 
                                                             >> 5U)))) 
                                       | (0x18U == 
                                          (0xffU & (IData)(
                                                           (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg 
                                                            >> 5U))))))))) 
                          & (2U == (3U & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__dDoutReg)))))
                       ? 0U : 2U);
    bufp->chgWData(oldp+930,(__Vtemp_48),66);
    bufp->chgBit(oldp+933,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response_dDEQ));
    bufp->chgBit(oldp+934,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response_dDEQ));
    bufp->chgQData(oldp+935,((((QData)((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__r1___05Fread___05Fh2016)) 
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
                                                                           | (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_enable))))))))))),64);
    bufp->chgBit(oldp+937,((((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_capture_input) 
                             == (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__sync_gpt_in__DOT__dSyncReg2)) 
                            & (((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_rg_prev_input) 
                                != (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__sync_gpt_in__DOT__dSyncReg2)) 
                               & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__gptimer_gpt_enable)))));
    bufp->chgBit(oldp+938,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_new_clock__DOT__current_gate));
    bufp->chgBit(oldp+939,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__clk_divider_new_clock__DOT__current_clk));
    bufp->chgIData(oldp+940,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__i),32);
    bufp->chgIData(oldp+941,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_rd_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__i),32);
    bufp->chgIData(oldp+942,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wdata_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__i),32);
    bufp->chgIData(oldp+943,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_request__DOT__incrGray__Vstatic__incrGrayBlock__DOT__i),32);
    bufp->chgIData(oldp+944,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__ff_wr_response__DOT__incrGray__Vstatic__incrGrayBlock__DOT__i),32);
    bufp->chgBit(oldp+945,(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__sync_gpt_in__DOT__sSyncReg));
    bufp->chgBit(oldp+946,(((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__pinmuxtop__DOT__user_ifc_pinmux__DOT__MUX_wrgpioa_a1_in_wset_1___05FSEL_1)) 
                            & (IData)(vlSelf->mkTbSoc__DOT__uart1_uart_rXmitDataOut))));
    bufp->chgBit(oldp+947,(((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_23_write_1___05FSEL_2)) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer0__DOT__sync_interrupt__DOT__dSyncReg2))));
    bufp->chgBit(oldp+948,(((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_24_write_1___05FSEL_2)) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__gptimer1__DOT__sync_interrupt__DOT__dSyncReg2))));
    bufp->chgBit(oldp+949,(((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__plic__DOT__MUX_plic_v_reg_source_busy_27_write_1___05FSEL_2)) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__mixed_cluster__DOT__i2c0_isint))));
    bufp->chgBit(oldp+950,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_start_D_IN) 
                            | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__ff_lower_order_bits_DEQ) 
                               & (1U == vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_total_count)))));
    bufp->chgIData(oldp+951,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__MUX_rg_start_address_write_1___05FSEL_1)
                               ? ((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__s_xactor_f_wr_data__DOT__data0_reg[1U] 
                                   << 0x13U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U] 
                                                >> 0xdU))
                               : ((IData)(4U) + vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_start_address))),32);
    bufp->chgIData(oldp+952,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_end_address_EN)
                               ? VL_SHIFTR_III(32,32,32, 
                                               (((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__s_xactor_f_wr_data__DOT__data0_reg[1U] 
                                                  << 0x13U) 
                                                 | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U] 
                                                    >> 0xdU)) 
                                                - vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_start_address), 2U)
                               : (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_total_count 
                                  - (IData)(1U)))),32);
    bufp->chgIData(oldp+953,(VL_SHIFTR_III(32,32,32, 
                                           (((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__s_xactor_f_wr_data__DOT__data0_reg[1U] 
                                              << 0x13U) 
                                             | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U] 
                                                >> 0xdU)) 
                                            - vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_start_address), 2U)),32);
    bufp->chgIData(oldp+954,((((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__s_xactor_f_wr_data__DOT__data0_reg[1U] 
                                << 0x13U) | (vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__s_xactor_f_wr_data__DOT__data0_reg[0U] 
                                             >> 0xdU)) 
                              - vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_start_address)),32);
    bufp->chgBit(oldp+955,((vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_start_address 
                            < vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__rg_end_address)));
    bufp->chgBit(oldp+956,((((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__m_xactor_f_rd_addr__DOT__empty_reg)) 
                             & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__ff_lower_order_bits_ENQ)) 
                            | ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__ff_lower_order_bits_ENQ) 
                               & ((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr_ENQ) 
                                  & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__m_xactor_f_rd_addr__DOT__full_reg))))));
    bufp->chgBit(oldp+957,((1U & (((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr_ENQ)) 
                                   & (~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__ff_lower_order_bits_ENQ))) 
                                  | (((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__fabric_xactors_from_masters_3_f_rd_addr_ENQ)) 
                                      & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__m_xactor_f_rd_addr__DOT__empty_reg)) 
                                     | ((~ (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__ff_lower_order_bits_ENQ)) 
                                        & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__m_xactor_f_rd_addr__DOT__full_reg)))))));
    bufp->chgBit(oldp+958,(((IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__ff_lower_order_bits_ENQ) 
                            & (IData)(vlSelf->mkTbSoc__DOT__soc__DOT__soc__DOT__signature__DOT__m_xactor_f_rd_addr__DOT__empty_reg))));
    bufp->chgBit(oldp+959,(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dEnqToggle));
    bufp->chgBit(oldp+960,(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dDeqToggle));
    bufp->chgBit(oldp+961,(vlSelf->mkTbSoc__DOT__soc__DOT__sync_request_to_dm__DOT__dSyncReg1));
    bufp->chgBit(oldp+962,(vlSelf->mkTbSoc__DOT__tck_clk__DOT__current_gate));
    bufp->chgBit(oldp+963,(vlSelf->mkTbSoc__DOT__tck_clk__DOT__current_clk));
}

void VmkTbSoc_edited___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTbSoc_edited___024root__trace_cleanup\n"); );
    // Init
    VmkTbSoc_edited___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VmkTbSoc_edited___024root*>(voidSelf);
    VmkTbSoc_edited__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x3aU)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}
