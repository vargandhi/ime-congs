// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

void VTestHarness::_settle__TOP__601(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__601\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_602)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_602)
                                                          ? 
                                                         (1U 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                             << 1U))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_602)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_602)
                                                          ? 
                                                         (1U 
                                                          | (0xeU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                                << 1U)))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__prefixOR_6 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__prefixOR_5) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_5));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_1) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1170)
                  ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)))
                  : 0U)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1 
           & (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1170)
                          ? (VL_ULL(0x7fffffffffff) 
                             & (VL_ULL(0xff) << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                 << 3U)))
                          : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1170)
                  ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source)))
                  : 0U)));
}

void VTestHarness::_settle__TOP__602(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__602\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_5 
        = (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1 
           & (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1170)
                          ? (VL_ULL(0x7fffffffffff) 
                             & (VL_ULL(0xff) << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                                                 << 3U)))
                          : VL_ULL(0)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__same_cycle_resp 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___same_cycle_resp_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__same_cycle_resp 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1))) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___same_cycle_resp_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
}

void VTestHarness::_settle__TOP__605(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__605\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_602)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_602)
                                                          ? 
                                                         (1U 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                             << 1U))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_602)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_602)
                                                          ? 
                                                         (1U 
                                                          | (0xeU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                                << 1U)))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1133 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_a_ready)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1133 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_a_ready)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3216 
        = ((0xb6U == (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 2U))) ? 0U : ((0xb5U 
                                                  == 
                                                  (0x1ffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 2U)))
                                                  ? 0U
                                                  : 
                                                 ((0xb4U 
                                                   == 
                                                   (0x1ffU 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 2U)))
                                                   ? 0U
                                                   : 
                                                  ((0xb3U 
                                                    == 
                                                    (0x1ffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 2U)))
                                                    ? 0U
                                                    : 
                                                   ((0xb2U 
                                                     == 
                                                     (0x1ffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 2U)))
                                                     ? 0U
                                                     : 
                                                    ((0xb1U 
                                                      == 
                                                      (0x1ffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 2U)))
                                                      ? 0U
                                                      : 
                                                     ((0xb0U 
                                                       == 
                                                       (0x1ffU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                           >> 2U)))
                                                       ? 0U
                                                       : 
                                                      ((0xafU 
                                                        == 
                                                        (0x1ffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 2U)))
                                                        ? 0U
                                                        : 
                                                       ((0xaeU 
                                                         == 
                                                         (0x1ffU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                             >> 2U)))
                                                         ? 0U
                                                         : 
                                                        ((0xadU 
                                                          == 
                                                          (0x1ffU 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                              >> 2U)))
                                                          ? 0U
                                                          : 
                                                         ((0xacU 
                                                           == 
                                                           (0x1ffU 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                               >> 2U)))
                                                           ? 0U
                                                           : 
                                                          ((0xabU 
                                                            == 
                                                            (0x1ffU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                >> 2U)))
                                                            ? 0U
                                                            : 
                                                           ((0xaaU 
                                                             == 
                                                             (0x1ffU 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                 >> 2U)))
                                                             ? 0U
                                                             : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3203)))))))))))));
}

void VTestHarness::_settle__TOP__608(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__608\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1__DOT__repeater_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dtim_adapter_auto_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1__DOT__repeater__DOT__full)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_0 
        = ((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mcountinhibit))
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__value_lo)
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__nextSmall));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___GEN_1 
        = (VL_ULL(0x3ffffffffffffff) & ((1U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__nextSmall) 
                                                >> 6U) 
                                               & (~ 
                                                  ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__reg_mcountinhibit) 
                                                   >> 2U))))
                                         ? (VL_ULL(1) 
                                            + vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__value_hi)
                                         : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__value_hi));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_rs_0 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__rf_wen)
            ? ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__rf_waddr))
                ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__rf_waddr) 
                    == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_rs1))
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__rf_wdata
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__rf_id_rs_MPORT_data)
                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__rf_id_rs_MPORT_data)
            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__rf_id_rs_MPORT_data);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_rs_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__rf_wen)
            ? ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__rf_waddr))
                ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__rf_waddr) 
                    == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__exp_io_out_rs2))
                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__rf_wdata
                    : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__rf_id_rs_MPORT_1_data)
                : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__rf_id_rs_MPORT_1_data)
            : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__rf_id_rs_MPORT_1_data);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT___T_32 
        = (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_valid_masked) 
                      & (0x11U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_req_cmd)))) 
                  | (0xfU == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__s1_mask_xwr) 
                                      | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcacheArb_io_mem_s1_data_mask)))))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_en 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__s0_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_done));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0_RW0_en 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__s0_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__wen));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array_RW0_addr 
        = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_done)
                     ? (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_paddr 
                        >> 6U) : (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT___io_cpu_npc_T) 
                                     >> 6U))));
}

void VTestHarness::_settle__TOP__609(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__609\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0_RW0_addr 
        = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_one_beat)
                      ? ((0x3f0U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_paddr 
                                    >> 2U)) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_cnt))
                      : (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT___io_cpu_npc_T) 
                            >> 2U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___GEN_23 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_52)
            ? ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state))
                ? 3U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1115 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_d_ready)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_a_ready)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_a_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__latch 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_a_ready));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___beatsLeft_T_4 
        = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft) 
                     - ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_a_ready) 
                        & ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft))
                            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_10)
                            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___out_0_a_earlyValid_T_3)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_io_in_a_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_a_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__allowed_0));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_a_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_a_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__allowed_0));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1_io_in_a_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_a_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__allowed_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_a_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_a_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__allowed_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_corrupt 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_0) 
            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_corrupt) 
               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_corrupt))) 
           | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_1) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_a_bits_corrupt)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_1)
            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__a_isSupported)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_a_bits_param)
                : 0U) : 0U);
}

void VTestHarness::_settle__TOP__610(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__610\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_mask 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_0)
             ? ((8U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_1) 
                        << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                                  << 2U) 
                                                 & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                                    << 3U))))) 
                | ((4U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_1) 
                           << 2U) | (0xfffffffcU & 
                                     ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                       << 1U) & ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address) 
                                                 << 2U))))) 
                   | ((2U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc) 
                              | ((~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                     >> 1U)) & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address)) 
                             << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc) 
                                              | ((~ 
                                                  (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                                   >> 1U)) 
                                                 & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address)))))))
             : 0U) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_1)
                       ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_a_bits_mask)
                       : 0U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_1)
            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__a_isSupported)
                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_a_bits_opcode)
                : 4U) : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_0)
             ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_source)
             : 0U) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_1)
                       ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_a_bits_source)
                       : 0U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_0)
             ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address
             : 0U) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_1)
                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_a_bits_address
                       : 0U));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_0)
             ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size)
             : 0U) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__muxStateEarly_1)
                       ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_a_bits_size)
                       : 0U));
}

void VTestHarness::_settle__TOP__611(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__611\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_xcpt 
        = (1U & (((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr_io_interrupt) 
                      | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__bpu_io_debug_if)) 
                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__bpu_io_xcpt_if)) 
                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_xcpt0_ae_inst)) 
                   | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT___io_inst_0_bits_xcpt1_T_5) 
                      >> 1U)) | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT___io_inst_0_bits_xcpt1_T_5)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_illegal_insn)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT___GEN_46 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__take_pc_wb) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__take_pc_mem))
            ? 0U : (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ctrl_stalld)
                           ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid)
                           : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT___T_7)
                               ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT___io_imem_ready_T_4)
                               : ((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT___io_imem_ready_T) 
                                         | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid))))
                                   ? 0U : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid) 
                                           - (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__nReady)))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ctrl_killd 
        = (1U & (((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_valid)) 
                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_replay)) 
                   | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__take_pc_mem_wb)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ctrl_stalld)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr_io_interrupt)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_imem_ready 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ctrl_stalld)) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT___io_imem_ready_T)) 
           & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT__nICReady) 
               >= (3U & ((IData)(2U) - (1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq_io_deq_bits_pc 
                                              >> 1U))))) 
              | (1U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf__DOT___io_imem_ready_T_4))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___GEN_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain_io_chainIn_capture)
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__nonzeroResp)
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiStatus_hi));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___widx_incremented_T_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin) 
                 + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___widx_T_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___inflight_T_2 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_830)
                      ? 1U : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_846)
                                         ? (3U & ((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                              >> 0x23U)))))
                                         : 0U))));
}

void VTestHarness::_settle__TOP__612(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__612\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_23 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_846)
            ? (0x7fffffffU & ((IData)(0xfU) << (4U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                            >> 0x23U)) 
                                                   << 2U))))
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT___GEN_12 
        = ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__done) 
               & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_bits_opcode)))) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__idle));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_598 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_out_0_d_ready)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_a_ready)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_a_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_out_0_a_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__done 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall)) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT___bundleIn_0_a_ready_T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_0_a_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_a_ready 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT___bundleIn_0_a_ready_T_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___portsAOI_in_0_a_ready_T 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_0) 
           & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall)) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT___bundleIn_0_a_ready_T_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___inflight_T_2 
        = (7U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_722)
                      ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                      : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_738)
                                    ? (0xfU & ((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source)))
                                    : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_722)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_722)
                                                          ? 
                                                         (1U 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                             << 1U))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23))));
}

void VTestHarness::_settle__TOP__613(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__613\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_722)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___T_722)
                                                          ? 
                                                         (1U 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                             << 1U))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_23))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___inflight_T_2 
        = (7U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_722)
                      ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                      : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_738)
                                    ? (0xfU & ((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar_auto_in_d_bits_source)))
                                    : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_722)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_722)
                                                          ? 
                                                         (1U 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                             << 1U))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_722)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___T_722)
                                                          ? 
                                                         (1U 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                             << 1U))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT___GEN_23))));
}

void VTestHarness::_settle__TOP__614(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__614\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_45 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_35)) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__prefixOR_6) 
                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_6))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_28 
        = (1U & ((((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0)) 
                       | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1))) 
                      & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__prefixOR_2)) 
                         | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2)))) 
                     & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__prefixOR_3)) 
                        | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_3)))) 
                    & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__prefixOR_4)) 
                       | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_4)))) 
                   & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__prefixOR_5)) 
                      | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_5)))) 
                  & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__prefixOR_6)) 
                     | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_6)))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1099 
        = (1U & (((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight) 
                         >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__same_cycle_resp)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1117 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode) 
             == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                               >> 1U))) ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                                 ? 4U
                                                 : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___GEN_46)))) 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode) 
               == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                 >> 1U))) ? 4U : ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                       >> 1U)))
                                                   ? 5U
                                                   : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___GEN_46))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
}

void VTestHarness::_settle__TOP__615(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__615\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1099 
        = (1U & (((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight) 
                         >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source))) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__same_cycle_resp)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1117 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode) 
             == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                               >> 1U))) ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                                 ? 4U
                                                 : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_46)))) 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode) 
               == ((7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                 >> 1U))) ? 4U : ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                       >> 1U)))
                                                   ? 5U
                                                   : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_46))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1042 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1074 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1042 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter)));
}

void VTestHarness::_settle__TOP__616(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__616\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1074 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3229 
        = ((0xc3U == (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 2U))) ? 0U : ((0xc2U 
                                                  == 
                                                  (0x1ffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 2U)))
                                                  ? 0U
                                                  : 
                                                 ((0xc1U 
                                                   == 
                                                   (0x1ffU 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 2U)))
                                                   ? 0U
                                                   : 
                                                  ((0xc0U 
                                                    == 
                                                    (0x1ffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 2U)))
                                                    ? 0x380006fU
                                                    : 
                                                   ((0xbfU 
                                                     == 
                                                     (0x1ffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 2U)))
                                                     ? 0U
                                                     : 
                                                    ((0xbeU 
                                                      == 
                                                      (0x1ffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 2U)))
                                                      ? 0U
                                                      : 
                                                     ((0xbdU 
                                                       == 
                                                       (0x1ffU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                           >> 2U)))
                                                       ? 0U
                                                       : 
                                                      ((0xbcU 
                                                        == 
                                                        (0x1ffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 2U)))
                                                        ? 0U
                                                        : 
                                                       ((0xbbU 
                                                         == 
                                                         (0x1ffU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                             >> 2U)))
                                                         ? 0U
                                                         : 
                                                        ((0xbaU 
                                                          == 
                                                          (0x1ffU 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                              >> 2U)))
                                                          ? 0U
                                                          : 
                                                         ((0xb9U 
                                                           == 
                                                           (0x1ffU 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                               >> 2U)))
                                                           ? 0U
                                                           : 
                                                          ((0xb8U 
                                                            == 
                                                            (0x1ffU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                >> 2U)))
                                                            ? 0U
                                                            : 
                                                           ((0xb7U 
                                                             == 
                                                             (0x1ffU 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                 >> 2U)))
                                                             ? 0U
                                                             : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3216)))))))))))));
}

void VTestHarness::_settle__TOP__619(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__619\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1__DOT__repeater_io_enq_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1__DOT__repeater__DOT___T_1 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1__DOT__repeater_io_enq_ready) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_3__DOT__bundleOut_0_a_q__DOT__empty))) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__fragmenter_1__DOT__repeater_io_repeat));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___GEN_25 
        = ((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
             & ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__beatsLeft)) 
                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__state_0))) 
            & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state)))
            ? ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state))
                ? 1U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___GEN_23))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___GEN_23));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1024 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1056 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT___T_1065 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_io_in_a_ready)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_io_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT___T_1065 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_a_ready)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_0_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___T_1090 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1_io_in_a_ready)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1_io_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)));
}

void VTestHarness::_settle__TOP__620(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__620\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___T_1090 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_a_ready)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1027 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__param)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1023 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__opcode)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1035 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__source)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1080 
        = (1U & ((~ (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight) 
                           >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source)))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_T_2 
        = (7U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1074)
                      ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source)))
                      : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1090)
                                    ? (0xfU & ((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                    : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1074)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1074)
                                                          ? 
                                                         (1U 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode) 
                                                             << 1U))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1090)
                                  ? (VL_ULL(0x7fffffffffff) 
                                     & (VL_ULL(0xf) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0))))));
}

void VTestHarness::_settle__TOP__621(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__621\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___GEN_15 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1071)
            ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source)))
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
           == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__source_ok 
        = (((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source)) 
            | (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source))) 
           | (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1039 
        = ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
            == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__address) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_163 
        = ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                             & (~ (0x7ffffffU & ((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1031 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__size)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1109 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xffffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes 
                         | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1074)
                                     ? (VL_ULL(0xfffffffff) 
                                        & ((QData)((IData)(
                                                           ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1074)
                                                             ? 
                                                            (1U 
                                                             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size) 
                                                                << 1U))
                                                             : 0U))) 
                                           << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source) 
                                               << 3U)))
                                     : VL_ULL(0)))) 
                        & (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1090)
                                       ? (VL_ULL(0x7fffffffffff) 
                                          & (VL_ULL(0xff) 
                                             << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 << 3U)))
                                       : VL_ULL(0))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_350 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
           & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  (0x3000U 
                                                                   ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address))))));
}

void VTestHarness::_settle__TOP__622(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__622\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))) 
                           >> 1U) & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                        >> 1U))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size))) 
                           >> 1U) & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                     >> 1U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT___T_43 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ctrl_killd)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr_io_interrupt)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_replay)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__wen 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_imem_ready)
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT___wen_T_3)
            : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT___wen_T) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__wen_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_imem_ready)
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT___wen_T_11)
            : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT___wen_T_2) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_1))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__wen_2 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_imem_ready)
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT___wen_T_19)
            : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT___wen_T_10) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_2))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__wen_3 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_imem_ready)
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT___wen_T_27)
            : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT___wen_T_18) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_3))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__wen_4 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_imem_ready)
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT___wen_T_34)
            : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT___wen_T_26) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_4))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes) 
                    | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_830)
                        ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_830)
                            ? 5U : 0U) : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_23)));
}

void VTestHarness::_settle__TOP__623(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__623\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_opcodes) 
                    | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_830)
                        ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___T_830)
                            ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode) 
                                     << 1U)) : 0U) : 0U)) 
                   & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_23)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_507 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_539 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__inc 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter))) 
            << 1U) | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__done_3) 
                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter_3))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode) 
                          >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode) 
                                       >> 1U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_889 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_0_d_ready)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_a_ready)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_a_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_0_a_valid));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___T_4 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___portsAOI_in_0_a_ready_T) 
            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___portsAOI_in_0_a_ready_T_1)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqValidReg));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_a_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___portsAOI_in_0_a_ready_T) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___portsAOI_in_0_a_ready_T_1));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_T_2 
        = (7U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1074)
                      ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                      : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1090)
                                    ? (0xfU & ((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source)))
                                    : 0U))));
}

void VTestHarness::_settle__TOP__624(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__624\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1074)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1074)
                                                          ? 
                                                         (1U 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                             << 1U))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1090)
                                  ? (VL_ULL(0x7fffffffffff) 
                                     & (VL_ULL(0xf) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                                            << 2U)))
                                  : VL_ULL(0))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xffffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes 
                         | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1074)
                                     ? (VL_ULL(0xfffffffff) 
                                        & ((QData)((IData)(
                                                           ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1074)
                                                             ? 
                                                            (1U 
                                                             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                                << 1U))
                                                             : 0U))) 
                                           << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                               << 3U)))
                                     : VL_ULL(0)))) 
                        & (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1090)
                                       ? (VL_ULL(0x7fffffffffff) 
                                          & (VL_ULL(0xff) 
                                             << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                                                 << 3U)))
                                       : VL_ULL(0))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_T_2 
        = (7U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1074)
                      ? (0xfU & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                      : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1090)
                                    ? (0xfU & ((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)))
                                    : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes) 
                      | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1074)
                                  ? (VL_ULL(0x7ffffffff) 
                                     & ((QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1074)
                                                          ? 
                                                         (1U 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                             << 1U))
                                                          : 0U))) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                            << 2U)))
                                  : VL_ULL(0)))) & 
                     (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1090)
                                  ? (VL_ULL(0x7fffffffffff) 
                                     & (VL_ULL(0xf) 
                                        << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                            << 2U)))
                                  : VL_ULL(0))))));
}

void VTestHarness::_settle__TOP__625(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__625\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xffffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes 
                         | (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1074)
                                     ? (VL_ULL(0xfffffffff) 
                                        & ((QData)((IData)(
                                                           ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1074)
                                                             ? 
                                                            (1U 
                                                             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                                << 1U))
                                                             : 0U))) 
                                           << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                               << 3U)))
                                     : VL_ULL(0)))) 
                        & (~ (IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1090)
                                       ? (VL_ULL(0x7fffffffffff) 
                                          & (VL_ULL(0xff) 
                                             << ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                 << 3U)))
                                       : VL_ULL(0))))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3242 
        = ((0xd0U == (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 2U))) ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_22
            : ((0xcfU == (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                    >> 2U))) ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractGeneratedMem_1
                : ((0xceU == (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                        >> 2U))) ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractGeneratedMem_0
                    : ((0xcdU == (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                            >> 2U)))
                        ? 0U : ((0xccU == (0x1ffU & 
                                           ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                            >> 2U)))
                                 ? 0U : ((0xcbU == 
                                          (0x1ffU & 
                                           ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                            >> 2U)))
                                          ? 0U : ((0xcaU 
                                                   == 
                                                   (0x1ffU 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 2U)))
                                                   ? 0U
                                                   : 
                                                  ((0xc9U 
                                                    == 
                                                    (0x1ffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 2U)))
                                                    ? 0U
                                                    : 
                                                   ((0xc8U 
                                                     == 
                                                     (0x1ffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 2U)))
                                                     ? 0U
                                                     : 
                                                    ((0xc7U 
                                                      == 
                                                      (0x1ffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 2U)))
                                                      ? 0U
                                                      : 
                                                     ((0xc6U 
                                                       == 
                                                       (0x1ffU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                           >> 2U)))
                                                       ? 0U
                                                       : 
                                                      ((0xc5U 
                                                        == 
                                                        (0x1ffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 2U)))
                                                        ? 0U
                                                        : 
                                                       ((0xc4U 
                                                         == 
                                                         (0x1ffU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                             >> 2U)))
                                                         ? 0U
                                                         : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3229)))))))))))));
}

void VTestHarness::_settle__TOP__629(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__629\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT___T_974 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT___T_1006 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT___T_974 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT___T_1006 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___T_999 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___T_1031 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___T_999 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___T_1031 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___a_first_T) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1105 
        = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
             == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))
                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))
                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___GEN_30)))) 
            | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
               == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))
                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))
                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___GEN_30))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1140 
        = (1U & ((((7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___GEN_15)) 
                   != ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1085)
                        ? (7U & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                        : 0U)) | (~ (IData)((0U != 
                                             (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___GEN_15)))))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
}

void VTestHarness::_settle__TOP__630(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__630\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__same_cycle_resp 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1071) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_42 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__source_ok));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_400 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_350) 
            | ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
               & (((((((VL_ULL(0) == (VL_ULL(0x1ffeff000) 
                                      & (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))) 
                       | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                                        & (QData)((IData)(
                                                          (0x10000U 
                                                           ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))))) 
                      | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                                       & (QData)((IData)(
                                                         (0x2000000U 
                                                          ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))))) 
                     | (VL_ULL(0) == (VL_ULL(0x1fc000000) 
                                      & (QData)((IData)(
                                                        (0xc000000U 
                                                         ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))))) 
                    | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                     & (QData)((IData)(
                                                       (0x10000000U 
                                                        ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))))) 
                   | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                    & (QData)((IData)(
                                                      (0x54000000U 
                                                       ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))))) 
                  | (VL_ULL(0) == (VL_ULL(0x1ffffc000) 
                                   & (QData)((IData)(
                                                     (0x80000000U 
                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask 
        = ((8U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_1) 
                   << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                             << 2U) 
                                            & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                               << 3U))))) 
           | ((4U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_acc_1) 
                      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                                << 1U) 
                                               & ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address) 
                                                  << 2U))))) 
              | ((2U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_acc) 
                         | ((~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                >> 1U)) & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)) 
                        << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask_acc) 
                                         | ((~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address 
                                                >> 1U)) 
                                            & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))))));
}

void VTestHarness::_settle__TOP__631(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__631\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___inflight_T_2 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_539)
                      ? 1U : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_555)
                                         ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes) 
                    | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_539)
                        ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_539)
                            ? 5U : 0U) : 0U)) & (~ 
                                                 ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_555)
                                                   ? 0xfU
                                                   : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes) 
                    | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_539)
                        ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_539)
                            ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode) 
                                     << 1U)) : 0U) : 0U)) 
                   & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___T_555)
                          ? 0xfU : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__next_flight 
        = (3U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__flight) 
                  + ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__inc)) 
                     + (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__inc) 
                              >> 1U)))) - ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__done_3) 
                                           + (1U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__done_3) 
                                               >> 1U)))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_798 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter)));
}

void VTestHarness::_settle__TOP__632(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__632\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_830 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___T_8 
        = (1U & ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain_io_update_valid) 
                      & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyBusyReg)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___T_11)))) 
                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT___T_4))) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_589 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm_io_dmi_resp_ready)) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_a_ready)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_a_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqValidReg));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3255 
        = ((0xddU == (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 2U))) ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_28
            : ((0xdcU == (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                    >> 2U))) ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_55
                : ((0xdbU == (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                        >> 2U))) ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_64
                    : ((0xdaU == (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                            >> 2U)))
                        ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_2
                        : ((0xd9U == (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 2U)))
                            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_19
                            : ((0xd8U == (0x1ffU & 
                                          ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                           >> 2U)))
                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_67
                                : ((0xd7U == (0x1ffU 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                 >> 2U)))
                                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_58
                                    : ((0xd6U == (0x1ffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 2U)))
                                        ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_13
                                        : ((0xd5U == 
                                            (0x1ffU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                >> 2U)))
                                            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_7
                                            : ((0xd4U 
                                                == 
                                                (0x1ffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                    >> 2U)))
                                                ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_70
                                                : (
                                                   (0xd3U 
                                                    == 
                                                    (0x1ffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 2U)))
                                                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_61
                                                    : 
                                                   ((0xd2U 
                                                     == 
                                                     (0x1ffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 2U)))
                                                     ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_25
                                                     : 
                                                    ((0xd1U 
                                                      == 
                                                      (0x1ffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 2U)))
                                                      ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_16
                                                      : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3242)))))))))))));
}

void VTestHarness::_settle__TOP__638(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__638\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___inflight_sizes_T_2 
        = (0xffffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes) 
                       | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___T_1031)
                           ? (0xfffffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___T_1031)
                                            ? (1U | 
                                               ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                << 1U))
                                            : 0U) << 
                                          ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                           << 3U)))
                           : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___T_1047)
                                         ? (0x7fffffffU 
                                            & ((IData)(0xffU) 
                                               << (8U 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                      << 3U))))
                                         : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1099 
        = (1U & (((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight) 
                         >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)) 
                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_854 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_42) 
            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_350)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_677 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_42) 
            & (((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                & ((((VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                    & (QData)((IData)(
                                                      (0x3000U 
                                                       ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address))))) 
                     | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                      & (QData)((IData)(
                                                        (0x100000U 
                                                         ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))))) 
                    | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                     & (QData)((IData)(
                                                       (0x10000000U 
                                                        ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))))) 
                   | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                    & (QData)((IData)(
                                                      (0x54000000U 
                                                       ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address))))))) 
               | ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                  & (VL_ULL(0) == (VL_ULL(0x1ffffc000) 
                                   & (QData)((IData)(
                                                     (0x80000000U 
                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
}

void VTestHarness::_settle__TOP__639(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__639\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_493 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_42) 
            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_350) 
               | ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                  & ((((((VL_ULL(0) == (VL_ULL(0x1ffeff000) 
                                        & (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))) 
                         | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
                                          & (QData)((IData)(
                                                            (0x2000000U 
                                                             ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))))) 
                        | (VL_ULL(0) == (VL_ULL(0x1fc000000) 
                                         & (QData)((IData)(
                                                           (0xc000000U 
                                                            ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))))) 
                       | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                        & (QData)((IData)(
                                                          (0x10000000U 
                                                           ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))))) 
                      | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                                       & (QData)((IData)(
                                                         (0x54000000U 
                                                          ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address)))))) 
                     | (VL_ULL(0) == (VL_ULL(0x1ffffc000) 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address))))))))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_414 
        = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_mask) 
            == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask)) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_598 
        = ((0U == ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_mask) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__mask)))) 
           | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes) 
                    | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_830)
                        ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_830)
                            ? 5U : 0U) : 0U)) & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_23)));
}

void VTestHarness::_settle__TOP__640(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__640\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___inflight_T_2 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_830)
                      ? 1U : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_846)
                                         ? (3U & ((IData)(1U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_source)))
                                         : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_opcodes) 
                    | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_830)
                        ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___T_830)
                            ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode) 
                                     << 1U)) : 0U) : 0U)) 
                   & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_23)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_498 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_530 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3268 
        = ((0xeaU == (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 2U))) ? 0U : ((0xe9U 
                                                  == 
                                                  (0x1ffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 2U)))
                                                  ? 0U
                                                  : 
                                                 ((0xe8U 
                                                   == 
                                                   (0x1ffU 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 2U)))
                                                   ? 0U
                                                   : 
                                                  ((0xe7U 
                                                    == 
                                                    (0x1ffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 2U)))
                                                    ? 0U
                                                    : 
                                                   ((0xe6U 
                                                     == 
                                                     (0x1ffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 2U)))
                                                     ? 0U
                                                     : 
                                                    ((0xe5U 
                                                      == 
                                                      (0x1ffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 2U)))
                                                      ? 0U
                                                      : 
                                                     ((0xe4U 
                                                       == 
                                                       (0x1ffU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                           >> 2U)))
                                                       ? 0U
                                                       : 
                                                      ((0xe3U 
                                                        == 
                                                        (0x1ffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 2U)))
                                                        ? 0U
                                                        : 
                                                       ((0xe2U 
                                                         == 
                                                         (0x1ffU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                             >> 2U)))
                                                         ? 0U
                                                         : 
                                                        ((0xe1U 
                                                          == 
                                                          (0x1ffU 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                              >> 2U)))
                                                          ? 0U
                                                          : 
                                                         ((0xe0U 
                                                           == 
                                                           (0x1ffU 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                               >> 2U)))
                                                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_73
                                                           : 
                                                          ((0xdfU 
                                                            == 
                                                            (0x1ffU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                >> 2U)))
                                                            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_76
                                                            : 
                                                           ((0xdeU 
                                                             == 
                                                             (0x1ffU 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                 >> 2U)))
                                                             ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_10
                                                             : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3255)))))))))))));
}

void VTestHarness::_settle__TOP__642(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__642\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_234 
        = ((0xeaU == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                >> 2U))) ? 0x6f722c73U
            : ((0xe9U == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 2U))) ? 0x70696863U
                : ((0xe8U == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 2U))) ? 0x65657266U
                    : ((0xe7U == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 2U)))
                        ? 0x1b000000U : ((0xe6U == 
                                          (0x3ffU & 
                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 2U)))
                                          ? 0x2c000000U
                                          : ((0xe5U 
                                              == (0x3ffU 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 2U)))
                                              ? 0x3000000U
                                              : ((0xe4U 
                                                  == 
                                                  (0x3ffU 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                      >> 2U)))
                                                  ? 0x1000000U
                                                  : 
                                                 ((0xe3U 
                                                   == 
                                                   (0x3ffU 
                                                    & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                       >> 2U)))
                                                   ? 0xf000000U
                                                   : 
                                                  ((0xe2U 
                                                    == 
                                                    (0x3ffU 
                                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 2U)))
                                                    ? 0x4000000U
                                                    : 
                                                   ((0xe1U 
                                                     == 
                                                     (0x3ffU 
                                                      & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 2U)))
                                                     ? 0x3000000U
                                                     : 
                                                    ((0xe0U 
                                                      == 
                                                      (0x3ffU 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 2U)))
                                                      ? 0x1000000U
                                                      : 
                                                     ((0xdfU 
                                                       == 
                                                       (0x3ffU 
                                                        & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                           >> 2U)))
                                                       ? 0U
                                                       : 
                                                      ((0xdeU 
                                                        == 
                                                        (0x3ffU 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                            >> 2U)))
                                                        ? 0x4000000U
                                                        : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_221)))))))))))));
}

void VTestHarness::_settle__TOP__643(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__643\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___inflight_T_2 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight) 
                  | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_530)
                      ? 1U : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_546)
                                         ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes) 
                    | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_530)
                        ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_530)
                            ? 5U : 0U) : 0U)) & (~ 
                                                 ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_546)
                                                   ? 0xfU
                                                   : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes) 
                    | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_530)
                        ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_530)
                            ? (1U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode) 
                                     << 1U)) : 0U) : 0U)) 
                   & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___T_546)
                          ? 0xfU : 0U))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3281 
        = ((0xf7U == (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 2U))) ? 0U : ((0xf6U 
                                                  == 
                                                  (0x1ffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 2U)))
                                                  ? 0U
                                                  : 
                                                 ((0xf5U 
                                                   == 
                                                   (0x1ffU 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 2U)))
                                                   ? 0U
                                                   : 
                                                  ((0xf4U 
                                                    == 
                                                    (0x1ffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 2U)))
                                                    ? 0U
                                                    : 
                                                   ((0xf3U 
                                                     == 
                                                     (0x1ffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 2U)))
                                                     ? 0U
                                                     : 
                                                    ((0xf2U 
                                                      == 
                                                      (0x1ffU 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                          >> 2U)))
                                                      ? 0U
                                                      : 
                                                     ((0xf1U 
                                                       == 
                                                       (0x1ffU 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                           >> 2U)))
                                                       ? 0U
                                                       : 
                                                      ((0xf0U 
                                                        == 
                                                        (0x1ffU 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                            >> 2U)))
                                                        ? 0U
                                                        : 
                                                       ((0xefU 
                                                         == 
                                                         (0x1ffU 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                             >> 2U)))
                                                         ? 0U
                                                         : 
                                                        ((0xeeU 
                                                          == 
                                                          (0x1ffU 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                              >> 2U)))
                                                          ? 0U
                                                          : 
                                                         ((0xedU 
                                                           == 
                                                           (0x1ffU 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                               >> 2U)))
                                                           ? 0U
                                                           : 
                                                          ((0xecU 
                                                            == 
                                                            (0x1ffU 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                >> 2U)))
                                                            ? 0U
                                                            : 
                                                           ((0xebU 
                                                             == 
                                                             (0x1ffU 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                                 >> 2U)))
                                                             ? 0U
                                                             : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_3268)))))))))))));
}

void VTestHarness::_settle__TOP__645(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__645\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_247 
        = ((0xf7U == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                >> 2U))) ? 0x6e696c63U
            : ((0xf6U == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 2U))) ? 0x1000000U
                : ((0xf5U == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 2U))) ? 0x24010000U
                    : ((0xf4U == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 2U)))
                        ? 0U : ((0xf3U == (0x3ffU & 
                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 2U)))
                                 ? 0x3000000U : ((0xf2U 
                                                  == 
                                                  (0x3ffU 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                      >> 2U)))
                                                  ? 0x737562U
                                                  : 
                                                 ((0xf1U 
                                                   == 
                                                   (0x3ffU 
                                                    & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                       >> 2U)))
                                                   ? 0x2d656c70U
                                                   : 
                                                  ((0xf0U 
                                                    == 
                                                    (0x3ffU 
                                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 2U)))
                                                    ? 0x6d697300U
                                                    : 
                                                   ((0xefU 
                                                     == 
                                                     (0x3ffU 
                                                      & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 2U)))
                                                     ? 0x636f732dU
                                                     : 
                                                    ((0xeeU 
                                                      == 
                                                      (0x3ffU 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 2U)))
                                                      ? 0x6e776f6eU
                                                      : 
                                                     ((0xedU 
                                                       == 
                                                       (0x3ffU 
                                                        & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                           >> 2U)))
                                                       ? 0x6b6e752dU
                                                       : 
                                                      ((0xecU 
                                                        == 
                                                        (0x3ffU 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                            >> 2U)))
                                                        ? 0x70696863U
                                                        : 
                                                       ((0xebU 
                                                         == 
                                                         (0x3ffU 
                                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                             >> 2U)))
                                                         ? 0x74656b63U
                                                         : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_234)))))))))))));
}

void VTestHarness::_settle__TOP__648(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__648\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_260 
        = ((0x104U == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                 >> 2U))) ? 0x2b010000U
            : ((0x103U == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                     >> 2U))) ? 0x10000000U
                : ((0x102U == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                         >> 2U))) ? 0x3000000U
                    : ((0x101U == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                             >> 2U)))
                        ? 0U : ((0x100U == (0x3ffU 
                                            & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                               >> 2U)))
                                 ? 0x30746e69U : ((0xffU 
                                                   == 
                                                   (0x3ffU 
                                                    & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                       >> 2U)))
                                                   ? 0x6c632c76U
                                                   : 
                                                  ((0xfeU 
                                                    == 
                                                    (0x3ffU 
                                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 2U)))
                                                    ? 0x63736972U
                                                    : 
                                                   ((0xfdU 
                                                     == 
                                                     (0x3ffU 
                                                      & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 2U)))
                                                     ? 0x1b000000U
                                                     : 
                                                    ((0xfcU 
                                                      == 
                                                      (0x3ffU 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 2U)))
                                                      ? 0xd000000U
                                                      : 
                                                     ((0xfbU 
                                                       == 
                                                       (0x3ffU 
                                                        & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                           >> 2U)))
                                                       ? 0x3000000U
                                                       : 
                                                      ((0xfaU 
                                                        == 
                                                        (0x3ffU 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                            >> 2U)))
                                                        ? 0x30U
                                                        : 
                                                       ((0xf9U 
                                                         == 
                                                         (0x3ffU 
                                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                             >> 2U)))
                                                         ? 0x30303030U
                                                         : 
                                                        ((0xf8U 
                                                          == 
                                                          (0x3ffU 
                                                           & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                              >> 2U)))
                                                          ? 0x30324074U
                                                          : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_247)))))))))))));
}

void VTestHarness::_settle__TOP__651(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__651\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_273 
        = ((0x111U == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                 >> 2U))) ? 0x746e6f63U
            : ((0x110U == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                     >> 2U))) ? 0x3f010000U
                : ((0x10fU == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                         >> 2U))) ? 0x8000000U
                    : ((0x10eU == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                             >> 2U)))
                        ? 0x3000000U : ((0x10dU == 
                                         (0x3ffU & 
                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 2U)))
                                         ? 0x100U : 
                                        ((0x10cU == 
                                          (0x3ffU & 
                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 2U)))
                                          ? 2U : ((0x10bU 
                                                   == 
                                                   (0x3ffU 
                                                    & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                       >> 2U)))
                                                   ? 0x9c000000U
                                                   : 
                                                  ((0x10aU 
                                                    == 
                                                    (0x3ffU 
                                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 2U)))
                                                    ? 0x8000000U
                                                    : 
                                                   ((0x109U 
                                                     == 
                                                     (0x3ffU 
                                                      & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 2U)))
                                                     ? 0x3000000U
                                                     : 
                                                    ((0x108U 
                                                      == 
                                                      (0x3ffU 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 2U)))
                                                      ? 0x7000000U
                                                      : 
                                                     ((0x107U 
                                                       == 
                                                       (0x3ffU 
                                                        & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                           >> 2U)))
                                                       ? 0x2000000U
                                                       : 
                                                      ((0x106U 
                                                        == 
                                                        (0x3ffU 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                            >> 2U)))
                                                        ? 0x3000000U
                                                        : 
                                                       ((0x105U 
                                                         == 
                                                         (0x3ffU 
                                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                             >> 2U)))
                                                         ? 0x2000000U
                                                         : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_260)))))))))))));
}

void VTestHarness::_settle__TOP__660(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__660\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_312 
        = ((0x138U == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                 >> 2U))) ? 0x746e6f63U
            : ((0x137U == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                     >> 2U))) ? 0x3f010000U
                : ((0x136U == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                         >> 2U))) ? 0x8000000U
                    : ((0x135U == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                             >> 2U)))
                        ? 0x3000000U : ((0x134U == 
                                         (0x3ffU & 
                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 2U)))
                                         ? 0x100000U
                                         : ((0x133U 
                                             == (0x3ffU 
                                                 & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 2U)))
                                             ? 0U : 
                                            ((0x132U 
                                              == (0x3ffU 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 2U)))
                                              ? 0x9c000000U
                                              : ((0x131U 
                                                  == 
                                                  (0x3ffU 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                      >> 2U)))
                                                  ? 0x8000000U
                                                  : 
                                                 ((0x130U 
                                                   == 
                                                   (0x3ffU 
                                                    & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                       >> 2U)))
                                                   ? 0x3000000U
                                                   : 
                                                  ((0x12fU 
                                                    == 
                                                    (0x3ffU 
                                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 2U)))
                                                    ? 0xffff0000U
                                                    : 
                                                   ((0x12eU 
                                                     == 
                                                     (0x3ffU 
                                                      & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 2U)))
                                                     ? 0x2000000U
                                                     : 
                                                    ((0x12dU 
                                                      == 
                                                      (0x3ffU 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 2U)))
                                                      ? 0x2b010000U
                                                      : 
                                                     ((0x12cU 
                                                       == 
                                                       (0x3ffU 
                                                        & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                           >> 2U)))
                                                       ? 0x8000000U
                                                       : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_299)))))))))))));
}

void VTestHarness::_settle__TOP__663(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_settle__TOP__663\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_325 
        = ((0x145U == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                 >> 2U))) ? 0x306d6974U
            : ((0x144U == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                     >> 2U))) ? 0x642c6576U
                : ((0x143U == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                         >> 2U))) ? 0x69666973U
                    : ((0x142U == (0x3ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                             >> 2U)))
                        ? 0x1b000000U : ((0x141U == 
                                          (0x3ffU & 
                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 2U)))
                                          ? 0xd000000U
                                          : ((0x140U 
                                              == (0x3ffU 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 2U)))
                                              ? 0x3000000U
                                              : ((0x13fU 
                                                  == 
                                                  (0x3ffU 
                                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                      >> 2U)))
                                                  ? 0x30U
                                                  : 
                                                 ((0x13eU 
                                                   == 
                                                   (0x3ffU 
                                                    & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                       >> 2U)))
                                                   ? 0x30303030U
                                                   : 
                                                  ((0x13dU 
                                                    == 
                                                    (0x3ffU 
                                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 2U)))
                                                    ? 0x30303840U
                                                    : 
                                                   ((0x13cU 
                                                     == 
                                                     (0x3ffU 
                                                      & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 2U)))
                                                     ? 0x6d697464U
                                                     : 
                                                    ((0x13bU 
                                                      == 
                                                      (0x3ffU 
                                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 2U)))
                                                      ? 0x1000000U
                                                      : 
                                                     ((0x13aU 
                                                       == 
                                                       (0x3ffU 
                                                        & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                           >> 2U)))
                                                       ? 0x2000000U
                                                       : 
                                                      ((0x139U 
                                                        == 
                                                        (0x3ffU 
                                                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                            >> 2U)))
                                                        ? 0x6c6f72U
                                                        : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT___GEN_312)))))))))))));
}
