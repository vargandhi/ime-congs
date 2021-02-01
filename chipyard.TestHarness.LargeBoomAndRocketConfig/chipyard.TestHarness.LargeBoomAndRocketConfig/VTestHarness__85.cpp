// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5042(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5042\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_0_bankSel 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT__maybe_full)
            ? (((((8U & ((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3))))
                   ? 3U : 0U) << 6U) | ((((4U & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3))))
                                           ? 3U : 0U) 
                                         << 4U) | (
                                                   (((2U 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (3U 
                                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3))))
                                                      ? 3U
                                                      : 0U) 
                                                    << 2U) 
                                                   | ((1U 
                                                       & ((IData)(1U) 
                                                          << 
                                                          (3U 
                                                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3))))
                                                       ? 3U
                                                       : 0U)))) 
               & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT__ram_mask
                   [0U] << 6U) | ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT__ram_mask
                                   [0U] << 4U) | ((
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT__ram_mask
                                                   [0U] 
                                                   << 2U) 
                                                  | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT__ram_mask
                                                  [0U]))))
            : 0U);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5043(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5043\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_37 
        = (1U & ((~ (0x20000000U | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_address___05FT_15_data 
                                    >> 2U))) & (~ (0x40000000U 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_address___05FT_15_data 
                                                      >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_40 
        = (1U & ((~ (0x20000000U | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_address___05FT_15_data 
                                    >> 2U))) & (0x40000000U 
                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_address___05FT_15_data 
                                                   >> 1U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5044(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5044\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_43 
        = (1U & ((0x20000000U | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_address___05FT_15_data 
                                 >> 2U)) & (~ (0x40000000U 
                                               | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_address___05FT_15_data 
                                                  >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_46 
        = (1U & ((0x20000000U | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_address___05FT_15_data 
                                 >> 2U)) & (0x40000000U 
                                            | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_address___05FT_15_data 
                                               >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_37 
        = (1U & ((~ (0x20000000U | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_address___05FT_15_data 
                                    >> 2U))) & (~ (0x40000000U 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_address___05FT_15_data 
                                                      >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_40 
        = (1U & ((~ (0x20000000U | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_address___05FT_15_data 
                                    >> 2U))) & (0x40000000U 
                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_address___05FT_15_data 
                                                   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_43 
        = (1U & ((0x20000000U | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_address___05FT_15_data 
                                 >> 2U)) & (~ (0x40000000U 
                                               | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_address___05FT_15_data 
                                                  >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_46 
        = (1U & ((0x20000000U | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_address___05FT_15_data 
                                 >> 2U)) & (0x40000000U 
                                            | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_address___05FT_15_data 
                                               >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___GEN_56 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5045(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5045\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___GEN_56 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_20 
        = ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data)) 
           | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_11 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data)) 
            & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_param___05FT_15_data))) 
           | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceA__DOT__Queue__DOT__ram_opcode___05FT_15_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_schedule_bits_reload 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__no_wait 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_schedule_bits_reload 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__no_wait 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_schedule_bits_reload 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__w_grantack));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5046(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5046\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__no_wait 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_schedule_bits_reload 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__no_wait 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_schedule_bits_reload 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__no_wait 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_schedule_bits_reload 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__no_wait 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_schedule_bits_reload 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__no_wait 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_schedule_bits_reload 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__no_wait 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_schedule_bits_reload 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__no_wait 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_schedule_bits_reload 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__no_wait 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_schedule_bits_reload 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__no_wait 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr_io_schedule_bits_reload 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__w_grantack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__no_wait 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_69) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__w_grantack));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5047(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5047\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_0__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_0__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_0__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_0__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_1__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_1__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_1__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_1__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_2__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_2__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_2__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_2__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_3__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_3__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_3__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_3__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_4__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_4__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_4__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_4__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_5__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_5__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_5__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_5__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5048(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5048\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_6__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_6__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_6__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_6__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_7__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_7__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_7__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_7__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_59 
        = (1U & ((~ (0x20000000U | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_address___05FT_11_data 
                                    >> 2U))) & (~ (0x40000000U 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_address___05FT_11_data 
                                                      >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_62 
        = (1U & ((~ (0x20000000U | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_address___05FT_11_data 
                                    >> 2U))) & (0x40000000U 
                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_address___05FT_11_data 
                                                   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_65 
        = (1U & ((0x20000000U | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_address___05FT_11_data 
                                 >> 2U)) & (~ (0x40000000U 
                                               | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_address___05FT_11_data 
                                                  >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_68 
        = (1U & ((0x20000000U | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_address___05FT_11_data 
                                 >> 2U)) & (0x40000000U 
                                            | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__queue__DOT__ram_address___05FT_11_data 
                                               >> 1U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5049(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5049\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT___T_234 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__s2_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT__s2_valid_bit));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT___T_227 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__ptw__DOT___T_227;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2308 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_428) 
            << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_422) 
                       << 6U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_416) 
                                  << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_410) 
                                             << 4U) 
                                            | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_404) 
                                                << 3U) 
                                               | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_398) 
                                                   << 2U) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_392) 
                                                      << 1U) 
                                                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_386))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_1097 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__r_sectored_hit)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__r_sectored_hit_addr)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT__r_sectored_repl_addr));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5051(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5051\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1478 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1476) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1479 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1476));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1526 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1524) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1527 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1524));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_68) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_need_d 
            = (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_prio_0)
                          ? (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode) 
                                >> 2U)) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode))) 
                     | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_counter))));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1656 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_valid_d) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1591)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT__maybe_full = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT___T_4) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT__maybe_full 
                = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT__empty)
                    ? ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_d_ready)) 
                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT___T_1))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1__DOT___T_1));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1376 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1374) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1377 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1374));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1575 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1573) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1573));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1424 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1422) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1425 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1422));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1745 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1743) 
                 - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5052(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5052\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1746 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1743));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT___T_662 
        = (((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT___T_99)) 
              & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT___T_101))) 
             << 5U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT___T_81)) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT___T_83))) 
                        << 4U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT___T_71)) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT___T_73))) 
                                   << 3U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT___T_67)) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT___T_69))) 
                                              << 2U) 
                                             | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT___T_67)) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT___T_69))) 
                                                 << 1U) 
                                                | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT___T_67)) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT___T_69)))))))) 
           & (~ ((((((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_3_bits)) 
                        | (0x7fU & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_3_bits)) 
                                    >> 1U))) | (0x3fU 
                                                & (((IData)(1U) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_3_bits)) 
                                                   >> 2U))) 
                      | (0x1fU & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_3_bits)) 
                                  >> 3U))) | (0xfU 
                                              & (((IData)(1U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_3_bits)) 
                                                 >> 4U))) 
                    | (7U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_3_bits)) 
                             >> 5U))) | (3U & (((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_3_bits)) 
                                               >> 6U))) 
                  | (1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_3_bits)) 
                           >> 7U))) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_3_valid)
                                        ? 0x3fU : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5053(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5053\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT___T_662 
        = (((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT___T_99)) 
              & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT___T_101))) 
             << 5U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT___T_81)) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT___T_83))) 
                        << 4U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT___T_71)) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT___T_73))) 
                                   << 3U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT___T_67)) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT___T_69))) 
                                              << 2U) 
                                             | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT___T_67)) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT___T_69))) 
                                                 << 1U) 
                                                | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT___T_67)) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT___T_69)))))))) 
           & (~ ((((((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_3_bits)) 
                        | (0x7fU & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_3_bits)) 
                                    >> 1U))) | (0x3fU 
                                                & (((IData)(1U) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_3_bits)) 
                                                   >> 2U))) 
                      | (0x1fU & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_3_bits)) 
                                  >> 3U))) | (0xfU 
                                              & (((IData)(1U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_3_bits)) 
                                                 >> 4U))) 
                    | (7U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_3_bits)) 
                             >> 5U))) | (3U & (((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_3_bits)) 
                                               >> 6U))) 
                  | (1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_3_bits)) 
                           >> 7U))) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_3_valid)
                                        ? 0x3fU : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5054(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5054\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_status_bits_nestC 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_valid) 
           & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__w_rprobeackfirst)) 
               | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__w_pprobeackfirst))) 
              | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__w_grantfirst))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_tag 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_allocate_bits_tag;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__gotT = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__gotT 
                    = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_param___05FT_15_data));
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_157 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_159 
        = (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_132 
        = ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_param)) 
           & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_129 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_dirty) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_opcode)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__bad_grant = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__bad_grant 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_denied___05FT_15_data;
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_prio_2 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_allocate_bits_prio_2;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_control 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_150 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_148 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_hit) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_dirty)) 
                 | (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_opcode) 
                       >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__excluded_client 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_hit) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_prio_0)) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_118) 
               | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_opcode))))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__req_clientBit)
            : 0U);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5055(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5055\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__req_needT 
        = (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_opcode) 
                      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_opcode)) 
                                 & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_param)))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_118) 
                    & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___GEN_51 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_state))
            ? (1U & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_clients)))))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_state))
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_dirty)
                    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_state))
                                   ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_clients))
                                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_dirty)
                                           ? 4U : 5U)
                                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_dirty)
                                           ? 6U : 7U))
                                   : 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_141 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_clients) 
           & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_param)) 
                   | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_param))) 
                  | (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__request_param)))
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__req_clientBit)
                  : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_153 
        = ((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_clients)))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_118));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT___T_144 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__meta_clients) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_status_bits_nestC 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_valid) 
           & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__w_rprobeackfirst)) 
               | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__w_pprobeackfirst))) 
              | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__w_grantfirst))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5056(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5056\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_tag 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_allocate_bits_tag;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__gotT = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__gotT 
                    = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_param___05FT_15_data));
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_157 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_159 
        = (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_132 
        = ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_param)) 
           & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_129 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_dirty) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_opcode)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__bad_grant = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__bad_grant 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_denied___05FT_15_data;
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_prio_2 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_allocate_bits_prio_2;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_control 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_150 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_148 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_hit) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_dirty)) 
                 | (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_opcode) 
                       >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__excluded_client 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_hit) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_prio_0)) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_118) 
               | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_opcode))))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__req_clientBit)
            : 0U);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5057(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5057\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__req_needT 
        = (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_opcode) 
                      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_opcode)) 
                                 & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_param)))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_118) 
                    & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___GEN_51 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state))
            ? (1U & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_clients)))))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state))
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_dirty)
                    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_state))
                                   ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_clients))
                                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_dirty)
                                           ? 4U : 5U)
                                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_dirty)
                                           ? 6U : 7U))
                                   : 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_141 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_clients) 
           & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_param)) 
                   | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_param))) 
                  | (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__request_param)))
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__req_clientBit)
                  : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_153 
        = ((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_clients)))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_118));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT___T_144 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__meta_clients) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_status_bits_nestC 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_valid) 
           & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__w_rprobeackfirst)) 
               | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__w_pprobeackfirst))) 
              | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__w_grantfirst))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5058(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5058\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_tag 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_allocate_bits_tag;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__gotT = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__gotT 
                    = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_param___05FT_15_data));
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_157 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_159 
        = (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_132 
        = ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_param)) 
           & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_129 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_dirty) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_opcode)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__bad_grant = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__bad_grant 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_denied___05FT_15_data;
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_prio_2 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_allocate_bits_prio_2;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_control 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_150 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_148 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_hit) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_dirty)) 
                 | (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_opcode) 
                       >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__excluded_client 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_hit) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_prio_0)) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_118) 
               | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_opcode))))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__req_clientBit)
            : 0U);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5059(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5059\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__req_needT 
        = (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_opcode) 
                      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_opcode)) 
                                 & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_param)))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_118) 
                    & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___GEN_51 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state))
            ? (1U & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_clients)))))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state))
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_dirty)
                    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_state))
                                   ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_clients))
                                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_dirty)
                                           ? 4U : 5U)
                                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_dirty)
                                           ? 6U : 7U))
                                   : 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_141 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_clients) 
           & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_param)) 
                   | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_param))) 
                  | (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__request_param)))
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__req_clientBit)
                  : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_153 
        = ((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_clients)))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_118));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT___T_144 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__meta_clients) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_status_bits_nestC 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_valid) 
           & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__w_rprobeackfirst)) 
               | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__w_pprobeackfirst))) 
              | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__w_grantfirst))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5060(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5060\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_tag 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_allocate_bits_tag;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__gotT = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__gotT 
                    = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_param___05FT_15_data));
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_157 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_159 
        = (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_132 
        = ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_param)) 
           & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_129 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_dirty) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_opcode)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__bad_grant = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__bad_grant 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_denied___05FT_15_data;
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_prio_2 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_allocate_bits_prio_2;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_control 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_150 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_148 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_hit) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_dirty)) 
                 | (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_opcode) 
                       >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__excluded_client 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_hit) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_prio_0)) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_118) 
               | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_opcode))))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__req_clientBit)
            : 0U);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5061(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5061\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__req_needT 
        = (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_opcode) 
                      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_opcode)) 
                                 & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_param)))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_118) 
                    & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___GEN_51 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state))
            ? (1U & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_clients)))))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state))
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_dirty)
                    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_state))
                                   ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_clients))
                                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_dirty)
                                           ? 4U : 5U)
                                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_dirty)
                                           ? 6U : 7U))
                                   : 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_141 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_clients) 
           & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_param)) 
                   | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_param))) 
                  | (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__request_param)))
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__req_clientBit)
                  : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_153 
        = ((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_clients)))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_118));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT___T_144 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__meta_clients) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_status_bits_nestC 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_valid) 
           & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__w_rprobeackfirst)) 
               | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__w_pprobeackfirst))) 
              | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__w_grantfirst))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5062(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5062\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_tag 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_bits_tag;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__gotT = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__gotT 
                    = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_param___05FT_15_data));
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_157 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_159 
        = (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_132 
        = ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_param)) 
           & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_129 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_dirty) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_opcode)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__bad_grant = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__bad_grant 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_denied___05FT_15_data;
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_prio_2 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_bits_prio_2;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_control 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_150 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_148 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_hit) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_dirty)) 
                 | (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_opcode) 
                       >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__excluded_client 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_hit) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_prio_0)) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_118) 
               | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_opcode))))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__req_clientBit)
            : 0U);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5063(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5063\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__req_needT 
        = (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_opcode) 
                      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_opcode)) 
                                 & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_param)))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_118) 
                    & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___GEN_51 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state))
            ? (1U & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_clients)))))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state))
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_dirty)
                    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_state))
                                   ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_clients))
                                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_dirty)
                                           ? 4U : 5U)
                                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_dirty)
                                           ? 6U : 7U))
                                   : 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_141 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_clients) 
           & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_param)) 
                   | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_param))) 
                  | (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__request_param)))
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__req_clientBit)
                  : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_153 
        = ((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_clients)))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_118));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT___T_144 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__meta_clients) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_status_bits_nestC 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_valid) 
           & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__w_rprobeackfirst)) 
               | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__w_pprobeackfirst))) 
              | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__w_grantfirst))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5064(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5064\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_tag 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_bits_tag;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__gotT = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__gotT 
                    = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_param___05FT_15_data));
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_157 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_159 
        = (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_132 
        = ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_param)) 
           & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_129 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_dirty) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_opcode)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__bad_grant = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__bad_grant 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_denied___05FT_15_data;
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_prio_2 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_bits_prio_2;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_control 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_150 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_148 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_hit) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_dirty)) 
                 | (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_opcode) 
                       >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__excluded_client 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_hit) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_prio_0)) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_118) 
               | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_opcode))))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__req_clientBit)
            : 0U);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5065(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5065\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__req_needT 
        = (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_opcode) 
                      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_opcode)) 
                                 & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_param)))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_118) 
                    & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___GEN_51 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state))
            ? (1U & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_clients)))))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state))
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_dirty)
                    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_state))
                                   ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_clients))
                                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_dirty)
                                           ? 4U : 5U)
                                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_dirty)
                                           ? 6U : 7U))
                                   : 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_141 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_clients) 
           & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_param)) 
                   | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_param))) 
                  | (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__request_param)))
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__req_clientBit)
                  : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_153 
        = ((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_clients)))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_118));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT___T_144 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__meta_clients) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_status_bits_nestC 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_valid) 
           & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__w_rprobeackfirst)) 
               | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__w_pprobeackfirst))) 
              | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__w_grantfirst))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5066(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5066\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_tag 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_bits_tag;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__gotT = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__gotT 
                    = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_param___05FT_15_data));
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_157 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_159 
        = (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_132 
        = ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_param)) 
           & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_129 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_dirty) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_opcode)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__bad_grant = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__bad_grant 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_denied___05FT_15_data;
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_prio_2 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_bits_prio_2;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_control 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_150 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_148 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_hit) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_dirty)) 
                 | (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_opcode) 
                       >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__excluded_client 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_hit) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_prio_0)) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_118) 
               | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_opcode))))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__req_clientBit)
            : 0U);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5067(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5067\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__req_needT 
        = (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_opcode) 
                      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_opcode)) 
                                 & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_param)))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_118) 
                    & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___GEN_51 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state))
            ? (1U & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_clients)))))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state))
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_dirty)
                    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_state))
                                   ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_clients))
                                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_dirty)
                                           ? 4U : 5U)
                                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_dirty)
                                           ? 6U : 7U))
                                   : 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_141 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_clients) 
           & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_param)) 
                   | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_param))) 
                  | (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__request_param)))
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__req_clientBit)
                  : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_153 
        = ((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_clients)))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_118));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT___T_144 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__meta_clients) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_status_bits_nestC 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_valid) 
           & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__w_rprobeackfirst)) 
               | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__w_pprobeackfirst))) 
              | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__w_grantfirst))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5068(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5068\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_tag 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_bits_tag;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__gotT = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__gotT 
                    = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_param___05FT_15_data));
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_157 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_159 
        = (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_132 
        = ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_param)) 
           & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_129 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_dirty) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_opcode)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__bad_grant = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__bad_grant 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_denied___05FT_15_data;
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_prio_2 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_bits_prio_2;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_control 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_150 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_148 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_hit) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_dirty)) 
                 | (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_opcode) 
                       >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__excluded_client 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_hit) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_prio_0)) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_118) 
               | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_opcode))))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__req_clientBit)
            : 0U);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5069(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5069\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__req_needT 
        = (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_opcode) 
                      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_opcode)) 
                                 & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_param)))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_118) 
                    & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___GEN_51 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state))
            ? (1U & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_clients)))))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state))
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_dirty)
                    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_state))
                                   ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_clients))
                                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_dirty)
                                           ? 4U : 5U)
                                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_dirty)
                                           ? 6U : 7U))
                                   : 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_141 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_clients) 
           & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_param)) 
                   | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_param))) 
                  | (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__request_param)))
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__req_clientBit)
                  : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_153 
        = ((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_clients)))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_118));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT___T_144 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__meta_clients) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_status_bits_nestC 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_valid) 
           & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__w_rprobeackfirst)) 
               | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__w_pprobeackfirst))) 
              | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__w_grantfirst))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5070(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5070\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_tag 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_bits_tag;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__gotT = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__gotT 
                    = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_param___05FT_15_data));
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_157 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_159 
        = (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_132 
        = ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_param)) 
           & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_129 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_dirty) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_opcode)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__bad_grant = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__bad_grant 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_denied___05FT_15_data;
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_prio_2 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_bits_prio_2;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_control 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_150 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_148 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_hit) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_dirty)) 
                 | (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_opcode) 
                       >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__excluded_client 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_hit) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_prio_0)) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_118) 
               | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_opcode))))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__req_clientBit)
            : 0U);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5071(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5071\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__req_needT 
        = (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_opcode) 
                      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_opcode)) 
                                 & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_param)))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_118) 
                    & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___GEN_51 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state))
            ? (1U & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_clients)))))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state))
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_dirty)
                    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_state))
                                   ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_clients))
                                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_dirty)
                                           ? 4U : 5U)
                                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_dirty)
                                           ? 6U : 7U))
                                   : 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_141 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_clients) 
           & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_param)) 
                   | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_param))) 
                  | (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__request_param)))
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__req_clientBit)
                  : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_153 
        = ((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_clients)))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_118));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT___T_144 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__meta_clients) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_status_bits_nestC 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_valid) 
           & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__w_rprobeackfirst)) 
               | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__w_pprobeackfirst))) 
              | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__w_grantfirst))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5072(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5072\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_tag 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_allocate_bits_tag;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__gotT = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__gotT 
                    = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_param___05FT_15_data));
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_157 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_159 
        = (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_132 
        = ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_param)) 
           & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_129 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_dirty) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_opcode)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__bad_grant = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__bad_grant 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_denied___05FT_15_data;
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_prio_2 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_allocate_bits_prio_2;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_control 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_150 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_148 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_hit) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_dirty)) 
                 | (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_opcode) 
                       >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__excluded_client 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_hit) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_prio_0)) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_118) 
               | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_opcode))))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__req_clientBit)
            : 0U);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5073(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5073\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__req_needT 
        = (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_opcode) 
                      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_opcode)) 
                                 & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_param)))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_118) 
                    & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___GEN_51 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_state))
            ? (1U & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_clients)))))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_state))
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_dirty)
                    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_state))
                                   ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_clients))
                                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_dirty)
                                           ? 4U : 5U)
                                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_dirty)
                                           ? 6U : 7U))
                                   : 8U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_141 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_clients) 
           & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_param)) 
                   | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_param))) 
                  | (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__request_param)))
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__req_clientBit)
                  : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_153 
        = ((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_clients)))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_118));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT___T_144 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__meta_clients) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_status_bits_nestC 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_valid) 
           & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__w_rprobeackfirst)) 
               | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__w_pprobeackfirst))) 
              | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__w_grantfirst))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5074(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5074\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_tag 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_bits_tag;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__gotT = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__gotT 
                    = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_param___05FT_15_data));
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_129 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_opcode)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_157 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_159 
        = (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_132 
        = ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_param)) 
           & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__bad_grant = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__bad_grant 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_denied___05FT_15_data;
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_prio_2 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_bits_prio_2;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_control 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_150 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_148 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_hit) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty)) 
                 | (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_opcode) 
                       >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___GEN_51 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))
            ? (1U & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients)))))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty)
                    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_state))
                                   ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients))
                                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty)
                                           ? 4U : 5U)
                                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_dirty)
                                           ? 6U : 7U))
                                   : 8U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5075(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5075\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_141 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients) 
           & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_param)) 
                   | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_param))) 
                  | (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_param)))
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__req_clientBit)
                  : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_144 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__excluded_client 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_hit) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_prio_0)) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_118) 
               | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_opcode))))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__req_clientBit)
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_153 
        = ((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__meta_clients)))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_118));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__req_needT 
        = (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_opcode) 
                      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_opcode)) 
                                 & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_param)))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT___T_118) 
                    & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr_io_status_bits_nestC 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_valid) 
           & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__w_rprobeackfirst)) 
               | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__w_pprobeackfirst))) 
              | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__w_grantfirst))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_tag 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_bits_tag;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__gotT = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__gotT 
                    = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_param___05FT_15_data));
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_157 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5076(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5076\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_159 
        = (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_132 
        = ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_param)) 
           & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_841) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__bad_grant = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr_io_sinkd_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_767) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__bad_grant 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_denied___05FT_15_data;
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_prio_2 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_bits_prio_2;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_control 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr_io_allocate_bits_control;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_129 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_opcode)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_150 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_hit)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_148 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_hit) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty)) 
                 | (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_opcode) 
                       >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__excluded_client 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_hit) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_prio_0)) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_118) 
               | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_opcode))))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__req_clientBit)
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__req_needT 
        = (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_opcode) 
                      >> 2U)) | ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_opcode)) 
                                 & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_param)))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_118) 
                    & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_param)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___GEN_51 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))
            ? (1U & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients)))))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty)
                    ? 2U : 3U) : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_state))
                                   ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients))
                                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty)
                                           ? 4U : 5U)
                                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_dirty)
                                           ? 6U : 7U))
                                   : 8U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5077(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5077\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_141 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients) 
           & (~ ((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_param)) 
                   | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_param))) 
                  | (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__request_param)))
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__req_clientBit)
                  : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_153 
        = ((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients)))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_118));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT___T_144 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__meta_clients) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__probes_toN)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_hit_ohs_3_1 
        = ((0x1fffffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__meta_1__DOT__meta_0_ext_R0_data[3U] 
                            << 6U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__meta_1__DOT__meta_0_ext_R0_data[2U] 
                                      >> 0x1aU))) == 
           (0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_idx 
                                   >> 7U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5078(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5078\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_hit_ohs_3_0 
        = ((0x1fffffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__meta_0__DOT__meta_0_ext_R0_data[3U] 
                            << 6U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__meta_0__DOT__meta_0_ext_R0_data[2U] 
                                      >> 0x1aU))) == 
           (0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_idx 
                                   >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_hit_ohs_3_1 
        = ((0x1fffffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__meta_1__DOT__meta_0_ext_R0_data[3U] 
                            << 6U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__meta_1__DOT__meta_0_ext_R0_data[2U] 
                                      >> 0x1aU))) == 
           (0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_idx 
                                   >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_hit_ohs_3_0 
        = ((0x1fffffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__meta_0__DOT__meta_0_ext_R0_data[3U] 
                            << 6U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__meta_0__DOT__meta_0_ext_R0_data[2U] 
                                      >> 0x1aU))) == 
           (0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_idx 
                                   >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT___T_571 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT___T_67)
                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT___T_70) 
                     >> 2U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2_io_resp_f3_3_taken)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT___T_571 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT___T_67)
                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT___T_70) 
                     >> 2U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2_io_resp_f3_3_taken)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_49 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_address___05FT_15_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_52 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_address___05FT_15_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_55 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_address___05FT_15_data 
                               >> 1U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5079(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5079\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_58 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_address___05FT_15_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_49 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_address___05FT_15_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_52 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_address___05FT_15_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_55 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_address___05FT_15_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_58 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_address___05FT_15_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT___T_499 
        = (((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT___T_95)) 
              & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT___T_97))) 
             << 5U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT___T_77)) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT___T_79))) 
                        << 4U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT___T_67)) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT___T_69))) 
                                   << 3U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT___T_63)) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT___T_65))) 
                                              << 2U) 
                                             | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT___T_63)) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT___T_65))) 
                                                 << 1U) 
                                                | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT___T_63)) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT___T_65)))))))) 
           & (~ ((((((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_2_bits)) 
                        | (0x7fU & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_2_bits)) 
                                    >> 1U))) | (0x3fU 
                                                & (((IData)(1U) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_2_bits)) 
                                                   >> 2U))) 
                      | (0x1fU & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_2_bits)) 
                                  >> 3U))) | (0xfU 
                                              & (((IData)(1U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_2_bits)) 
                                                 >> 4U))) 
                    | (7U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_2_bits)) 
                             >> 5U))) | (3U & (((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_2_bits)) 
                                               >> 6U))) 
                  | (1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_2_bits)) 
                           >> 7U))) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_2_valid)
                                        ? 0x3fU : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5080(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5080\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT___T_499 
        = (((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT___T_95)) 
              & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT___T_97))) 
             << 5U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT___T_77)) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT___T_79))) 
                        << 4U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT___T_67)) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT___T_69))) 
                                   << 3U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT___T_63)) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT___T_65))) 
                                              << 2U) 
                                             | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT___T_63)) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT___T_65))) 
                                                 << 1U) 
                                                | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT___T_63)) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT___T_65)))))))) 
           & (~ ((((((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_2_bits)) 
                        | (0x7fU & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_2_bits)) 
                                    >> 1U))) | (0x3fU 
                                                & (((IData)(1U) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_2_bits)) 
                                                   >> 2U))) 
                      | (0x1fU & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_2_bits)) 
                                  >> 3U))) | (0xfU 
                                              & (((IData)(1U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_2_bits)) 
                                                 >> 4U))) 
                    | (7U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_2_bits)) 
                             >> 5U))) | (3U & (((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_2_bits)) 
                                               >> 6U))) 
                  | (1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_2_bits)) 
                           >> 7U))) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_2_valid)
                                        ? 0x3fU : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5082(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5082\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_units_0__DOT__MemAddrCalcUnit__DOT___T_19 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_units_0__DOT__MemAddrCalcUnit_io_req_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ctrl_is_std));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_519 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_517) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_520 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_517)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_567 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_565) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_568 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_565)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_621 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_619) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT__a_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_619)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_639 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_637) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT__d_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT__TLMonitor__DOT___T_637)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_hit_ohs_2_1 
        = ((0x1fffffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__meta_1__DOT__meta_0_ext_R0_data[2U] 
                            << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__meta_1__DOT__meta_0_ext_R0_data[1U] 
                                      >> 0x1cU))) == 
           (0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_idx 
                                   >> 7U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5083(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5083\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_hit_ohs_2_0 
        = ((0x1fffffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__meta_0__DOT__meta_0_ext_R0_data[2U] 
                            << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__meta_0__DOT__meta_0_ext_R0_data[1U] 
                                      >> 0x1cU))) == 
           (0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_idx 
                                   >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_hit_ohs_2_1 
        = ((0x1fffffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__meta_1__DOT__meta_0_ext_R0_data[2U] 
                            << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__meta_1__DOT__meta_0_ext_R0_data[1U] 
                                      >> 0x1cU))) == 
           (0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_idx 
                                   >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_hit_ohs_2_0 
        = ((0x1fffffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__meta_0__DOT__meta_0_ext_R0_data[2U] 
                            << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__meta_0__DOT__meta_0_ext_R0_data[1U] 
                                      >> 0x1cU))) == 
           (0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_idx 
                                   >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT___T_408 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT___T_63)
                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT___T_66) 
                     >> 2U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2_io_resp_f3_2_taken)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT___T_408 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT___T_63)
                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT___T_66) 
                     >> 2U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2_io_resp_f3_2_taken)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__entries_0_s_cnt 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__entries_0_s_cnt;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5084(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5084\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT___T_19 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__f4_entry_tag) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__f4_tag));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__entries_0_age 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__entries_0_age;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5085(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5085\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__entries_0_p_cnt 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__entries_0_p_cnt;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__entries_0_conf 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__entries_0_conf;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__entries_0_tag 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__entries_0_tag;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5086(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5086\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__entries_0_s_cnt 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__entries_0_s_cnt;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT___T_19 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__f4_entry_tag) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__f4_tag));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5087(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5087\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__entries_0_age 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__entries_0_age;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__entries_0_p_cnt 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__entries_0_p_cnt;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5088(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5088\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__entries_0_conf 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__entries_0_conf;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__entries_0_tag 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__entries_0_tag;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5089(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5089\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__entries_0_s_cnt 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__entries_0_s_cnt;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT___T_19 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__f4_entry_tag) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__f4_tag));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__entries_0_age 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__entries_0_age;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5090(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5090\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__entries_0_p_cnt 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__entries_0_p_cnt;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__entries_0_conf 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__entries_0_conf;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5091(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5091\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__entries_0_tag 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__entries_0_tag;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__entries_0_s_cnt 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__entries_0_s_cnt;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5092(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5092\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT___T_19 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__f4_entry_tag) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__f4_tag));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__entries_0_age 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__entries_0_age;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5093(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5093\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__entries_0_p_cnt 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__entries_0_p_cnt;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__entries_0_conf 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__entries_0_conf;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__entries_0_tag 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__entries_0_tag;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5094(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5094\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__entries_0_s_cnt 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__entries_0_s_cnt;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT___T_19 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__f4_entry_tag) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__f4_tag));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5095(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5095\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__entries_0_age 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__entries_0_age;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__entries_0_p_cnt 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__entries_0_p_cnt;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5096(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5096\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__entries_0_conf 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__entries_0_conf;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__entries_0_tag 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__entries_0_tag;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5097(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5097\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__entries_0_s_cnt 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__entries_0_s_cnt;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT___T_19 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__f4_entry_tag) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__f4_tag));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__entries_0_age 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__entries_0_age;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5098(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5098\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__entries_0_p_cnt 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__entries_0_p_cnt;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__entries_0_conf 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__entries_0_conf;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5099(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5099\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__entries_0_tag 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__entries_0_tag;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5100(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5100\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__entries_0_s_cnt 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__entries_0_s_cnt;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5101(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5101\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT___T_19 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__f4_entry_tag) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__f4_tag));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__entries_0_age 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__entries_0_age;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__entries_0_p_cnt 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__entries_0_p_cnt;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5102(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5102\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__entries_0_conf 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__entries_0_conf;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__entries_0_tag 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__entries_0_tag;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5103(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5103\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__entries_0_s_cnt 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__entries_0_s_cnt;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT___T_19 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__f4_entry_tag) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__f4_tag));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__entries_0_age 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__entries_0_age;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5104(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5104\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__entries_0_p_cnt 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__entries_0_p_cnt;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__entries_0_conf 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__entries_0_conf;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5105(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5105\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__entries_0_tag 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__entries_0_tag;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_659 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_657) 
                 - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5106(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5106\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_660 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_657));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_761 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_759) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_759));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_707 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_705) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_708 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_705));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_779 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_777) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_777));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3_io_update_mispredict 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT___T_54) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__s1_update___05Fbits_is_mispredict_update)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__s1_update___05Fbits_cfi_mispredicted));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3_io_update_repair 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT___T_54) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__s1_update___05Fbits_is_repair_update));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2_io_update_mispredict 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT___T_41) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__s1_update___05Fbits_is_mispredict_update)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__s1_update___05Fbits_cfi_mispredicted));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2_io_update_repair 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT___T_41) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__s1_update___05Fbits_is_repair_update));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1_io_update_mispredict 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT___T_28) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__s1_update___05Fbits_is_mispredict_update)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__s1_update___05Fbits_cfi_mispredicted));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1_io_update_repair 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT___T_28) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__s1_update___05Fbits_is_repair_update));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0_io_update_mispredict 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT___T_15) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__s1_update___05Fbits_is_mispredict_update)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__s1_update___05Fbits_cfi_mispredicted));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0_io_update_repair 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT___T_15) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__s1_update___05Fbits_is_repair_update));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3_io_update_mispredict 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT___T_54) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__s1_update___05Fbits_is_mispredict_update)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__s1_update___05Fbits_cfi_mispredicted));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3_io_update_repair 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT___T_54) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__s1_update___05Fbits_is_repair_update));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2_io_update_mispredict 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT___T_41) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__s1_update___05Fbits_is_mispredict_update)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__s1_update___05Fbits_cfi_mispredicted));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5107(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5107\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2_io_update_repair 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT___T_41) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__s1_update___05Fbits_is_repair_update));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1_io_update_mispredict 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT___T_28) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__s1_update___05Fbits_is_mispredict_update)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__s1_update___05Fbits_cfi_mispredicted));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1_io_update_repair 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT___T_28) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__s1_update___05Fbits_is_repair_update));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0_io_update_mispredict 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT___T_15) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__s1_update___05Fbits_is_mispredict_update)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__s1_update___05Fbits_cfi_mispredicted));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0_io_update_repair 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT___T_15) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__s1_update___05Fbits_is_repair_update));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_param 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater__DOT__full)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater__DOT__saved_param)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_param 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT__full)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT__saved_param)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_param 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT__full)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT__saved_param)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_a_bits_mask 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater__DOT__full)
            ? 0xffU : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_mask 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT__full)
            ? 0xffU : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
            ? 0xffU : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_mask 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT__full)
            ? 0xffU : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_860 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_source___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_863 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_860 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_source___05FT_15_data));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5108(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5108\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_12 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__TLMonitor__DOT___T_12 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_12 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_12 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_12 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_12 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_12 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5109(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5109\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_12 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_12 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_12 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__TLMonitor__DOT___T_429 
        = (((((0U == (0xfffff000U & (0x2010000U ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))) 
              | (0U == (0xfffff000U & (0x54000000U 
                                       ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)))) 
             | (0U == (0xfc000000U & (0xc000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)))) 
            | (0U == (0xffff0000U & (0x2000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)))) 
           | (0U == (0xfffff000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_429 
        = (((((0U == (0xfffff000U & (0x2010000U ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))) 
              | (0U == (0xfffff000U & (0x54000000U 
                                       ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)))) 
             | (0U == (0xfc000000U & (0xc000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)))) 
            | (0U == (0xffff0000U & (0x2000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)))) 
           | (0U == (0xfffff000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5110(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5110\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_49 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_52 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_55 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_58 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__TLMonitor__DOT___T_49 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__TLMonitor__DOT___T_52 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__TLMonitor__DOT___T_55 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__TLMonitor__DOT___T_58 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_49 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                   >> 1U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5111(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5111\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_52 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_55 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_58 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_49 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_52 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_55 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_58 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_49 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_52 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                >> 1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5112(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5112\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_55 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_58 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_49 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_52 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_55 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_58 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_49 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_52 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_55 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                               >> 1U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5113(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5113\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_58 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_49 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_52 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_55 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_58 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_49 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_52 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_55 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_58 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                            >> 1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5114(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5114\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_49 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_52 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_55 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_58 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                  >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT___T_336 
        = (((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT___T_91)) 
              & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT___T_93))) 
             << 5U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT___T_73)) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT___T_75))) 
                        << 4U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT___T_63)) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT___T_65))) 
                                   << 3U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT___T_59)) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT___T_61))) 
                                              << 2U) 
                                             | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT___T_59)) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT___T_61))) 
                                                 << 1U) 
                                                | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT___T_59)) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT___T_61)))))))) 
           & (~ ((((((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_1_bits)) 
                        | (0x7fU & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_1_bits)) 
                                    >> 1U))) | (0x3fU 
                                                & (((IData)(1U) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_1_bits)) 
                                                   >> 2U))) 
                      | (0x1fU & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_1_bits)) 
                                  >> 3U))) | (0xfU 
                                              & (((IData)(1U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_1_bits)) 
                                                 >> 4U))) 
                    | (7U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_1_bits)) 
                             >> 5U))) | (3U & (((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_1_bits)) 
                                               >> 6U))) 
                  | (1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_1_bits)) 
                           >> 7U))) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_1_valid)
                                        ? 0x3fU : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5115(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5115\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT___T_336 
        = (((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT___T_91)) 
              & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT___T_93))) 
             << 5U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT___T_73)) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT___T_75))) 
                        << 4U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT___T_63)) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT___T_65))) 
                                   << 3U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT___T_59)) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT___T_61))) 
                                              << 2U) 
                                             | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT___T_59)) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT___T_61))) 
                                                 << 1U) 
                                                | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT___T_59)) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT___T_61)))))))) 
           & (~ ((((((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_1_bits)) 
                        | (0x7fU & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_1_bits)) 
                                    >> 1U))) | (0x3fU 
                                                & (((IData)(1U) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_1_bits)) 
                                                   >> 2U))) 
                      | (0x1fU & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_1_bits)) 
                                  >> 3U))) | (0xfU 
                                              & (((IData)(1U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_1_bits)) 
                                                 >> 4U))) 
                    | (7U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_1_bits)) 
                             >> 5U))) | (3U & (((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_1_bits)) 
                                               >> 6U))) 
                  | (1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_1_bits)) 
                           >> 7U))) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_1_valid)
                                        ? 0x3fU : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5116(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5116\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_722 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_720) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_723 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_720));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_674 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_672) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_675 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_672));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_776 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_774) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_774));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_719 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_717) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_720 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_717));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_671 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_669) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_672 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_669));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_773 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_771) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_771));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_719 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_717) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_720 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_717));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_671 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_669) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_672 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_669));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_773 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_771) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_771));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_713 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_711) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_714 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_711));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5117(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5117\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_665 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_663) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_666 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_663));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_767 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_765) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_765));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_713 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_711) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_714 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_711));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_785 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_783) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_783));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_665 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_663) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_666 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_663));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_767 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_765) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_765));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1035 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1033) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1036 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1033));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__TLMonitor__DOT___T_987 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__TLMonitor__DOT___T_985) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__TLMonitor__DOT___T_988 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__TLMonitor__DOT___T_985));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1089 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1087) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__TLMonitor__DOT___T_1087));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1035 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1033) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1036 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1033));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_987 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_985) 
                     - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5118(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5118\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_988 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_985));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1089 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1087) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_1087));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_713 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_711) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_714 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_711));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_665 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_663) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_666 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_663));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_767 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_765) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_765));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_713 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_711) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_714 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_711));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_785 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_783) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_783));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_665 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_663) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_666 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_663));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_767 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_765) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_765));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__TLMonitor__DOT___GEN_44 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5119(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5119\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__TLMonitor__DOT___GEN_44 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_44 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_44 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_44 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_44 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5120(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5120\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___GEN_44 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___GEN_44 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___GEN_44 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___GEN_44 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT__full)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT__saved_opcode)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater__DOT__full)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater__DOT__saved_opcode)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5121(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5121\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__saved_opcode)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT__full)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT__saved_opcode)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__TLMonitor__DOT___T_391 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
           & (0U == (0xfffff000U & (0x3000U ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_391 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
           & (0U == (0xfffff000U & (0x3000U ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_862 
        = ((7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_size___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_865 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_862 
        = ((7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_size___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_42 
        = (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_45 
        = (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                     >> 2U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5122(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5122\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__TLMonitor__DOT___T_42 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__TLMonitor__DOT___T_45 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_42 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_45 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                     >> 2U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5123(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5123\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_42 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_45 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_42 
        = (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__TLMonitor__DOT___T_45 
        = (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                     >> 2U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5124(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5124\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_42 
        = (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bus_named_subsystem_pbus__DOT__widget__DOT__TLMonitor__DOT___T_45 
        = (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_42 
        = (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_45 
        = (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                     >> 2U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5125(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5125\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_42 
        = (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_45 
        = (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_42 
        = (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_45 
        = (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                     >> 2U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5126(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5126\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_42 
        = (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_45 
        = (1U & ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater_io_deq_bits_size 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater__DOT__full)
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__Repeater__DOT__saved_size)
                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater_io_deq_bits_size 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT__full)
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__Repeater__DOT__saved_size)
                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater_io_deq_bits_size 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__Repeater__DOT__saved_size)
                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_bits_size 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT__full)
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater__DOT__saved_size)
                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5127(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5127\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
        = ((0xfffffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_5[0U] 
                           << 1U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_2_bit0AlignedSigC));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
        = ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_5[0U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_5[1U] 
                                               << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U] 
        = ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_5[1U] 
                  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_5[2U] 
                                               << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U] 
        = ((0xfffff800U & ((IData)((VL_ULL(0x7fffffffffffff) 
                                    & ((0x400U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_5[3U])
                                        ? (VL_ULL(1) 
                                           + vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_2_highAlignedSigC)
                                        : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_2_highAlignedSigC))) 
                           << 0xbU)) | ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_5[2U] 
                                               >> 0x1fU)) 
                                        | (0x7feU & 
                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_5[3U] 
                                            << 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[4U] 
        = ((0x7ffU & ((IData)((VL_ULL(0x7fffffffffffff) 
                               & ((0x400U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_5[3U])
                                   ? (VL_ULL(1) + vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_2_highAlignedSigC)
                                   : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_2_highAlignedSigC))) 
                      >> 0x15U)) | (0xfffff800U & ((IData)(
                                                           ((VL_ULL(0x7fffffffffffff) 
                                                             & ((0x400U 
                                                                 & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_5[3U])
                                                                 ? 
                                                                (VL_ULL(1) 
                                                                 + vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_2_highAlignedSigC)
                                                                 : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_2_highAlignedSigC)) 
                                                            >> 0x20U)) 
                                                   << 0xbU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[5U] 
        = (0x7ffU & ((IData)(((VL_ULL(0x7fffffffffffff) 
                               & ((0x400U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_5[3U])
                                   ? (VL_ULL(1) + vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_2_highAlignedSigC)
                                   : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_2_highAlignedSigC)) 
                              >> 0x20U)) >> 0x15U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5128(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5128\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_hit_ohs_1_1 
        = ((0x1fffffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__meta_1__DOT__meta_0_ext_R0_data[1U] 
                            << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__meta_1__DOT__meta_0_ext_R0_data[0U] 
                                      >> 0x1eU))) == 
           (0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_idx 
                                   >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_hit_ohs_1_0 
        = ((0x1fffffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__meta_0__DOT__meta_0_ext_R0_data[1U] 
                            << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__meta_0__DOT__meta_0_ext_R0_data[0U] 
                                      >> 0x1eU))) == 
           (0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_idx 
                                   >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_hit_ohs_1_1 
        = ((0x1fffffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__meta_1__DOT__meta_0_ext_R0_data[1U] 
                            << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__meta_1__DOT__meta_0_ext_R0_data[0U] 
                                      >> 0x1eU))) == 
           (0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_idx 
                                   >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_hit_ohs_1_0 
        = ((0x1fffffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__meta_0__DOT__meta_0_ext_R0_data[1U] 
                            << 2U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__meta_0__DOT__meta_0_ext_R0_data[0U] 
                                      >> 0x1eU))) == 
           (0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_idx 
                                   >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT___T_245 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT___T_59)
                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT___T_62) 
                     >> 2U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2_io_resp_f3_1_taken)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT___T_245 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT___T_59)
                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT___T_62) 
                     >> 2U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2_io_resp_f3_1_taken)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5129(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5129\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
        = (IData)(((VL_ULL(0x1fffffffffffe) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT___T_5 
                                               << 1U)) 
                   | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT___T_2_bit0AlignedSigC))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
        = ((0xfffe0000U & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT___T_5 
                                           >> 0x30U)))
                             ? ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT___T_2_highAlignedSigC)
                             : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT___T_2_highAlignedSigC) 
                           << 0x11U)) | (IData)((((VL_ULL(0x1fffffffffffe) 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT___T_5 
                                                      << 1U)) 
                                                  | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT___T_2_bit0AlignedSigC))) 
                                                 >> 0x20U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U] 
        = (0x7ffU & (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT___T_5 
                                     >> 0x30U))) ? 
                      ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT___T_2_highAlignedSigC)
                       : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__sfma__DOT__fma__DOT___T_2_highAlignedSigC) 
                     >> 0xfU));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5130(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5130\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2069[3];
    // Body
    VL_EXTEND_WQ(65,64, __Vtemp2069, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_71);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___GEN_9[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_70)
            ? __Vtemp2069[0U] : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_83[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___GEN_9[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_70)
            ? __Vtemp2069[1U] : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_83[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___GEN_9[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_70)
            ? __Vtemp2069[2U] : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_83[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT___T_173 
        = (((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT___T_87)) 
              & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_5__DOT___T_89))) 
             << 5U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT___T_69)) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_4__DOT___T_71))) 
                        << 4U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT___T_59)) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_3__DOT___T_61))) 
                                   << 3U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT___T_55)) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_2__DOT___T_57))) 
                                              << 2U) 
                                             | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT___T_55)) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_1__DOT___T_57))) 
                                                 << 1U) 
                                                | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT___T_55)) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT___T_57)))))))) 
           & (~ ((((((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_0_bits)) 
                        | (0x7fU & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_0_bits)) 
                                    >> 1U))) | (0x3fU 
                                                & (((IData)(1U) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_0_bits)) 
                                                   >> 2U))) 
                      | (0x1fU & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_0_bits)) 
                                  >> 3U))) | (0xfU 
                                              & (((IData)(1U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_0_bits)) 
                                                 >> 4U))) 
                    | (7U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_0_bits)) 
                             >> 5U))) | (3U & (((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_0_bits)) 
                                               >> 6U))) 
                  | (1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_0_bits)) 
                           >> 7U))) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__f3_meta_provider_0_valid)
                                        ? 0x3fU : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5131(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5131\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2071[3];
    // Body
    VL_EXTEND_WQ(65,64, __Vtemp2071, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_84);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___GEN_10[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_70)
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_77[0U]
            : __Vtemp2071[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___GEN_10[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_70)
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_77[1U]
            : __Vtemp2071[1U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___GEN_10[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_70)
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT___T_77[2U]
            : __Vtemp2071[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT___T_173 
        = (((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT___T_87)) 
              & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_5__DOT___T_89))) 
             << 5U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT___T_69)) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_4__DOT___T_71))) 
                        << 4U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT___T_59)) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_3__DOT___T_61))) 
                                   << 3U) | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT___T_55)) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_2__DOT___T_57))) 
                                              << 2U) 
                                             | ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT___T_55)) 
                                                  & (0U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_1__DOT___T_57))) 
                                                 << 1U) 
                                                | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT___T_55)) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT___T_57)))))))) 
           & (~ ((((((((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_0_bits)) 
                        | (0x7fU & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_0_bits)) 
                                    >> 1U))) | (0x3fU 
                                                & (((IData)(1U) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_0_bits)) 
                                                   >> 2U))) 
                      | (0x1fU & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_0_bits)) 
                                  >> 3U))) | (0xfU 
                                              & (((IData)(1U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_0_bits)) 
                                                 >> 4U))) 
                    | (7U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_0_bits)) 
                             >> 5U))) | (3U & (((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_0_bits)) 
                                               >> 6U))) 
                  | (1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_0_bits)) 
                           >> 7U))) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__f3_meta_provider_0_valid)
                                        ? 0x3fU : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5132(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5132\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_hit_ohs_0_1 
        = ((0x1fffffffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__meta_1__DOT__meta_0_ext_R0_data[0U]) 
           == (0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_idx 
                                      >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_hit_ohs_0_0 
        = ((0x1fffffffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__meta_0__DOT__meta_0_ext_R0_data[0U]) 
           == (0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_idx 
                                      >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_hit_ohs_0_1 
        = ((0x1fffffffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__meta_1__DOT__meta_0_ext_R0_data[0U]) 
           == (0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_idx 
                                      >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_hit_ohs_0_0 
        = ((0x1fffffffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__meta_0__DOT__meta_0_ext_R0_data[0U]) 
           == (0x1fffffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_idx 
                                      >> 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT___T_82 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT___T_55)
                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_1__DOT__tables_0__DOT___T_58) 
                     >> 2U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2_io_resp_f3_0_taken)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT___T_82 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT___T_55)
                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_1__DOT__tables_0__DOT___T_58) 
                     >> 2U) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2_io_resp_f3_0_taken)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5133(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5133\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN_io_in 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_typ))
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_in1
            : (((QData)((IData)((0x7fffffffU & (- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_249 
                                                                      >> 0x20U)))))))) 
                << 0x21U) | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_249));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__INToRecFN_1_io_in 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_typ))
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT__inPipe_bits_in1
            : (((QData)((IData)((0x7fffffffU & (- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_249 
                                                                      >> 0x20U)))))))) 
                << 0x21U) | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__ifpu__DOT__ifpu__DOT___T_249));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5134(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5134\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT__imm_xprlen 
        = ((0x80000000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_imm_packed 
                           << 0xcU)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT___T_59) 
                                         << 0x14U) 
                                        | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT___T_57) 
                                            << 0xcU) 
                                           | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT___T_56) 
                                               << 0xbU) 
                                              | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT___T_53) 
                                                  << 6U) 
                                                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT___T_52) 
                                                     << 1U) 
                                                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT___T_51)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT___T_77 
        = ((0x80000000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_imm_packed 
                           << 0xcU)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT___T_59) 
                                         << 0x14U) 
                                        | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT___T_57) 
                                            << 0xcU) 
                                           | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT___T_56) 
                                               << 0xbU) 
                                              | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT___T_53) 
                                                  << 6U) 
                                                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT___T_52) 
                                                     << 1U) 
                                                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT___T_51)))))));
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue__DOT__ram_data__v0][0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue__DOT__ram_data__v0[0U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue__DOT__ram_data__v0][1U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue__DOT__ram_data__v0[1U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue__DOT__ram_data__v0][2U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue__DOT__ram_data__v0[2U];
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5136(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5136\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT___T_59 
        = ((2U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__remainder[2U] 
                  << 1U)) | (1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT___T_51[0U]));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5137(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5137\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT___T_434 
        = (0x3fU & ((((IData)((0U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__remainder[1U])) 
                      << 5U) | ((0U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__remainder[1U])
                                 ? (((IData)((0U != 
                                              (0xffffU 
                                               & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__remainder[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__remainder[1U] 
                                                     >> 0x10U))))) 
                                     << 4U) | ((0U 
                                                != 
                                                (0xffffU 
                                                 & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__remainder[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__remainder[1U] 
                                                       >> 0x10U))))
                                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT___T_316)
                                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT___T_351)))
                                 : (((IData)((0U != 
                                              (0xffffU 
                                               & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__remainder[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__remainder[0U] 
                                                     >> 0x10U))))) 
                                     << 4U) | ((0U 
                                                != 
                                                (0xffffU 
                                                 & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__remainder[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__remainder[0U] 
                                                       >> 0x10U))))
                                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT___T_391)
                                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT___T_426))))) 
                    - (((IData)((0U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__divisor[1U])) 
                        << 5U) | ((0U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__divisor[1U])
                                   ? (((IData)((0U 
                                                != 
                                                (0xffffU 
                                                 & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__divisor[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__divisor[1U] 
                                                       >> 0x10U))))) 
                                       << 4U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__divisor[2U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__divisor[1U] 
                                                         >> 0x10U))))
                                                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT___T_159)
                                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT___T_194)))
                                   : (((IData)((0U 
                                                != 
                                                (0xffffU 
                                                 & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__divisor[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__divisor[0U] 
                                                       >> 0x10U))))) 
                                       << 4U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__divisor[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__divisor[0U] 
                                                         >> 0x10U))))
                                                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT___T_234)
                                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT___T_269)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5138(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5138\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__state 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__state;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_pc__v0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_pc[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_pc__v0;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__state 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__state;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__RVCExpander_10__DOT___T_740_bits 
        = ((0x10000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_data
            [0U][3U]) ? ((0U != (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_data
                                          [0U][3U] 
                                          >> 0x12U)))
                          ? (0x33U | ((0x1f00000U & 
                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_data
                                        [0U][3U] << 2U)) 
                                      | ((0xf8000U 
                                          & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_data
                                             [0U][3U] 
                                             >> 8U)) 
                                         | (0xf80U 
                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_data
                                               [0U][3U] 
                                               >> 0x10U)))))
                          : ((0U != (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_data
                                              [0U][3U] 
                                              >> 0x17U)))
                              ? (0xe7U | ((0x1f00000U 
                                           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_data
                                              [0U][3U] 
                                              << 2U)) 
                                          | (0xf8000U 
                                             & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_data
                                                [0U][3U] 
                                                >> 8U))))
                              : (0x100073U | (0x1ffff80U 
                                              & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__RVCExpander_10__DOT___T_707))))
            : ((0U != (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_data
                                [0U][3U] >> 0x12U)))
                ? (0x33U | ((0x1f00000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_data
                                           [0U][3U] 
                                           << 2U)) 
                            | (0xf80U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_data
                                         [0U][3U] >> 0x10U))))
                : ((0U != (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_data
                                    [0U][3U] >> 0x17U)))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__RVCExpander_10__DOT___T_707
                    : (0x1fU | (0x1ffff80U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__RVCExpander_10__DOT___T_707)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5139(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5139\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__RVCExpander_10__DOT___T_314_bits 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__RVCExpander_10__DOT___T_282)
            ? ((((0x10000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_data
                  [0U][3U]) ? 7U : 0U) << 0x1dU) | 
               ((0x18000000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_data
                                [0U][3U] << 8U)) | 
                ((0x4000000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_data
                                [0U][3U] << 5U)) | 
                 ((0x2000000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_data
                                 [0U][3U] << 7U)) | 
                  ((0x1000000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_data
                                  [0U][3U] << 2U)) 
                   | ((0xf8000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_data
                                   [0U][3U] >> 8U)) 
                      | ((0xf80U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_data
                                    [0U][3U] >> 0x10U)) 
                         | ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__RVCExpander_10__DOT___T_207))
                             ? 0x13U : 0x1fU))))))))
            : (((((0x10000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_data
                   [0U][3U]) ? 0x7fffU : 0U) << 0x11U) 
                | (0x1f000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_data
                               [0U][3U] >> 6U))) | 
               ((0xf80U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_data
                           [0U][3U] >> 0x10U)) | ((0U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__RVCExpander_10__DOT___T_207))
                                                   ? 0x37U
                                                   : 0x3fU))));
}
