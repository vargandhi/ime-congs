// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8114(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8114\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__lb_write_arb_io_out_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__lb_write_arb__DOT___T_1) 
           | ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__state)) 
              & ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__state)) 
                 & ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__state)) 
                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3_io_mem_grant_valid))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_226 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_218_0) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid)) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_218_1) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_203 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_157 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache_auto_master_out_a_valid) 
            << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_acquire_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_307 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_304) 
           | (0x1cU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_304) 
                       << 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2112 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_st_dep_mask);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2113 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_st_dep_mask);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2114 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_st_dep_mask);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2115 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_st_dep_mask);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8115(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8115\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2116 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_st_dep_mask);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2117 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_st_dep_mask);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2118 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_st_dep_mask);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2119 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_st_dep_mask);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2120 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_8_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_8_bits_st_dep_mask);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2121 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_9_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_9_bits_st_dep_mask);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2122 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_10_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_10_bits_st_dep_mask);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2123 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_11_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_11_bits_st_dep_mask);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8116(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8116\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2124 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_12_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_12_bits_st_dep_mask);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2125 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_13_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_13_bits_st_dep_mask);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2126 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_14_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_14_bits_st_dep_mask);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2127 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_15_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_15_bits_st_dep_mask);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2128 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_16_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_16_bits_st_dep_mask);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2129 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_17_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_17_bits_st_dep_mask);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2130 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_18_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_18_bits_st_dep_mask);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2131 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_19_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_19_bits_st_dep_mask);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8117(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8117\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2132 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_20_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_20_bits_st_dep_mask);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2133 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_21_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_21_bits_st_dep_mask);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2134 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_22_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_22_bits_st_dep_mask);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2135 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_23_bits_st_dep_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_23_bits_st_dep_mask);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_12 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__clear_store)
            ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__live_store_mask 
               & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_head))))
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__live_store_mask);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__wait_for_empty_pipeline_2 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_2_is_unique) 
            | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_custom_0 
                       >> 3U))) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_707) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_valids_0) 
                                      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_valids_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__wait_for_empty_pipeline_1 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_1_is_unique) 
            | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_custom_0 
                       >> 3U))) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_707) 
                                   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_valids_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__wait_for_empty_pipeline_0 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_is_unique) 
            | (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_custom_0 
                       >> 3U))) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_707));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8118(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8118\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp9299[4];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__store_needs_order 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5946) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5948));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_615 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_valid_0) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_hit_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_618 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_valid_0) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_hit_0)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_5 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_5 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_4;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_5 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_5 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_4;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_5 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_5 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_4;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_4 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_4 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_3;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_4 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory_io_read_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_4 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__MaxPeriodFibonacciLFSR__DOT__state_3;
        }
    }
    __Vtemp9299[0U] = ((0x200000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                        ? 0x200000U : ((0x400000U & 
                                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                        ? 0x400000U
                                        : ((0x800000U 
                                            & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                            ? 0x800000U
                                            : ((0x1000000U 
                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                ? 0x1000000U
                                                : (
                                                   (0x2000000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                    ? 0x2000000U
                                                    : 
                                                   ((0x4000000U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                     ? 0x4000000U
                                                     : 
                                                    ((0x8000000U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                      ? 0x8000000U
                                                      : 
                                                     ((0x10000000U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                       ? 0x10000000U
                                                       : 
                                                      ((0x20000000U 
                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                        ? 0x20000000U
                                                        : 
                                                       ((0x40000000U 
                                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                         ? 0x40000000U
                                                         : 
                                                        ((0x80000000U 
                                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                          ? 0x80000000U
                                                          : 
                                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_572[0U])))))))))));
    __Vtemp9299[1U] = ((0x200000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                        ? 0U : ((0x400000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                 ? 0U : ((0x800000U 
                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                          ? 0U : ((0x1000000U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                   ? 0U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                    ? 0U
                                                    : 
                                                   ((0x4000000U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                     ? 0U
                                                     : 
                                                    ((0x8000000U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                      ? 0U
                                                      : 
                                                     ((0x10000000U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                       ? 0U
                                                       : 
                                                      ((0x20000000U 
                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                        ? 0U
                                                        : 
                                                       ((0x40000000U 
                                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                         ? 0U
                                                         : 
                                                        ((0x80000000U 
                                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                          ? 0U
                                                          : 
                                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_572[1U])))))))))));
    __Vtemp9299[2U] = ((0x200000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                        ? 0U : ((0x400000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                 ? 0U : ((0x800000U 
                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                          ? 0U : ((0x1000000U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                   ? 0U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                    ? 0U
                                                    : 
                                                   ((0x4000000U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                     ? 0U
                                                     : 
                                                    ((0x8000000U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                      ? 0U
                                                      : 
                                                     ((0x10000000U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                       ? 0U
                                                       : 
                                                      ((0x20000000U 
                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                        ? 0U
                                                        : 
                                                       ((0x40000000U 
                                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                         ? 0U
                                                         : 
                                                        ((0x80000000U 
                                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                          ? 0U
                                                          : 
                                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_572[2U])))))))))));
    __Vtemp9299[3U] = ((0x200000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                        ? 0U : ((0x400000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                 ? 0U : ((0x800000U 
                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                          ? 0U : ((0x1000000U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                   ? 0U
                                                   : 
                                                  ((0x2000000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                    ? 0U
                                                    : 
                                                   ((0x4000000U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                     ? 0U
                                                     : 
                                                    ((0x8000000U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                      ? 0U
                                                      : 
                                                     ((0x10000000U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                       ? 0U
                                                       : 
                                                      ((0x20000000U 
                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                        ? 0U
                                                        : 
                                                       ((0x40000000U 
                                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                         ? 0U
                                                         : 
                                                        ((0x80000000U 
                                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                          ? 0U
                                                          : 
                                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_572[3U])))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_589[0U] 
        = ((0x8000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
            ? 0x8000U : ((0x10000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                          ? 0x10000U : ((0x20000U & 
                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                         ? 0x20000U
                                         : ((0x40000U 
                                             & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                             ? 0x40000U
                                             : ((0x80000U 
                                                 & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                 ? 0x80000U
                                                 : 
                                                ((0x100000U 
                                                  & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                  ? 0x100000U
                                                  : 
                                                 __Vtemp9299[0U]))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_589[1U] 
        = ((0x8000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
            ? 0U : ((0x10000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                     ? 0U : ((0x20000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                              ? 0U : ((0x40000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                       ? 0U : ((0x80000U 
                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                ? 0U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                    ? 0U
                                                    : 
                                                   __Vtemp9299[1U]))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_589[2U] 
        = ((0x8000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
            ? 0U : ((0x10000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                     ? 0U : ((0x20000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                              ? 0U : ((0x40000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                       ? 0U : ((0x80000U 
                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                ? 0U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                    ? 0U
                                                    : 
                                                   __Vtemp9299[2U]))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_589[3U] 
        = ((0x8000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
            ? 0U : ((0x10000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                     ? 0U : ((0x20000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                              ? 0U : ((0x40000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                       ? 0U : ((0x80000U 
                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                ? 0U
                                                : (
                                                   (0x100000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_404[0U])
                                                    ? 0U
                                                    : 
                                                   __Vtemp9299[3U]))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8119(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8119\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
        = (VL_ULL(0x7fffffffffffff) & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165) 
                                         & (0U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164)))
                                        ? ((VL_ULL(1) 
                                            + (VL_ULL(0x3fffffffffffff) 
                                               & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOut_sig 
                                                   >> 2U) 
                                                  | (VL_ULL(0x3fffffffffffffff) 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153)))) 
                                           & (~ (((
                                                   (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC)) 
                                                   & (0U 
                                                      != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162))))
                                                  ? 
                                                 (VL_ULL(1) 
                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153 
                                                     << 1U))
                                                  : VL_ULL(0))))
                                        : ((VL_ULL(0x3fffffffffffff) 
                                            & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOut_sig 
                                                & (~ 
                                                   (VL_ULL(3) 
                                                    | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153 
                                                       << 2U)))) 
                                               >> 2U)) 
                                           | (((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC)) 
                                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164))
                                               ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159 
                                                  >> 1U)
                                               : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S_sqrt) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_S_sqrt));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_148 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S) 
            & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__r_buffer_fin_sqrt)
                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_S_sqrt)
                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_S_div)))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A4_div 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S_div) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_S_div));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT___T_149 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__p2) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__ppred));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT___T_147 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT___T_118) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__ppred));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT___T_148 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__p1) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__ppred));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__ppred = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__ppred 
                = (1U & (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_40)))
                             ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__ppred))
                             : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_38)))
                                 ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__ppred))
                                 : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__ppred))))));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8120(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8120\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_1335 
        = (0xfU & (((((((((((((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_1315) 
                                      ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2bU] 
                                          << 0xcU) 
                                         | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2aU] 
                                            >> 0x14U))) 
                                     ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2bU] 
                                         << 8U) | (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2aU] 
                                                   >> 0x18U))) 
                                    ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2bU] 
                                        << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2aU] 
                                                  >> 0x1cU))) 
                                   ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2bU]) 
                                  ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2cU] 
                                      << 0x1cU) | (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2bU] 
                                                   >> 4U))) 
                                 ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2cU] 
                                     << 0x18U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2bU] 
                                                  >> 8U))) 
                                ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2cU] 
                                    << 0x14U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2bU] 
                                                 >> 0xcU))) 
                               ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2cU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2bU] 
                                                >> 0x10U))) 
                              ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2cU] 
                                  << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2bU] 
                                              >> 0x14U))) 
                             ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2cU] 
                                 << 8U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2bU] 
                                           >> 0x18U))) 
                            ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2cU] 
                                << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2bU] 
                                          >> 0x1cU))) 
                           ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2cU]) 
                          ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2dU] 
                              << 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2cU] 
                                           >> 4U))) 
                         ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2dU] 
                             << 0x18U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2cU] 
                                          >> 8U))) 
                        ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2dU] 
                            << 0x14U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2cU] 
                                         >> 0xcU))) 
                       ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2dU] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2cU] 
                                        >> 0x10U))) 
                      ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2dU] 
                          << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2cU] 
                                      >> 0x14U))) ^ 
                     ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2dU] 
                       << 8U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2cU] 
                                 >> 0x18U))) ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2dU] 
                                                 << 4U) 
                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2cU] 
                                                   >> 0x1cU))) 
                   ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x2dU]));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8121(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8121\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_1335 
        = (0xfU & (((((((((((((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_1315) 
                                      ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2bU] 
                                          << 0xcU) 
                                         | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2aU] 
                                            >> 0x14U))) 
                                     ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2bU] 
                                         << 8U) | (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2aU] 
                                                   >> 0x18U))) 
                                    ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2bU] 
                                        << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2aU] 
                                                  >> 0x1cU))) 
                                   ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2bU]) 
                                  ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2cU] 
                                      << 0x1cU) | (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2bU] 
                                                   >> 4U))) 
                                 ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2cU] 
                                     << 0x18U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2bU] 
                                                  >> 8U))) 
                                ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2cU] 
                                    << 0x14U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2bU] 
                                                 >> 0xcU))) 
                               ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2cU] 
                                   << 0x10U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2bU] 
                                                >> 0x10U))) 
                              ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2cU] 
                                  << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2bU] 
                                              >> 0x14U))) 
                             ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2cU] 
                                 << 8U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2bU] 
                                           >> 0x18U))) 
                            ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2cU] 
                                << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2bU] 
                                          >> 0x1cU))) 
                           ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2cU]) 
                          ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2dU] 
                              << 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2cU] 
                                           >> 4U))) 
                         ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2dU] 
                             << 0x18U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2cU] 
                                          >> 8U))) 
                        ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2dU] 
                            << 0x14U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2cU] 
                                         >> 0xcU))) 
                       ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2dU] 
                           << 0x10U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2cU] 
                                        >> 0x10U))) 
                      ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2dU] 
                          << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2cU] 
                                      >> 0x14U))) ^ 
                     ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2dU] 
                       << 8U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2cU] 
                                 >> 0x18U))) ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2dU] 
                                                 << 4U) 
                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2cU] 
                                                   >> 0x1cU))) 
                   ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x2dU]));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8122(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8122\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__ppred = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__ppred 
                = (1U & (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_31)))
                             ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__ppred))
                             : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_29)))
                                 ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_12__DOT__ppred))
                                 : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__ppred))))));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_npc_misaligned 
        = (1U & (((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa 
                              >> 2U))) & (IData)((VL_ULL(0x7fffffffff) 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_928 
                                                     >> 1U)))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_sfence))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_931 
        = ((VL_ULL(0xfffffffffe) & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_928) 
           != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_pc);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__alu__DOT__slt 
        = (1U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__alu_io_in1 
                                 >> 0x3fU))) == (1U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__alu_io_in2 
                                                            >> 0x3fU))))
                  ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__alu_io_adder_out 
                             >> 0x3fU)) : ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))
                                            ? (IData)(
                                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__alu_io_in2 
                                                       >> 0x3fU))
                                            : (IData)(
                                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__alu_io_in1 
                                                       >> 0x3fU)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__alu__DOT___T_55 
        = ((VL_ULL(0xffff0000ffff) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__alu__DOT___T_45 
                                      >> 0x10U)) | 
           (VL_ULL(0xffff0000ffff0000) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__alu__DOT___T_45 
                                          << 0x10U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8123(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8123\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2092 
        = (0xfU & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2083))
                    ? (~ (2U | (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2016) 
                                   << 1U)))) : (2U 
                                                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2016) 
                                                   << 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_989 
        = (((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_986 
             | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_9)
                 ? ((0xc0000U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                          >> 0x20U)) 
                                 << 0x12U)) | ((0x3fe00U 
                                                & (((1U 
                                                     > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_level))
                                                     ? 
                                                    (0xfffffe00U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s1_pc 
                                                                >> 0xcU)))
                                                     : 0U) 
                                                   | (0xffe00U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                                 >> 0xeU))))) 
                                               | (0x1ffU 
                                                  & ((IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s1_pc 
                                                              >> 0xcU)) 
                                                     | (0xfffffU 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                                   >> 0xeU)))))))
                 : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_10)
                            ? ((0xc0000U & ((IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                     >> 0x20U)) 
                                            << 0x12U)) 
                               | ((0x3fe00U & (((1U 
                                                 > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_level))
                                                 ? 
                                                (0xfffffe00U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s1_pc 
                                                            >> 0xcU)))
                                                 : 0U) 
                                               | (0xffe00U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                             >> 0xeU))))) 
                                  | (0x1ffU & ((IData)(
                                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s1_pc 
                                                        >> 0xcU)) 
                                               | (0xfffffU 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                             >> 0xeU)))))))
                            : 0U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__hitsVec_11)
                                       ? ((0xc0000U 
                                           & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                       >> 0x20U)) 
                                              << 0x12U)) 
                                          | ((0x3fe00U 
                                              & (((1U 
                                                   > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_level))
                                                   ? 
                                                  (0xfffffe00U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s1_pc 
                                                              >> 0xcU)))
                                                   : 0U) 
                                                 | (0xffe00U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                               >> 0xeU))))) 
                                             | (0x1ffU 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s1_pc 
                                                            >> 0xcU)) 
                                                   | (0xfffffU 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                                 >> 0xeU)))))))
                                       : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8124(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8124\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__tlb_miss 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__bad_va))) 
           & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__real_hits)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2113 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__real_hits) 
                  >> 1U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__real_hits) 
                            >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2129 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__real_hits) 
                  >> 4U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__real_hits) 
                            >> 5U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2150 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__real_hits) 
                  >> 7U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__real_hits) 
                            >> 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2164 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__real_hits) 
                  >> 9U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__real_hits) 
                            >> 0xaU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2173 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__real_hits) 
                  >> 0xbU) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__real_hits) 
                              >> 0xcU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_76 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__mem_resp_valid) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__traverse)) 
            & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__hits))))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__invalidated)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___GEN_113 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__traverse)) 
           & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__res_v) 
               & (VL_ULL(0) == (VL_ULL(0x3ffffffff) 
                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__mem_resp_data 
                                   >> 0x1eU)))) & (2U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1031 
        = (((QData)((IData)((0xfffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_ppn)))) 
            << 0xeU) | (QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_u) 
                                         << 0xdU) | 
                                        ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g) 
                                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_v)) 
                                          << 0xcU) 
                                         | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__resp_ae) 
                                             << 0xbU) 
                                            | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1000) 
                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_w)) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_d)) 
                                                << 0xaU) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1000) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_x)) 
                                                   << 9U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1000) 
                                                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_r)) 
                                                      << 8U) 
                                                     | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_238) 
                                                           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__deny_access_to_debug))) 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_644)
                                                              ? 
                                                             ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_w) 
                                                              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_646))
                                                              : 
                                                             ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_556)
                                                               ? 
                                                              ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_w) 
                                                               | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_558))
                                                               : 
                                                              ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_468)
                                                                ? 
                                                               ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_w) 
                                                                | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_470))
                                                                : 
                                                               ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_380)
                                                                 ? 
                                                                ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_w) 
                                                                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_382))
                                                                 : 
                                                                ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_292)
                                                                  ? 
                                                                 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_w) 
                                                                  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_294))
                                                                  : 
                                                                 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_204)
                                                                   ? 
                                                                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_w) 
                                                                   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_206))
                                                                   : 
                                                                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_116)
                                                                    ? 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_w) 
                                                                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_118))
                                                                    : 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_28)
                                                                     ? 
                                                                    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_w) 
                                                                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_30))
                                                                     : 
                                                                    (1U 
                                                                     < 
                                                                     (3U 
                                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_priv)))))))))))) 
                                                         << 7U) 
                                                        | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__prot_x) 
                                                            << 6U) 
                                                           | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__legal_address) 
                                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__deny_access_to_debug))) 
                                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_644)
                                                                    ? 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_r) 
                                                                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_646))
                                                                    : 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_556)
                                                                     ? 
                                                                    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_r) 
                                                                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_558))
                                                                     : 
                                                                    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_468)
                                                                      ? 
                                                                     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_r) 
                                                                      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_470))
                                                                      : 
                                                                     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_380)
                                                                       ? 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_r) 
                                                                       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_382))
                                                                       : 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_292)
                                                                        ? 
                                                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_r) 
                                                                        | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_294))
                                                                        : 
                                                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_204)
                                                                         ? 
                                                                        ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_r) 
                                                                         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_206))
                                                                         : 
                                                                        ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_116)
                                                                          ? 
                                                                         ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_r) 
                                                                          | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_118))
                                                                          : 
                                                                         ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_28)
                                                                           ? 
                                                                          ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_r) 
                                                                           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_30))
                                                                           : 
                                                                          (1U 
                                                                           < 
                                                                           (3U 
                                                                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_priv)))))))))))) 
                                                               << 5U) 
                                                              | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_238) 
                                                                  << 4U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_238) 
                                                                     << 3U) 
                                                                    | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__legal_address) 
                                                                         & ((((VL_ULL(0) 
                                                                               == 
                                                                               (VL_ULL(0x86012000) 
                                                                                & (VL_ULL(0x2010000) 
                                                                                ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr))) 
                                                                              | (VL_ULL(0) 
                                                                                == 
                                                                                (VL_ULL(0x82012000) 
                                                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr))) 
                                                                             | (VL_ULL(0) 
                                                                                == 
                                                                                (VL_ULL(0x84000000) 
                                                                                & (VL_ULL(0x4000000) 
                                                                                ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr)))) 
                                                                            | (VL_ULL(0) 
                                                                               == 
                                                                               (VL_ULL(0x86010000) 
                                                                                & (VL_ULL(0x2000000) 
                                                                                ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__mpu_physaddr))))) 
                                                                        << 2U) 
                                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__cacheable) 
                                                                          << 1U))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8125(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8125\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_set_sboard 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_ctrl_div) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_dcache_miss));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_fpu_dmem_resp_val 
        = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__dmem_resp_valid) 
                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_tag) 
                       >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1127 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__dmem_resp_valid) 
           & (~ (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_tag) 
                          >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__dmem_resp_replay 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__dmem_resp_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__doUncachedResp));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_140 
        = (0xffU & ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_131))
                     ? (~ (2U | (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_56) 
                                    << 1U)))) : (2U 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_56) 
                                                    << 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_701 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_545) 
            & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a))
                ? (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                     ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_261 
                        >> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                                   ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_261 
                                      >> 9U) : ((1U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                                                 ? 
                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_261 
                                                 >> 0x12U)
                                                 : 
                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_261 
                                                 >> 0x1bU)))) 
                   | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                       ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                        & (((QData)((IData)(
                                                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_560[2U])) 
                                            << 0x34U) 
                                           | (((QData)((IData)(
                                                               vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_560[1U])) 
                                               << 0x14U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_560[0U])) 
                                                 >> 0xcU)))))
                       : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                           ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                            & (((QData)((IData)(
                                                                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_560[2U])) 
                                                << 0x34U) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_560[1U])) 
                                                   << 0x14U) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_560[0U])) 
                                                     >> 0xcU)))))
                           : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                               ? (VL_ULL(0) != (VL_ULL(0x1fffffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_560[2U])) 
                                                    << 0x2bU) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_560[1U])) 
                                                       << 0xbU) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_560[0U])) 
                                                         >> 0x15U)))))
                               : (VL_ULL(0) != (VL_ULL(0xfffffffff) 
                                                & (((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_560[2U])) 
                                                    << 0x22U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_560[1U])) 
                                                       << 2U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_560[0U])) 
                                                         >> 0x1eU)))))))))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a)) 
                   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_539) 
                       | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_596))) 
                      | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_518)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_617)))))) 
           & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a))
               ? (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_270 
                       >> 9U) : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                                  ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_270 
                                     >> 9U) : ((1U 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                                                ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_270 
                                                   >> 0x12U)
                                                : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_270 
                                                   >> 0x1bU)))) 
                  | ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                      ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                       & (((QData)((IData)(
                                                           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_638[2U])) 
                                           << 0x34U) 
                                          | (((QData)((IData)(
                                                              vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_638[1U])) 
                                              << 0x14U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_638[0U])) 
                                                >> 0xcU)))))
                      : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                          ? (VL_ULL(0) != (VL_ULL(0x3fffffffffffff) 
                                           & (((QData)((IData)(
                                                               vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_638[2U])) 
                                               << 0x34U) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_638[1U])) 
                                                  << 0x14U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_638[0U])) 
                                                    >> 0xcU)))))
                          : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                              ? (VL_ULL(0) != (VL_ULL(0x1fffffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_638[2U])) 
                                                   << 0x2bU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_638[1U])) 
                                                      << 0xbU) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_638[0U])) 
                                                        >> 0x15U)))))
                              : (VL_ULL(0) != (VL_ULL(0xfffffffff) 
                                               & (((QData)((IData)(
                                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_638[2U])) 
                                                   << 0x22U) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_638[1U])) 
                                                      << 2U) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_638[0U])) 
                                                        >> 0x1eU)))))))))
               : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a)) 
                  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_617) 
                      | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_674))) 
                     | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_596)) 
                        & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_695))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8126(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8126\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_4 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__arb_io_out_bits_bits_addr 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__state))
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_refill_tag
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__arb_io_out_bits_valid 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__state)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__resp_valid_0) 
           & (~ ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__state)) 
                 | (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__state)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_priv 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__resp_valid_0) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_passthrough))
            ? 1U : (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug) 
                     << 2U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_1196)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr 
        = (((QData)((IData)((0xfffffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__resp_valid_0)
                                            ? (0xfffffU 
                                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_ppn))
                                            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__vm_enabled)
                                                ? (
                                                   (0xc0000U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_data_0 
                                                                >> 0x20U)) 
                                                       << 0x12U)) 
                                                   | ((0x3fe00U 
                                                       & ((0xfffffe00U 
                                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_27) 
                                                          | (0xffe00U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_data_0 
                                                                        >> 0xeU))))) 
                                                      | (0x1ffU 
                                                         & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_33 
                                                            | (0xfffffU 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_data_0 
                                                                          >> 0xeU)))))))
                                                : (IData)(
                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                           >> 0xcU))))))) 
            << 0xcU) | (QData)((IData)((0xfffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_vaddr)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__state 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__package_Anon_io_x));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_179 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_175)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_157));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8127(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8127\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_220_1 
        = (1U & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_154))
                  ? (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_175) 
                        >> 1U)) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_218_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_188 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_175)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_189 
        = ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_175) 
               >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache_auto_master_out_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_220_0 
        = (1U & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_154))
                  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_175))
                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_218_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__tgtPageUpdate 
        = (((IData)((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_103) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_107) 
                                     >> 2U)))) << 1U) 
              | (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_107) 
                        >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_107) 
                                  >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2060 
        = (0xffU & ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2042))
                     ? (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2051)) 
                           | (0xfU & ((IData)(1U) << 
                                      (2U | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2042) 
                                                   >> 2U)))))))
                     : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2051) 
                        | (0xfU & ((IData)(1U) << (2U 
                                                   | (1U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2042) 
                                                         >> 2U))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___GEN_381 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT___T_588) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT___T_321))
            ? 0U : (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_878) 
                     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_732) 
                         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_776)) 
                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_825) 
                           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___T_869))))
                     ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__isValid 
                        & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__idxHit))
                     : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_valid)
                         ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_bits_isValid)
                             ? (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__isValid 
                                | ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__waddr)))
                             : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__isValid 
                                & (~ ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__waddr)))))
                         : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__isValid)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8128(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8128\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s0_speculative 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s1_speculative) 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_valid) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_speculative)))) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__predicted_taken));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT___GEN_28 
        = (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__predicted_taken)
                                    ? (((QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb_io_resp_bits_target 
                                                                    >> 0x26U))))) 
                                        << 0x27U) | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb_io_resp_bits_target)
                                    : (VL_ULL(4) + 
                                       (~ (VL_ULL(3) 
                                           | (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s1_pc))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__nValid 
        = (3U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq_io_deq_valid)
                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__nIC)
                   : 0U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_1033 
        = ((((((((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_1018) 
                         | (0x335U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                                 >> 0x14U)))) 
                        | (0xb15U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                                >> 0x14U)))) 
                       | (0xc15U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                               >> 0x14U)))) 
                      | (0x336U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                              >> 0x14U)))) 
                     | (0xb16U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                             >> 0x14U)))) 
                    | (0xc16U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                            >> 0x14U)))) 
                   | (0x337U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                           >> 0x14U)))) 
                  | (0xb17U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                          >> 0x14U)))) 
                 | (0xc17U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                         >> 0x14U)))) 
                | (0x338U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                        >> 0x14U)))) 
               | (0xb18U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                       >> 0x14U)))) 
              | (0xc18U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                      >> 0x14U)))) 
             | (0x339U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                     >> 0x14U)))) | 
            (0xb19U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                  >> 0x14U)))) | (0xc19U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                                      >> 0x14U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8129(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8129\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_427___05FT_432_data 
        = ((0x1eU >= (0x1fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1))))
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_427
           [(0x1fU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1)))]
            : VL_ULL(0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_bypass_src_0_1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_609) 
           & ((0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_inst 
                        >> 7U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_616 
        = ((0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_inst 
                     >> 7U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1227 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1) 
           == (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_inst 
                        >> 7U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1277 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1) 
           == (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                        >> 7U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1254 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1) 
           == (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_inst 
                        >> 7U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_bypass_src_1_2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_612) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_620));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_877_bits 
        = ((0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
            ? (0x13007U | ((0x1c000000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
                                           << 0x18U)) 
                           | ((0x2000000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
                                             << 0xdU)) 
                              | ((0x1800000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
                                                << 0x12U)) 
                                 | (0xf80U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)))))
            : ((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
                ? (0x1013U | ((0x2000000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
                                             << 0xdU)) 
                              | ((0x1f00000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
                                                << 0x12U)) 
                                 | ((0xf8000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
                                                 << 8U)) 
                                    | (0xf80U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in)))))
                : ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
                    ? (0x41063U | ((0x80000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_497) 
                                                   << 0x13U)) 
                                   | ((0x7e000000U 
                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_497) 
                                          << 0x14U)) 
                                      | ((0x38000U 
                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
                                             << 8U)) 
                                         | ((0xf00U 
                                             & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_497) 
                                                << 7U)) 
                                            | (0x80U 
                                               & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_497) 
                                                  >> 4U)))))))
                    : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_843))
                        ? (0x40063U | ((0x80000000U 
                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_497) 
                                           << 0x13U)) 
                                       | ((0x7e000000U 
                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_497) 
                                              << 0x14U)) 
                                          | ((0x38000U 
                                              & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_in 
                                                 << 8U)) 
                                             | ((0xf00U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_497) 
                                                    << 7U)) 
                                                | (0x80U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_497) 
                                                      >> 4U)))))))
                        : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander__DOT___T_869_bits))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8130(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8130\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_872 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_864_0) 
            & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_4_0_state))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_864_1) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_695)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_849 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_4_0_state)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_695));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_823 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_695) 
            << 1U) | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_4_0_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1759 
        = (0xffU & ((0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
                             >> 8U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__lowerMatches1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1798 
        = ((0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
                    >> 8U)) | (0xff000000U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
                                              << 0x18U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1379 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__request_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__queue));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH 
        = (0xfffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH2 
                      >> 0xcU) | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH2));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__slot_uop_mem_cmd 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_40)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__slot_uop_mem_cmd)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_38)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_mem_cmd)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_mem_cmd)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__slot_uop_uses_ldq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__slot_uop_uses_ldq 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_40)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__slot_uop_uses_ldq)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_38)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_uses_ldq)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_uses_ldq)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8131(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8131\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__slot_uop_mem_signed 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_36)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_mem_signed)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_34)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__slot_uop_mem_signed)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__slot_uop_mem_signed)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__slot_uop_is_amo 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_36)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_is_amo)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_34)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__slot_uop_is_amo)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__slot_uop_is_amo)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_fp_val 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_34)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__slot_uop_fp_val)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_32)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__slot_uop_fp_val)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__slot_uop_fp_val)));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__slot_uop_imm_packed 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_36)))
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_imm_packed
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_34)))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__slot_uop_imm_packed
                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__slot_uop_imm_packed));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__slot_uop_is_fence 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_36)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_is_fence)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_34)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__slot_uop_is_fence)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__slot_uop_is_fence)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8132(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8132\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_mem_size 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_30)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__slot_uop_mem_size)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_28)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_mem_size)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_mem_size)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_10__DOT__slot_uop_pdst = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_10_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_10__DOT__slot_uop_pdst 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_40)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_13__DOT__slot_uop_pdst)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_38)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT__slot_uop_pdst)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__slot_uop_pdst)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__do_enq) 
           != (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_178) 
                          & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg)) 
                             >> 4U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__do_enq) 
           != (0x7ffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_178) 
                          & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg)) 
                             >> 5U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__do_enq) 
           != (0x3ffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_178) 
                          & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg)) 
                             >> 6U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__do_enq) 
           != (0x1ffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_178) 
                          & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg)) 
                             >> 7U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__maybe_full))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8133(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8133\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__do_enq) 
           != (0xffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_178) 
                         & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg)) 
                            >> 8U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__do_enq) 
           != (0x7fU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_178) 
                         & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg)) 
                            >> 9U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__do_enq) 
           != (0x3fU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_178) 
                         & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg)) 
                            >> 0xaU)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__do_enq) 
           != (0x1fU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_178) 
                         & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg)) 
                            >> 0xbU)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_28__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__do_enq) 
           != (0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_178) 
                        & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg)) 
                           >> 0xcU)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__do_enq) 
           != (7U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_178) 
                      & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg)) 
                         >> 0xdU)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__do_enq) 
           != (3U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_178) 
                      & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg)) 
                         >> 0xeU)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__do_enq) 
           != (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_178) 
                      & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fb_id_reg)) 
                         >> 0xfU)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__maybe_full))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8134(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8134\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__do_enq) 
           != (0xfffU & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_50) 
                           & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg)) 
                              >> 4U)) & (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__do_enq) 
           != (0x7ffU & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_50) 
                           & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg)) 
                              >> 5U)) & (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__do_enq) 
           != (0x3ffU & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_50) 
                           & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg)) 
                              >> 6U)) & (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__do_enq) 
           != (0x1ffU & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_50) 
                           & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg)) 
                              >> 7U)) & (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__do_enq) 
           != (0xffU & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_50) 
                          & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg)) 
                             >> 8U)) & (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)) 
                        & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__do_enq) 
           != (0x7fU & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_50) 
                          & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg)) 
                             >> 9U)) & (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)) 
                        & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__do_enq) 
           != (0x3fU & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_50) 
                          & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg)) 
                             >> 0xaU)) & (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)) 
                        & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__maybe_full))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8135(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8135\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__do_enq) 
           != (0x1fU & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_50) 
                          & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg)) 
                             >> 0xbU)) & (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)) 
                        & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__do_enq) 
           != (0xfU & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_50) 
                         & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg)) 
                            >> 0xcU)) & (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)) 
                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__do_enq) 
           != (7U & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_50) 
                       & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg)) 
                          >> 0xdU)) & (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)) 
                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__do_enq) 
           != (3U & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_50) 
                       & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg)) 
                          >> 0xeU)) & (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)) 
                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT___T_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__do_enq) 
           != (1U & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___T_50) 
                       & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_id_reg)) 
                          >> 0xfU)) & (IData)(vlTOPp->TestHarness__DOT__SimDRAM__DOT_____05Fr_last_reg)) 
                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__maybe_full))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__slot_uop_fu_code 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_36)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_fu_code)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_34)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__slot_uop_fu_code)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__slot_uop_fu_code)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8136(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8136\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_729 
        = (((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__state))
             ? ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_9__DOT___T_88) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__p3)) 
                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__ppred)) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_1163)))
             : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__state)) 
                & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__p1) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__p2)) 
                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__ppred)) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_1163))))) 
           & (0U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__slot_uop_fu_code) 
                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit_io_fu_types_0))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__slot_uop_fu_code 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_31)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__slot_uop_fu_code)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_29)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_12__DOT__slot_uop_fu_code)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__slot_uop_fu_code)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_fp_val 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_19)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_fp_val)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_17)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_fp_val)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_fp_val)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu_io_bypass_0_bits_data 
        = ((0x6dU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_2_uopc))
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_rs2_data_2
            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__alu_io_out);
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_uses_ldq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_uses_ldq 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_19)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_uses_ldq)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_17)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_uses_ldq)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_uses_ldq)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8137(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8137\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*4127:0*/ __Vtemp9320[129];
    WData/*4127:0*/ __Vtemp9321[129];
    WData/*4127:0*/ __Vtemp9331[129];
    WData/*4127:0*/ __Vtemp9332[129];
    WData/*4127:0*/ __Vtemp9349[129];
    WData/*4127:0*/ __Vtemp9350[129];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_764[0U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight[0U] 
            | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0U]) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_20[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_764[1U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight[1U] 
            | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[1U]) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_20[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_764[2U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight[2U] 
            | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[2U]) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_20[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_764[3U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight[3U] 
            | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[3U]) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_20[3U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_764[4U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight[4U] 
            | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[4U]) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_20[4U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_764[5U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight[5U] 
            | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[5U]) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_20[5U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_764[6U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight[6U] 
            | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[6U]) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_20[6U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_764[7U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight[7U] 
            | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[7U]) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_20[7U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_764[8U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight[8U] 
            | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[8U]) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_20[8U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_764[9U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight[9U] 
            | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[9U]) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_20[9U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_764[0xaU] 
        = (0xffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight[0xaU] 
                       | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_15[0xaU]) 
                      & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_20[0xaU])));
    VL_EXTEND_WI(4099,4, __Vtemp9320, ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(4099,4099,12, __Vtemp9321, __Vtemp9320, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[1U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[2U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[3U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[3U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[3U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[4U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[4U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[4U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[5U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[5U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[5U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[6U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[6U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[6U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[7U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[7U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[7U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[8U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[8U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[8U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[9U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[9U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[9U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0xaU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0xaU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xaU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0xbU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0xbU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xbU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0xcU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0xcU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0xcU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xcU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0xdU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0xdU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0xdU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xdU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0xeU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0xeU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0xeU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xeU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0xfU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0xfU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0xfU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xfU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x10U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x10U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x10U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x10U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x11U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x11U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x11U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x11U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x12U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x12U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x12U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x12U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x13U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x13U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x13U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x13U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x14U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x14U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x14U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x14U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x15U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x15U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x15U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x15U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x16U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x16U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x16U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x16U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x17U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x17U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x17U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x17U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x18U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x18U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x18U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x18U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x19U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x19U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x19U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x19U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x1aU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x1aU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x1aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1aU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x1bU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x1bU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x1bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1bU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x1cU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x1cU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x1cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1cU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x1dU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x1dU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x1dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1dU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x1eU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x1eU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x1eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1eU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x1fU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x1fU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x1fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1fU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x20U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x20U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x20U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x20U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x21U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x21U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x21U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x21U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x22U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x22U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x22U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x22U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x23U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x23U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x23U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x23U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x24U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x24U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x24U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x24U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x25U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x25U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x25U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x25U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x26U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x26U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x26U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x26U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x27U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x27U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x27U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x27U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x28U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x28U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x28U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x28U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_767[0x29U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0x29U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9321[0x29U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x29U]));
    VL_EXTEND_WI(4098,3, __Vtemp9331, ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                                        ? (1U | (6U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_80) 
                                                    << 1U)))
                                        : 0U));
    VL_SHIFTL_WWI(4098,4098,12, __Vtemp9332, __Vtemp9331, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[1U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[2U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[3U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[3U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[3U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[4U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[4U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[4U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[5U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[5U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[5U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[6U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[6U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[6U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[7U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[7U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[7U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[8U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[8U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[8U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[9U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[9U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[9U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0xaU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0xaU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xaU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0xbU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0xbU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xbU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0xcU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0xcU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0xcU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xcU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0xdU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0xdU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0xdU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xdU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0xeU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0xeU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0xeU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xeU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0xfU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0xfU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0xfU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0xfU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x10U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x10U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x10U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x10U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x11U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x11U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x11U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x11U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x12U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x12U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x12U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x12U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x13U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x13U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x13U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x13U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x14U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x14U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x14U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x14U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x15U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x15U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x15U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x15U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x16U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x16U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x16U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x16U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x17U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x17U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x17U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x17U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x18U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x18U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x18U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x18U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x19U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x19U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x19U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x19U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x1aU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x1aU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x1aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1aU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x1bU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x1bU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x1bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1bU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x1cU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x1cU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x1cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1cU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x1dU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x1dU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x1dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1dU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x1eU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x1eU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x1eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1eU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x1fU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x1fU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x1fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x1fU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x20U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x20U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x20U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x20U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x21U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x21U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x21U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x21U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x22U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x22U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x22U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x22U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x23U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x23U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x23U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x23U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x24U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x24U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x24U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x24U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x25U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x25U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x25U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x25U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x26U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x26U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x26U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x26U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x27U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x27U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x27U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x27U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x28U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x28U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x28U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x28U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_770[0x29U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0x29U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9332[0x29U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___GEN_21[0x29U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_627 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_626) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_619));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_764[0U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight[0U] 
            | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0U]) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_20[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_764[1U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight[1U] 
            | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_15[1U]) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_20[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_764[2U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight[2U] 
            | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_15[2U]) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_20[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_764[3U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight[3U] 
            | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_15[3U]) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_20[3U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_764[4U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight[4U] 
            | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_15[4U]) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_20[4U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_764[5U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight[5U] 
            | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_15[5U]) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_20[5U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_764[6U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight[6U] 
            | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_15[6U]) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_20[6U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_764[7U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight[7U] 
            | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_15[7U]) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_20[7U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_764[8U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight[8U] 
            | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_15[8U]) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_20[8U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_764[9U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight[9U] 
            | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_15[9U]) 
           & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_20[9U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_764[0xaU] 
        = (0xffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight[0xaU] 
                       | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_15[0xaU]) 
                      & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_20[0xaU])));
    VL_EXTEND_WI(4099,4, __Vtemp9349, ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(4099,4099,12, __Vtemp9350, __Vtemp9349, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[1U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[2U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[3U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[3U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[3U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[4U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[4U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[4U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[5U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[5U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[5U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[6U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[6U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[6U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[7U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[7U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[7U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[8U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[8U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[8U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[9U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[9U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[9U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0xaU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0xaU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0xaU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0xbU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0xbU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0xbU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0xcU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0xcU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0xcU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0xcU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0xdU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0xdU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0xdU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0xdU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0xeU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0xeU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0xeU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0xeU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0xfU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0xfU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0xfU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0xfU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x10U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x10U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x10U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x10U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x11U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x11U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x11U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x11U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x12U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x12U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x12U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x12U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x13U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x13U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x13U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x13U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x14U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x14U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x14U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x14U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x15U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x15U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x15U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x15U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x16U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x16U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x16U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x16U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x17U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x17U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x17U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x17U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x18U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x18U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x18U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x18U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x19U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x19U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x19U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x19U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x1aU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x1aU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x1aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x1aU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x1bU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x1bU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x1bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x1bU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x1cU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x1cU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x1cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x1cU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x1dU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x1dU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x1dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x1dU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x1eU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x1eU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x1eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x1eU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x1fU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x1fU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x1fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x1fU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x20U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x20U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x20U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x20U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x21U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x21U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x21U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x21U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x22U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x22U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x22U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x22U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x23U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x23U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x23U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x23U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x24U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x24U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x24U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x24U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x25U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x25U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x25U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x25U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x26U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x26U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x26U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x26U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x27U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x27U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x27U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x27U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x28U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x28U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x28U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x28U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_767[0x29U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_opcodes[0x29U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9350[0x29U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x29U]));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8138(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8138\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*4127:0*/ __Vtemp9360[129];
    WData/*4127:0*/ __Vtemp9361[129];
    WData/*287:0*/ __Vtemp9372[9];
    WData/*287:0*/ __Vtemp9373[9];
    WData/*287:0*/ __Vtemp9385[9];
    WData/*287:0*/ __Vtemp9386[9];
    // Body
    VL_EXTEND_WI(4098,3, __Vtemp9360, ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                                        ? (1U | (6U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_80) 
                                                    << 1U)))
                                        : 0U));
    VL_SHIFTL_WWI(4098,4098,12, __Vtemp9361, __Vtemp9360, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[1U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[2U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[3U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[3U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[3U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[4U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[4U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[4U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[5U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[5U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[5U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[6U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[6U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[6U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[7U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[7U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[7U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[8U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[8U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[8U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[9U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[9U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[9U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0xaU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0xaU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0xaU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0xbU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0xbU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0xbU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0xcU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0xcU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0xcU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0xcU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0xdU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0xdU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0xdU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0xdU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0xeU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0xeU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0xeU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0xeU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0xfU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0xfU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0xfU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0xfU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x10U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x10U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x10U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x10U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x11U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x11U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x11U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x11U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x12U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x12U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x12U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x12U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x13U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x13U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x13U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x13U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x14U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x14U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x14U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x14U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x15U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x15U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x15U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x15U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x16U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x16U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x16U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x16U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x17U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x17U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x17U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x17U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x18U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x18U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x18U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x18U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x19U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x19U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x19U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x19U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x1aU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x1aU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x1aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x1aU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x1bU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x1bU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x1bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x1bU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x1cU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x1cU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x1cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x1cU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x1dU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x1dU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x1dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x1dU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x1eU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x1eU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x1eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x1eU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x1fU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x1fU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x1fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x1fU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x20U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x20U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x20U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x20U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x21U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x21U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x21U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x21U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x22U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x22U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x22U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x22U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x23U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x23U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x23U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x23U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x24U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x24U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x24U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x24U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x25U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x25U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x25U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x25U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x26U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x26U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x26U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x26U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x27U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x27U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x27U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x27U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x28U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x28U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x28U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x28U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_770[0x29U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT__inflight_sizes[0x29U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9361[0x29U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__TLMonitor__DOT___GEN_21[0x29U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_574 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goAbstract) 
           | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__hartGoingWrEn)) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__goReg)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_897 
        = (0x1fffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT__inflight 
                         | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_812)
                             ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data))
                             : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_834)
                                           ? ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                                     >> 4U)))
                                           : 0U))));
    VL_EXTEND_WI(259,4, __Vtemp9372, ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_812)
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(259,259,8, __Vtemp9373, __Vtemp9372, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_900[0U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT__inflight_opcodes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_812)
                ? __Vtemp9373[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_21[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_900[1U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT__inflight_opcodes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_812)
                ? __Vtemp9373[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_21[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_900[2U] 
        = (0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT__inflight_opcodes[2U] 
                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_812)
                            ? __Vtemp9373[2U] : 0U)) 
                       & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_21[2U])));
    VL_EXTEND_WI(259,4, __Vtemp9385, ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_812)
                                       ? (1U | (0xeU 
                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data) 
                                                   << 1U)))
                                       : 0U));
    VL_SHIFTL_WWI(259,259,8, __Vtemp9386, __Vtemp9385, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_903[0U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT__inflight_sizes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_812)
                ? __Vtemp9386[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_21[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_903[1U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT__inflight_sizes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_812)
                ? __Vtemp9386[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_21[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_903[2U] 
        = (0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT__inflight_sizes[2U] 
                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_812)
                            ? __Vtemp9386[2U] : 0U)) 
                       & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_21[2U])));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8139(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8139\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*4127:0*/ __Vtemp9397[129];
    WData/*4127:0*/ __Vtemp9398[129];
    WData/*4127:0*/ __Vtemp9408[129];
    WData/*4127:0*/ __Vtemp9409[129];
    WData/*287:0*/ __Vtemp9420[9];
    WData/*287:0*/ __Vtemp9421[9];
    // Body
    VL_EXTEND_WI(4099,4, __Vtemp9397, ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                                        ? (1U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(4099,4099,12, __Vtemp9398, __Vtemp9397, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[1U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[2U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[3U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[3U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[3U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[4U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[4U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[4U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[5U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[5U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[5U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[6U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[6U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[6U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[7U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[7U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[7U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[8U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[8U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[8U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[9U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[9U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[9U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0xaU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0xaU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0xaU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0xbU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0xbU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0xbU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0xcU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0xcU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0xcU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0xcU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0xdU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0xdU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0xdU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0xdU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0xeU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0xeU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0xeU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0xeU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0xfU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0xfU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0xfU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0xfU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x10U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x10U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x10U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x10U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x11U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x11U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x11U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x11U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x12U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x12U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x12U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x12U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x13U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x13U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x13U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x13U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x14U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x14U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x14U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x14U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x15U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x15U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x15U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x15U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x16U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x16U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x16U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x16U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x17U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x17U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x17U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x17U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x18U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x18U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x18U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x18U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x19U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x19U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x19U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x19U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x1aU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x1aU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x1aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x1aU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x1bU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x1bU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x1bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x1bU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x1cU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x1cU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x1cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x1cU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x1dU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x1dU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x1dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x1dU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x1eU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x1eU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x1eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x1eU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x1fU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x1fU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x1fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x1fU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x20U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x20U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x20U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x20U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x21U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x21U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x21U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x21U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x22U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x22U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x22U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x22U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x23U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x23U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x23U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x23U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x24U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x24U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x24U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x24U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x25U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x25U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x25U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x25U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x26U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x26U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x26U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x26U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x27U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x27U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x27U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x27U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x28U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x28U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x28U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x28U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_760[0x29U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_opcodes[0x29U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9398[0x29U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x29U]));
    VL_EXTEND_WI(4098,3, __Vtemp9408, ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                                        ? (1U | (6U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_80) 
                                                    << 1U)))
                                        : 0U));
    VL_SHIFTL_WWI(4098,4098,12, __Vtemp9409, __Vtemp9408, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[1U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[2U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[2U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[3U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[3U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[3U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[4U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[4U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[4U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[5U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[5U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[5U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[6U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[6U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[6U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[7U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[7U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[7U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[8U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[8U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[8U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[9U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[9U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[9U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0xaU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0xaU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0xaU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0xbU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0xbU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0xbU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0xcU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0xcU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0xcU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0xcU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0xdU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0xdU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0xdU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0xdU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0xeU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0xeU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0xeU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0xeU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0xfU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0xfU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0xfU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0xfU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x10U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x10U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x10U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x10U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x11U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x11U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x11U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x11U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x12U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x12U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x12U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x12U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x13U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x13U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x13U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x13U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x14U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x14U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x14U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x14U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x15U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x15U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x15U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x15U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x16U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x16U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x16U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x16U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x17U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x17U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x17U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x17U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x18U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x18U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x18U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x18U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x19U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x19U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x19U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x19U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x1aU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x1aU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x1aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x1aU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x1bU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x1bU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x1bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x1bU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x1cU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x1cU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x1cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x1cU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x1dU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x1dU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x1dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x1dU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x1eU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x1eU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x1eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x1eU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x1fU] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x1fU] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x1fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x1fU]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x20U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x20U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x20U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x20U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x21U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x21U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x21U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x21U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x22U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x22U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x22U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x22U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x23U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x23U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x23U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x23U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x24U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x24U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x24U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x24U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x25U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x25U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x25U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x25U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x26U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x26U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x26U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x26U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x27U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x27U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x27U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x27U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x28U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x28U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x28U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x28U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_763[0x29U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__inflight_sizes[0x29U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_672)
                ? __Vtemp9409[0x29U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___GEN_21[0x29U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_897 
        = (0x1fffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT__inflight 
                         | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_812)
                             ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data))
                             : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_831)
                                           ? ((IData)(1U) 
                                              << (0x1fU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source) 
                                                     >> 4U)))
                                           : 0U))));
    VL_EXTEND_WI(259,4, __Vtemp9420, ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_812)
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(259,259,8, __Vtemp9421, __Vtemp9420, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_900[0U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT__inflight_opcodes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_812)
                ? __Vtemp9421[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_21[0U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_900[1U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT__inflight_opcodes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_812)
                ? __Vtemp9421[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_21[1U]));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_900[2U] 
        = (0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT__inflight_opcodes[2U] 
                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_812)
                            ? __Vtemp9421[2U] : 0U)) 
                       & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_21[2U])));
}
