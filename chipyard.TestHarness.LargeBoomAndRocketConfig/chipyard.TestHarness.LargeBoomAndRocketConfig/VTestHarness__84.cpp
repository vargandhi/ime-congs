// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4983(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4983\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_860 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_source___05FT_15_data) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_860 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_source___05FT_15_data) 
           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_12 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_source___05FT_15_data) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_source___05FT_15_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_12 
        = ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_source___05FT_15_data) 
                         >> 3U))) & (4U >= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_source___05FT_15_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_size 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_size;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1996 
        = ((0x17U >= (0x1cU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data) 
                               << 2U))) ? (0xffffffU 
                                           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT__inflight_opcodes 
                                              >> (0x1cU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data) 
                                                     << 2U))))
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2047 
        = ((0x23U >= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data) 
                      << 2U)) ? (VL_ULL(0xfffffffff) 
                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes 
                                    >> ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data) 
                                        << 2U))) : VL_ULL(0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_2308 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_428) 
            << 7U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_422) 
                       << 6U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_416) 
                                  << 5U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_410) 
                                             << 4U) 
                                            | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_404) 
                                                << 3U) 
                                               | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_398) 
                                                   << 2U) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_392) 
                                                      << 1U) 
                                                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_386))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4984(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4984\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1097 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_sectored_hit)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_sectored_hit_addr)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__r_sectored_repl_addr));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4985(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4985\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_987 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_985) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_988 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_985));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1089 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1087) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1087));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1035 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1033) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1036 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1033));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_525 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_523) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_526 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_523)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_573 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_571) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_574 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_571)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_627 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_625) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__a_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_625)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_645 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_643) 
                 - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4986(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4986\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT__d_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_643)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__tail_collisions 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_1139 
           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT__tail);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_987 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_985) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_988 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_985));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1089 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1087) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1087));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1035 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1033) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1036 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1033));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_987 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_985) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_988 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_985));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1089 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1087) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1087));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1035 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1033) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1036 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1033));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_464 
        = ((0x8000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                        >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                            >> 0xfU)) 
                                   << 1U)) | (1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                            >> 0xfU))))) 
                       << 0xfU)) | ((0x4000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                               >> 0xeU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                >> 0xeU))))) 
                                                << 0xeU)) 
                                    | ((0x2000U & (
                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                  >> 0xdU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                   >> 0xdU))))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0xcU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0xcU))))) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0xbU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0xbU))))) 
                                                 << 0xbU)) 
                                             | ((0x400U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                   >> 0xaU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                    >> 0xaU))))) 
                                                    << 0xaU)) 
                                                | ((0x200U 
                                                    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                        >> 
                                                        ((2U 
                                                          & ((IData)(
                                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                      >> 9U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                       >> 9U))))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & ((IData)(
                                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                         >> 8U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                          >> 8U))))) 
                                                          << 8U)) 
                                                      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_456)))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4987(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4987\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_495 
        = ((0x8000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                        >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                            >> 0x2fU)) 
                                   << 1U)) | (1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                            >> 0x2fU))))) 
                       << 0xfU)) | ((0x4000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                               >> 0x2eU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                >> 0x2eU))))) 
                                                << 0xeU)) 
                                    | ((0x2000U & (
                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                  >> 0x2dU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                   >> 0x2dU))))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0x2cU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0x2cU))))) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                >> 0x2bU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                 >> 0x2bU))))) 
                                                 << 0xbU)) 
                                             | ((0x400U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                   >> 0x2aU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                    >> 0x2aU))))) 
                                                    << 0xaU)) 
                                                | ((0x200U 
                                                    & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                        >> 
                                                        ((2U 
                                                          & ((IData)(
                                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                      >> 0x29U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                       >> 0x29U))))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & ((IData)(
                                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                                         >> 0x28U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                                          >> 0x28U))))) 
                                                          << 8U)) 
                                                      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_487)))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4988(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4988\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_550 
        = (((0x80U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                               >> 0x3fU)) << 7U)) | 
            ((0x40U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                >> 0x37U)) << 6U)) 
             | ((0x20U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                   >> 0x2fU)) << 5U)) 
                | ((0x10U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                      >> 0x27U)) << 4U)) 
                   | ((8U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                      >> 0x1fU)) << 3U)) 
                      | ((4U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                         >> 0x17U)) 
                                << 2U)) | ((2U & ((IData)(
                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                           >> 0xfU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_data 
                                                            >> 7U)))))))))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_518)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_553 
        = (((0x80U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                               >> 0x3fU)) << 7U)) | 
            ((0x40U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                >> 0x37U)) << 6U)) 
             | ((0x20U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                   >> 0x2fU)) << 5U)) 
                | ((0x10U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                      >> 0x27U)) << 4U)) 
                   | ((8U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                      >> 0x1fU)) << 3U)) 
                      | ((4U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                         >> 0x17U)) 
                                << 2U)) | ((2U & ((IData)(
                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                           >> 0xfU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_data 
                                                            >> 7U)))))))))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_518)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4989(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4989\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_768 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_759) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_766))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_771 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_759) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_769))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_774 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_762) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_772))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_777 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_762) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_5_0_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_775))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1094 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1092) 
                    - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4990(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4990\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1095 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1092));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1046 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1044) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1047 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1044));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1148 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1146) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1146));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_987 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_985) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_988 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_985));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1089 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1087) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1087));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1035 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1033) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1036 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1033));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_wxd 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_ctrl_wxd));
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_959)))) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_ctrl_wfd 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_wfd;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_959)))) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_pc_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_raw_inst 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_raw_inst;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_959)))) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_pc_valid) {
            if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_rxs2) 
                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_mem) 
                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_sfence)))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_rs2 
                    = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_mem_size))
                        ? (((QData)((IData)(((0xff000000U 
                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1) 
                                                 << 0x18U)) 
                                             | ((0xff0000U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1))))))) 
                            << 0x20U) | (QData)((IData)(
                                                        ((0xff000000U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1) 
                                                             << 0x18U)) 
                                                         | ((0xff0000U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1) 
                                                                << 0x10U)) 
                                                            | ((0xff00U 
                                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1))))))))
                        : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_mem_size))
                            ? (((QData)((IData)(((0xffff0000U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1) 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0xffff0000U 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1) 
                                                                 << 0x10U)) 
                                                             | (0xffffU 
                                                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1))))))
                            : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_mem_size))
                                ? (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1)) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_rs_1)))
                                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_bypass_1)
                                    ? ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
                                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_io_cpu_resp_bits_data_word_bypass
                                        : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
                                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_wdata
                                            : ((1U 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
                                                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_wdata
                                                : VL_ULL(0))))
                                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_635))));
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1473 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_bypass_0)
            ? ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_0))
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_io_cpu_resp_bits_data_word_bypass
                : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_0))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_wdata
                    : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_0))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_wdata
                        : VL_ULL(0)))) : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_628);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1476 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_bypass_1)
            ? ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_io_cpu_resp_bits_data_word_bypass
                : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_wdata
                    : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_wdata
                        : VL_ULL(0)))) : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_635);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4991(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4991\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1936[3];
    WData/*95:0*/ __Vtemp1939[3];
    WData/*95:0*/ __Vtemp1942[3];
    WData/*95:0*/ __Vtemp1945[3];
    WData/*95:0*/ __Vtemp1948[3];
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__ram_data[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__ram_data__v0;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_949 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_corrupt) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_950 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_denied) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___T_43 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___T_37) 
           & (~ (0xffffU & (((IData)(0xfU) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                            >> 3U))));
    VL_SHIFTR_WWI(84,84,8, __Vtemp1936, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT__inflight_opcodes, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1175[0U] 
        = __Vtemp1936[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1175[1U] 
        = __Vtemp1936[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1175[2U] 
        = (0xfffffU & __Vtemp1936[2U]);
    VL_SHIFTR_WWI(84,84,8, __Vtemp1939, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1116[0U] 
        = __Vtemp1939[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1116[1U] 
        = __Vtemp1939[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1116[2U] 
        = (0xfffffU & __Vtemp1939[2U]);
    VL_SHIFTR_WWI(84,84,8, __Vtemp1942, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT__inflight_opcodes, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1116[0U] 
        = __Vtemp1942[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1116[1U] 
        = __Vtemp1942[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1116[2U] 
        = (0xfffffU & __Vtemp1942[2U]);
    VL_SHIFTR_WWI(84,84,8, __Vtemp1945, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT__inflight_opcodes, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1116[0U] 
        = __Vtemp1945[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1116[1U] 
        = __Vtemp1945[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1116[2U] 
        = (0xfffffU & __Vtemp1945[2U]);
    VL_SHIFTR_WWI(84,84,8, __Vtemp1948, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT__inflight_opcodes, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1116[0U] 
        = __Vtemp1948[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1116[1U] 
        = __Vtemp1948[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1116[2U] 
        = (0xfffffU & __Vtemp1948[2U]);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4992(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4992\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1039 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1037) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1040 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1037));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1360 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1358) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1361 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1358));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_991 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_989) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_992 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_989));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1190 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1188) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1188));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1141 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1139) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1142 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__TLMonitor__DOT___T_1139));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1039 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1037) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1040 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1037));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1360 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1358) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1361 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1358));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_991 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_989) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_992 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_989));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1190 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1188) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1188));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4993(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4993\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1141 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1139) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1142 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_outer_TLBuffer__DOT__TLMonitor__DOT___T_1139));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_victim_dirty 
        = ((3U == (8U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_victim_state_state))) 
           | ((2U != (8U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_victim_state_state))) 
              & ((1U != (8U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_victim_state_state))) 
                 & ((0U != (8U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_victim_state_state))) 
                    & ((7U == (8U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_victim_state_state))) 
                       | ((6U != (8U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_victim_state_state))) 
                          & ((5U != (8U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_victim_state_state))) 
                             & ((4U != (8U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_victim_state_state))) 
                                & (0xbU == (8U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_victim_state_state)))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83 
        = ((0x80000000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_2_0_imm_packed 
                           << 0xcU)) | ((0x7ff00000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_2_0_imm_packed 
                                                           >> 0x13U)))) 
                                            << 0x14U)) 
                                        | ((0xff000U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_2_0_imm_packed 
                                                              >> 0x13U)))) 
                                               << 0xcU)) 
                                           | (0xfffU 
                                              & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_2_0_imm_packed 
                                                 >> 8U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4994(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4994\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1988[4];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_135 
        = ((2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_129) 
                  >> 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT___T_129) 
                                   >> 1U)));
    __Vtemp1988[0U] = ((0x100U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                        ? 0U : ((0x200U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                 ? 0U : ((0x400U & 
                                          vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                          ? 0U : ((0x800U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                   ? 0U
                                                   : 
                                                  ((0x1000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0U
                                                    : 
                                                   ((0x2000U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                     ? 0U
                                                     : 
                                                    ((0x4000U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                      ? 0U
                                                      : 
                                                     ((0x8000U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                       ? 0U
                                                       : 
                                                      ((0x10000U 
                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                        ? 0U
                                                        : 
                                                       ((0x20000U 
                                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                         ? 0U
                                                         : 
                                                        ((0x40000U 
                                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                          ? 0U
                                                          : 
                                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_117[0U])))))))))));
    __Vtemp1988[1U] = ((0x100U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                        ? 0U : ((0x200U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                 ? 0U : ((0x400U & 
                                          vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                          ? 0U : ((0x800U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                   ? 0U
                                                   : 
                                                  ((0x1000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0U
                                                    : 
                                                   ((0x2000U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                     ? 0U
                                                     : 
                                                    ((0x4000U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                      ? 0U
                                                      : 
                                                     ((0x8000U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                       ? 0U
                                                       : 
                                                      ((0x10000U 
                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                        ? 0U
                                                        : 
                                                       ((0x20000U 
                                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                         ? 0U
                                                         : 
                                                        ((0x40000U 
                                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                          ? 0U
                                                          : 
                                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_117[1U])))))))))));
    __Vtemp1988[2U] = ((0x100U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                        ? 0x100U : ((0x200U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                     ? 0x200U : ((0x400U 
                                                  & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                  ? 0x400U
                                                  : 
                                                 ((0x800U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                   ? 0x800U
                                                   : 
                                                  ((0x1000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0x1000U
                                                    : 
                                                   ((0x2000U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                     ? 0x2000U
                                                     : 
                                                    ((0x4000U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                      ? 0x4000U
                                                      : 
                                                     ((0x8000U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                       ? 0x8000U
                                                       : 
                                                      ((0x10000U 
                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                        ? 0x10000U
                                                        : 
                                                       ((0x20000U 
                                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                         ? 0x20000U
                                                         : 
                                                        ((0x40000U 
                                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                          ? 0x40000U
                                                          : 
                                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_117[2U])))))))))));
    __Vtemp1988[3U] = ((0x100U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                        ? 0U : ((0x200U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                 ? 0U : ((0x400U & 
                                          vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                          ? 0U : ((0x800U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                   ? 0U
                                                   : 
                                                  ((0x1000U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0U
                                                    : 
                                                   ((0x2000U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                     ? 0U
                                                     : 
                                                    ((0x4000U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                      ? 0U
                                                      : 
                                                     ((0x8000U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                       ? 0U
                                                       : 
                                                      ((0x10000U 
                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                        ? 0U
                                                        : 
                                                       ((0x20000U 
                                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                         ? 0U
                                                         : 
                                                        ((0x40000U 
                                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                          ? 0U
                                                          : 
                                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_117[3U])))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_134[0U] 
        = ((4U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
            ? 0U : ((8U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                     ? 0U : ((0x10U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                              ? 0U : ((0x20U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                       ? 0U : ((0x40U 
                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                ? 0U
                                                : (
                                                   (0x80U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0U
                                                    : 
                                                   __Vtemp1988[0U]))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_134[1U] 
        = ((4U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
            ? 0U : ((8U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                     ? 0U : ((0x10U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                              ? 0U : ((0x20U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                       ? 0U : ((0x40U 
                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                ? 0U
                                                : (
                                                   (0x80U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0U
                                                    : 
                                                   __Vtemp1988[1U]))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_134[2U] 
        = ((4U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
            ? 4U : ((8U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                     ? 8U : ((0x10U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                              ? 0x10U : ((0x20U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                          ? 0x20U : 
                                         ((0x40U & 
                                           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                           ? 0x40U : 
                                          ((0x80U & 
                                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                            ? 0x80U
                                            : __Vtemp1988[2U]))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_134[3U] 
        = ((4U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
            ? 0U : ((8U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                     ? 0U : ((0x10U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                              ? 0U : ((0x20U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                       ? 0U : ((0x40U 
                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                ? 0U
                                                : (
                                                   (0x80U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0U
                                                    : 
                                                   __Vtemp1988[3U]))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4995(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4995\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp2039[3];
    // Body
    __Vtemp2039[0U] = ((0x10U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                        ? 0U : ((0x20U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                 ? 0U : ((0x40U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                          ? 0U : ((0x80U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                   ? 0U
                                                   : 
                                                  ((0x100U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                     ? 0U
                                                     : 
                                                    ((0x400U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                      ? 0U
                                                      : 
                                                     ((0x800U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                       ? 0U
                                                       : 
                                                      ((0x1000U 
                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                        ? 0U
                                                        : 
                                                       ((0x2000U 
                                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                         ? 0U
                                                         : 
                                                        ((0x4000U 
                                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                          ? 0U
                                                          : 
                                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_113[0U])))))))))));
    __Vtemp2039[1U] = ((0x10U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                        ? 0U : ((0x20U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                 ? 0U : ((0x40U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                          ? 0U : ((0x80U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                   ? 0U
                                                   : 
                                                  ((0x100U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                     ? 0U
                                                     : 
                                                    ((0x400U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                      ? 0U
                                                      : 
                                                     ((0x800U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                       ? 0U
                                                       : 
                                                      ((0x1000U 
                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                        ? 0U
                                                        : 
                                                       ((0x2000U 
                                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                         ? 0U
                                                         : 
                                                        ((0x4000U 
                                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                          ? 0U
                                                          : 
                                                         vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_113[1U])))))))))));
    __Vtemp2039[2U] = ((0x10U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                        ? 0x10U : ((0x20U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                    ? 0x20U : ((0x40U 
                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                ? 0x40U
                                                : (
                                                   (0x80U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0x80U
                                                    : 
                                                   ((0x100U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                     ? 0x100U
                                                     : 
                                                    ((0x200U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                      ? 0x200U
                                                      : 
                                                     ((0x400U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                       ? 0x400U
                                                       : 
                                                      ((0x800U 
                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                        ? 0x800U
                                                        : 
                                                       ((0x1000U 
                                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                         ? 0x1000U
                                                         : 
                                                        ((0x2000U 
                                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                          ? 0x2000U
                                                          : 
                                                         ((0x4000U 
                                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                           ? 0x4000U
                                                           : 
                                                          vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_113[2U])))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_130[0U] 
        = ((0x40000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[1U])
            ? 0U : ((0x80000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[1U])
                     ? 0U : ((1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                              ? 0U : ((2U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                       ? 0U : ((4U 
                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                ? 0U
                                                : (
                                                   (8U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0U
                                                    : 
                                                   __Vtemp2039[0U]))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_130[1U] 
        = ((0x40000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[1U])
            ? 0x40000000U : ((0x80000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[1U])
                              ? 0x80000000U : ((1U 
                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                ? 0U
                                                : (
                                                   (2U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                      ? 0U
                                                      : 
                                                     __Vtemp2039[1U]))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_130[2U] 
        = ((0x40000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[1U])
            ? 0U : ((0x80000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[1U])
                     ? 0U : ((1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                              ? 1U : ((2U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                       ? 2U : ((4U 
                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                ? 4U
                                                : (
                                                   (8U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list[2U])
                                                    ? 8U
                                                    : 
                                                   __Vtemp2039[2U]))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4996(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4996\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_data___05FT_15_data[0U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_data
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_1][0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_data___05FT_15_data[1U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_data
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_1][1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_data___05FT_15_data[2U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_data
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_1][2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_data___05FT_15_data[3U] 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_data
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_1][3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1324 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U]) 
                                           + ((1U & 
                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                >> 1U)) 
                                              + (1U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                    >> 2U))))) 
                                    + (3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                               >> 3U)) 
                                             + ((1U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                    >> 4U)) 
                                                + (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                      >> 5U))))))) 
                             + (7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                               >> 6U)) 
                                             + ((1U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                    >> 7U)) 
                                                + (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                      >> 8U))))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                   >> 9U)) 
                                               + ((1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                      >> 0xaU)) 
                                                  + 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                      >> 0xbU))))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                               >> 0xcU)) 
                                             + ((1U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                    >> 0xdU)) 
                                                + (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                      >> 0xeU))))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                   >> 0xfU)) 
                                               + ((1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                      >> 0x11U))))))) 
                               + (7U & ((3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                   >> 0x12U)) 
                                               + ((1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                      >> 0x13U)) 
                                                  + 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                      >> 0x14U))))) 
                                        + ((3U & ((1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                      >> 0x15U)) 
                                                  + 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                      >> 0x16U)))) 
                                           + (3U & 
                                              ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                   >> 0x17U)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                     >> 0x18U)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4997(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4997\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1372 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                  >> 0x19U)) 
                                           + ((1U & 
                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                >> 0x1aU)) 
                                              + (1U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                    >> 0x1bU))))) 
                                    + (3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                               >> 0x1cU)) 
                                             + ((1U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                    >> 0x1dU)) 
                                                + (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                                      >> 0x1eU))))))) 
                             + (7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[0U] 
                                               >> 0x1fU)) 
                                             + ((1U 
                                                 & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U]) 
                                                + (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                      >> 1U))))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                   >> 2U)) 
                                               + ((1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                      >> 3U)) 
                                                  + 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                      >> 4U))))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                               >> 5U)) 
                                             + ((1U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                    >> 6U)) 
                                                + (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                      >> 7U))))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                   >> 8U)) 
                                               + ((1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                      >> 9U)) 
                                                  + 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                      >> 0xaU))))))) 
                               + (7U & ((3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                   >> 0xbU)) 
                                               + ((1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                      >> 0xcU)) 
                                                  + 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                      >> 0xdU))))) 
                                        + ((3U & ((1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                      >> 0xeU)) 
                                                  + 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                      >> 0xfU)))) 
                                           + (3U & 
                                              ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                   >> 0x10U)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                     >> 0x11U)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4998(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4998\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1422 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                  >> 0x12U)) 
                                           + ((1U & 
                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                >> 0x13U)) 
                                              + (1U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                    >> 0x14U))))) 
                                    + (3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                               >> 0x15U)) 
                                             + ((1U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                    >> 0x16U)) 
                                                + (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                      >> 0x17U))))))) 
                             + (7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                               >> 0x18U)) 
                                             + ((1U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                    >> 0x19U)) 
                                                + (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                      >> 0x1aU))))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                   >> 0x1bU)) 
                                               + ((1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                      >> 0x1cU)) 
                                                  + 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                      >> 0x1dU))))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                               >> 0x1eU)) 
                                             + ((1U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[1U] 
                                                    >> 0x1fU)) 
                                                + (1U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U])))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                   >> 1U)) 
                                               + ((1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                      >> 2U)) 
                                                  + 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                      >> 3U))))))) 
                               + (7U & ((3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                   >> 4U)) 
                                               + ((1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                      >> 5U)) 
                                                  + 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                      >> 6U))))) 
                                        + ((3U & ((1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                      >> 7U)) 
                                                  + 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                      >> 8U)))) 
                                           + (3U & 
                                              ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                   >> 9U)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                     >> 0xaU)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4999(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4999\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1470 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                  >> 0xbU)) 
                                           + ((1U & 
                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                >> 0xcU)) 
                                              + (1U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                    >> 0xdU))))) 
                                    + (3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                               >> 0xeU)) 
                                             + ((1U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                    >> 0xfU)) 
                                                + (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                      >> 0x10U))))))) 
                             + (7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                               >> 0x11U)) 
                                             + ((1U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                    >> 0x12U)) 
                                                + (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                      >> 0x13U))))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                   >> 0x14U)) 
                                               + ((1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                      >> 0x15U)) 
                                                  + 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                      >> 0x16U))))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                               >> 0x17U)) 
                                             + ((1U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                    >> 0x18U)) 
                                                + (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                      >> 0x19U))))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                   >> 0x1aU)) 
                                               + ((1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                      >> 0x1bU)) 
                                                  + 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                      >> 0x1cU))))))) 
                               + (7U & ((3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                   >> 0x1dU)) 
                                               + ((1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                      >> 0x1eU)) 
                                                  + 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[2U] 
                                                      >> 0x1fU))))) 
                                        + ((3U & ((1U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[3U]) 
                                                  + 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[3U] 
                                                      >> 1U)))) 
                                           + (3U & 
                                              ((1U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[3U] 
                                                   >> 2U)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1170[3U] 
                                                     >> 3U)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5000(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5000\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1580 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1578) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1581 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1578));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1628 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1626) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1629 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1626));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1526 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1524) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1527 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1524));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1847 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1845) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1848 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1845));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1478 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1476) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1479 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1476));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1677 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1675) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1675));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1580 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1578) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1581 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1578));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1628 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1626) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1629 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1626));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1526 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1524) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1527 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1524));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1847 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1845) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1848 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1845));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1478 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1476) 
                 - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5001(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5001\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1479 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1476));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1677 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1675) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1675));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1580 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1578) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1581 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1578));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1628 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1626) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1629 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1626));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1526 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1524) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1527 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1524));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1847 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1845) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1848 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1845));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1478 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1476) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1479 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1476));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1677 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1675) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1675));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1478 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1476) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1479 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1476));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1526 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1524) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1527 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1524));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1424 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1422) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1425 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1422));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5002(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5002\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1745 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1743) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1746 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1743));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1376 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1374) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1377 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1374));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1575 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1573) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1573));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_4__DOT__data__DOT__data_ext_R0_data 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_3__DOT__ram
            [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_3__DOT__ram_R_0_addr_pipe_0] 
            << 6U) | ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_2__DOT__ram
                       [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_2__DOT__ram_R_0_addr_pipe_0] 
                       << 4U) | ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_1__DOT__ram
                                  [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_1__DOT__ram_R_0_addr_pipe_0] 
                                  << 2U) | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_0__DOT__ram
                                 [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0])));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_4__DOT__data__DOT__data_ext_R0_data 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_3__DOT__ram
            [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_3__DOT__ram_R_0_addr_pipe_0] 
            << 6U) | ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_2__DOT__ram
                       [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_2__DOT__ram_R_0_addr_pipe_0] 
                       << 4U) | ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_1__DOT__ram
                                  [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_1__DOT__ram_R_0_addr_pipe_0] 
                                  << 2U) | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_0__DOT__ram
                                 [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_4__DOT__data__DOT__data_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0])));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5003(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5003\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1088 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1077) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_ld));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1080 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1077) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ma_ld));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1078 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1077) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ma_st));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1084 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1077) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_pf_ld));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1082 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1077) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_pf_st));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1086 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1077) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_st));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid_no_xcpt 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_valid) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ma_ld) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ma_st) 
                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_pf_ld) 
                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_pf_st) 
                          | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_ld) 
                             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_io_cpu_s2_xcpt_ae_st))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3797 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_release_data_valid) 
           & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3776)) 
                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__release_ack_wait))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_size___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_size
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_opcode___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_opcode
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT___T_1];
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5004(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5004\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_read 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_418) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_457));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_write 
        = ((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_cmd)) 
             | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
            | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_457));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5009(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5009\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__probe_bit 
        = (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)) 
            << 1U) | ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data) 
                                    >> 3U))) & (4U 
                                                >= 
                                                (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__probe_bit 
        = (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)) 
            << 1U) | ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data) 
                                    >> 3U))) & (4U 
                                                >= 
                                                (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5010(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5010\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__probe_bit 
        = (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)) 
            << 1U) | ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data) 
                                    >> 3U))) & (4U 
                                                >= 
                                                (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__probe_bit 
        = (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)) 
            << 1U) | ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data) 
                                    >> 3U))) & (4U 
                                                >= 
                                                (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__probe_bit 
        = (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)) 
            << 1U) | ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data) 
                                    >> 3U))) & (4U 
                                                >= 
                                                (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__probe_bit 
        = (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)) 
            << 1U) | ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data) 
                                    >> 3U))) & (4U 
                                                >= 
                                                (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__probe_bit 
        = (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)) 
            << 1U) | ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data) 
                                    >> 3U))) & (4U 
                                                >= 
                                                (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__probe_bit 
        = (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)) 
            << 1U) | ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data) 
                                    >> 3U))) & (4U 
                                                >= 
                                                (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5011(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5011\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__probe_bit 
        = (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)) 
            << 1U) | ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data) 
                                    >> 3U))) & (4U 
                                                >= 
                                                (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__probe_bit 
        = (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)) 
            << 1U) | ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data) 
                                    >> 3U))) & (4U 
                                                >= 
                                                (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__probe_bit 
        = (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)) 
            << 1U) | ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data) 
                                    >> 3U))) & (4U 
                                                >= 
                                                (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__probe_bit 
        = (((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)) 
            << 1U) | ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data) 
                                    >> 3U))) & (4U 
                                                >= 
                                                (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue__DOT__ram_source___05FT_15_data)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5012(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5012\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__state 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__state;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1890 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_408) 
            << 3U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_401) 
                       << 2U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_394) 
                                  << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_387))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_992 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__r_sectored_hit)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__r_sectored_hit_addr)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT__r_sectored_repl_addr));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5014(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5014\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hits_3 
        = ((((((((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_0) 
                         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_1)) 
                        | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_2)) 
                       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_3)) 
                      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_4)) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_5)) 
                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_6)) 
                   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_7)) 
                  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_8)) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_9)) 
                | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_10)) 
               | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_11)) 
              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_12)) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_13)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_14)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_15));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ways_3 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_0)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_1)
                     ? 1U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_2)
                              ? 2U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_3)
                                       ? 3U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_4)
                                                ? 4U
                                                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_5)
                                                    ? 5U
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_6)
                                                     ? 6U
                                                     : 
                                                    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_7)
                                                      ? 7U
                                                      : 
                                                     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_8)
                                                       ? 8U
                                                       : 
                                                      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_9)
                                                        ? 9U
                                                        : 
                                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_10)
                                                         ? 0xaU
                                                         : 
                                                        ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_11)
                                                          ? 0xbU
                                                          : 
                                                         ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_12)
                                                           ? 0xcU
                                                           : 
                                                          ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_13)
                                                            ? 0xdU
                                                            : 
                                                           ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_14)
                                                             ? 0xeU
                                                             : 0xfU)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5015(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5015\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hits_0 
        = ((((((((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_0) 
                         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_1)) 
                        | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_2)) 
                       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_3)) 
                      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_4)) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_5)) 
                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_6)) 
                   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_7)) 
                  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_8)) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_9)) 
                | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_10)) 
               | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_11)) 
              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_12)) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_13)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_14)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_15));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ways_0 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_0)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_1)
                     ? 1U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_2)
                              ? 2U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_3)
                                       ? 3U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_4)
                                                ? 4U
                                                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_5)
                                                    ? 5U
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_6)
                                                     ? 6U
                                                     : 
                                                    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_7)
                                                      ? 7U
                                                      : 
                                                     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_8)
                                                       ? 8U
                                                       : 
                                                      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_9)
                                                        ? 9U
                                                        : 
                                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_10)
                                                         ? 0xaU
                                                         : 
                                                        ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_11)
                                                          ? 0xbU
                                                          : 
                                                         ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_12)
                                                           ? 0xcU
                                                           : 
                                                          ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_13)
                                                            ? 0xdU
                                                            : 
                                                           ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_14)
                                                             ? 0xeU
                                                             : 0xfU)))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hits_1 
        = ((((((((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_0) 
                         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_1)) 
                        | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_2)) 
                       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_3)) 
                      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_4)) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_5)) 
                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_6)) 
                   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_7)) 
                  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_8)) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_9)) 
                | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_10)) 
               | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_11)) 
              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_12)) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_13)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_14)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_15));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5016(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5016\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ways_1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_0)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_1)
                     ? 1U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_2)
                              ? 2U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_3)
                                       ? 3U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_4)
                                                ? 4U
                                                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_5)
                                                    ? 5U
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_6)
                                                     ? 6U
                                                     : 
                                                    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_7)
                                                      ? 7U
                                                      : 
                                                     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_8)
                                                       ? 8U
                                                       : 
                                                      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_9)
                                                        ? 9U
                                                        : 
                                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_10)
                                                         ? 0xaU
                                                         : 
                                                        ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_11)
                                                          ? 0xbU
                                                          : 
                                                         ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_12)
                                                           ? 0xcU
                                                           : 
                                                          ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_13)
                                                            ? 0xdU
                                                            : 
                                                           ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_14)
                                                             ? 0xeU
                                                             : 0xfU)))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_1624 
        = ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_15) 
               << 0xfU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_14) 
                            << 0xeU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_13) 
                                         << 0xdU) | 
                                        (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_12) 
                                          << 0xcU) 
                                         | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_11) 
                                             << 0xbU) 
                                            | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_10) 
                                                << 0xaU) 
                                               | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_9) 
                                                   << 9U) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_8) 
                                                      << 8U) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_7) 
                                                         << 7U) 
                                                        | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_6) 
                                                            << 6U) 
                                                           | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_5) 
                                                               << 5U) 
                                                              | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_4) 
                                                                  << 4U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_3) 
                                                                     << 3U) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_2) 
                                                                        << 2U) 
                                                                       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_1) 
                                                                           << 1U) 
                                                                          | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_0_0)))))))))))))))) 
             | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_15) 
                 << 0xfU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_14) 
                              << 0xeU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_13) 
                                           << 0xdU) 
                                          | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_12) 
                                              << 0xcU) 
                                             | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_11) 
                                                 << 0xbU) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_10) 
                                                    << 0xaU) 
                                                   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_9) 
                                                       << 9U) 
                                                      | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_8) 
                                                          << 8U) 
                                                         | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_7) 
                                                             << 7U) 
                                                            | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_6) 
                                                                << 6U) 
                                                               | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_5) 
                                                                   << 5U) 
                                                                  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_4) 
                                                                      << 4U) 
                                                                     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_3) 
                                                                         << 3U) 
                                                                        | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_2) 
                                                                            << 2U) 
                                                                           | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_1) 
                                                                               << 1U) 
                                                                              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_1_0))))))))))))))))) 
            | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_15) 
                << 0xfU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_14) 
                             << 0xeU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_13) 
                                          << 0xdU) 
                                         | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_12) 
                                             << 0xcU) 
                                            | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_11) 
                                                << 0xbU) 
                                               | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_10) 
                                                   << 0xaU) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_9) 
                                                      << 9U) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_8) 
                                                         << 8U) 
                                                        | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_7) 
                                                            << 7U) 
                                                           | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_6) 
                                                               << 6U) 
                                                              | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_5) 
                                                                  << 5U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_4) 
                                                                     << 4U) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_3) 
                                                                        << 3U) 
                                                                       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_2) 
                                                                           << 2U) 
                                                                          | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_1) 
                                                                              << 1U) 
                                                                             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_0))))))))))))))))) 
           | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_15) 
               << 0xfU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_14) 
                            << 0xeU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_13) 
                                         << 0xdU) | 
                                        (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_12) 
                                          << 0xcU) 
                                         | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_11) 
                                             << 0xbU) 
                                            | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_10) 
                                                << 0xaU) 
                                               | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_9) 
                                                   << 9U) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_8) 
                                                      << 8U) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_7) 
                                                         << 7U) 
                                                        | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_6) 
                                                            << 6U) 
                                                           | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_5) 
                                                               << 5U) 
                                                              | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_4) 
                                                                  << 4U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_3) 
                                                                     << 3U) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_2) 
                                                                        << 2U) 
                                                                       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_1) 
                                                                           << 1U) 
                                                                          | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_3_0)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5017(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5017\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hits_2 
        = ((((((((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_0) 
                         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_1)) 
                        | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_2)) 
                       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_3)) 
                      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_4)) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_5)) 
                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_6)) 
                   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_7)) 
                  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_8)) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_9)) 
                | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_10)) 
               | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_11)) 
              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_12)) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_13)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_14)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_15));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ways_2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_0)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_1)
                     ? 1U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_2)
                              ? 2U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_3)
                                       ? 3U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_4)
                                                ? 4U
                                                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_5)
                                                    ? 5U
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_6)
                                                     ? 6U
                                                     : 
                                                    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_7)
                                                      ? 7U
                                                      : 
                                                     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_8)
                                                       ? 8U
                                                       : 
                                                      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_9)
                                                        ? 9U
                                                        : 
                                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_10)
                                                         ? 0xaU
                                                         : 
                                                        ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_11)
                                                          ? 0xbU
                                                          : 
                                                         ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_12)
                                                           ? 0xcU
                                                           : 
                                                          ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_13)
                                                            ? 0xdU
                                                            : 
                                                           ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_hit_ohs_2_14)
                                                             ? 0xeU
                                                             : 0xfU)))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_995 
        = (0xfU & ((((((((((((((((((((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0U] 
                                      ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[1U] 
                                          << 0x1cU) 
                                         | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0U] 
                                            >> 4U))) 
                                     ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[1U] 
                                         << 0x18U) 
                                        | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0U] 
                                           >> 8U))) 
                                    ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[1U] 
                                        << 0x14U) | 
                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0U] 
                                        >> 0xcU))) 
                                   ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[1U] 
                                       << 0x10U) | 
                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0U] 
                                       >> 0x10U))) 
                                  ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[1U] 
                                      << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0U] 
                                                  >> 0x14U))) 
                                 ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[1U] 
                                     << 8U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0U] 
                                               >> 0x18U))) 
                                ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[1U] 
                                    << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0U] 
                                              >> 0x1cU))) 
                               ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[1U]) 
                              ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[2U] 
                                  << 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[1U] 
                                               >> 4U))) 
                             ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[2U] 
                                 << 0x18U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[1U] 
                                              >> 8U))) 
                            ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[2U] 
                                << 0x14U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[1U] 
                                             >> 0xcU))) 
                           ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[2U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[1U] 
                                            >> 0x10U))) 
                          ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[2U] 
                              << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[1U] 
                                          >> 0x14U))) 
                         ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[2U] 
                             << 8U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[1U] 
                                       >> 0x18U))) 
                        ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[2U] 
                            << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[1U] 
                                      >> 0x1cU))) ^ 
                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[2U]) 
                      ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[3U] 
                          << 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[2U] 
                                       >> 4U))) ^ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[3U] 
                                                    << 0x18U) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[2U] 
                                                      >> 8U))) 
                    ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[3U] 
                        << 0x14U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[2U] 
                                     >> 0xcU))) ^ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[3U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[2U] 
                                                      >> 0x10U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5018(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5018\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hits_3 
        = ((((((((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_0) 
                         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_1)) 
                        | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_2)) 
                       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_3)) 
                      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_4)) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_5)) 
                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_6)) 
                   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_7)) 
                  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_8)) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_9)) 
                | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_10)) 
               | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_11)) 
              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_12)) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_13)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_14)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_15));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ways_3 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_0)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_1)
                     ? 1U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_2)
                              ? 2U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_3)
                                       ? 3U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_4)
                                                ? 4U
                                                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_5)
                                                    ? 5U
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_6)
                                                     ? 6U
                                                     : 
                                                    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_7)
                                                      ? 7U
                                                      : 
                                                     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_8)
                                                       ? 8U
                                                       : 
                                                      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_9)
                                                        ? 9U
                                                        : 
                                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_10)
                                                         ? 0xaU
                                                         : 
                                                        ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_11)
                                                          ? 0xbU
                                                          : 
                                                         ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_12)
                                                           ? 0xcU
                                                           : 
                                                          ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_13)
                                                            ? 0xdU
                                                            : 
                                                           ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_14)
                                                             ? 0xeU
                                                             : 0xfU)))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hits_0 
        = ((((((((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_0) 
                         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_1)) 
                        | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_2)) 
                       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_3)) 
                      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_4)) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_5)) 
                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_6)) 
                   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_7)) 
                  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_8)) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_9)) 
                | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_10)) 
               | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_11)) 
              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_12)) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_13)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_14)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_15));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5019(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5019\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ways_0 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_0)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_1)
                     ? 1U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_2)
                              ? 2U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_3)
                                       ? 3U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_4)
                                                ? 4U
                                                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_5)
                                                    ? 5U
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_6)
                                                     ? 6U
                                                     : 
                                                    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_7)
                                                      ? 7U
                                                      : 
                                                     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_8)
                                                       ? 8U
                                                       : 
                                                      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_9)
                                                        ? 9U
                                                        : 
                                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_10)
                                                         ? 0xaU
                                                         : 
                                                        ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_11)
                                                          ? 0xbU
                                                          : 
                                                         ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_12)
                                                           ? 0xcU
                                                           : 
                                                          ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_13)
                                                            ? 0xdU
                                                            : 
                                                           ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_14)
                                                             ? 0xeU
                                                             : 0xfU)))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hits_1 
        = ((((((((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_0) 
                         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_1)) 
                        | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_2)) 
                       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_3)) 
                      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_4)) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_5)) 
                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_6)) 
                   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_7)) 
                  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_8)) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_9)) 
                | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_10)) 
               | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_11)) 
              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_12)) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_13)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_14)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_15));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ways_1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_0)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_1)
                     ? 1U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_2)
                              ? 2U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_3)
                                       ? 3U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_4)
                                                ? 4U
                                                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_5)
                                                    ? 5U
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_6)
                                                     ? 6U
                                                     : 
                                                    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_7)
                                                      ? 7U
                                                      : 
                                                     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_8)
                                                       ? 8U
                                                       : 
                                                      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_9)
                                                        ? 9U
                                                        : 
                                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_10)
                                                         ? 0xaU
                                                         : 
                                                        ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_11)
                                                          ? 0xbU
                                                          : 
                                                         ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_12)
                                                           ? 0xcU
                                                           : 
                                                          ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_13)
                                                            ? 0xdU
                                                            : 
                                                           ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_14)
                                                             ? 0xeU
                                                             : 0xfU)))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5020(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5020\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_1624 
        = ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_15) 
               << 0xfU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_14) 
                            << 0xeU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_13) 
                                         << 0xdU) | 
                                        (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_12) 
                                          << 0xcU) 
                                         | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_11) 
                                             << 0xbU) 
                                            | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_10) 
                                                << 0xaU) 
                                               | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_9) 
                                                   << 9U) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_8) 
                                                      << 8U) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_7) 
                                                         << 7U) 
                                                        | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_6) 
                                                            << 6U) 
                                                           | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_5) 
                                                               << 5U) 
                                                              | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_4) 
                                                                  << 4U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_3) 
                                                                     << 3U) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_2) 
                                                                        << 2U) 
                                                                       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_1) 
                                                                           << 1U) 
                                                                          | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_0_0)))))))))))))))) 
             | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_15) 
                 << 0xfU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_14) 
                              << 0xeU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_13) 
                                           << 0xdU) 
                                          | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_12) 
                                              << 0xcU) 
                                             | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_11) 
                                                 << 0xbU) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_10) 
                                                    << 0xaU) 
                                                   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_9) 
                                                       << 9U) 
                                                      | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_8) 
                                                          << 8U) 
                                                         | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_7) 
                                                             << 7U) 
                                                            | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_6) 
                                                                << 6U) 
                                                               | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_5) 
                                                                   << 5U) 
                                                                  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_4) 
                                                                      << 4U) 
                                                                     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_3) 
                                                                         << 3U) 
                                                                        | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_2) 
                                                                            << 2U) 
                                                                           | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_1) 
                                                                               << 1U) 
                                                                              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_1_0))))))))))))))))) 
            | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_15) 
                << 0xfU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_14) 
                             << 0xeU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_13) 
                                          << 0xdU) 
                                         | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_12) 
                                             << 0xcU) 
                                            | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_11) 
                                                << 0xbU) 
                                               | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_10) 
                                                   << 0xaU) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_9) 
                                                      << 9U) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_8) 
                                                         << 8U) 
                                                        | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_7) 
                                                            << 7U) 
                                                           | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_6) 
                                                               << 6U) 
                                                              | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_5) 
                                                                  << 5U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_4) 
                                                                     << 4U) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_3) 
                                                                        << 3U) 
                                                                       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_2) 
                                                                           << 2U) 
                                                                          | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_1) 
                                                                              << 1U) 
                                                                             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_0))))))))))))))))) 
           | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_15) 
               << 0xfU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_14) 
                            << 0xeU) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_13) 
                                         << 0xdU) | 
                                        (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_12) 
                                          << 0xcU) 
                                         | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_11) 
                                             << 0xbU) 
                                            | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_10) 
                                                << 0xaU) 
                                               | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_9) 
                                                   << 9U) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_8) 
                                                      << 8U) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_7) 
                                                         << 7U) 
                                                        | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_6) 
                                                            << 6U) 
                                                           | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_5) 
                                                               << 5U) 
                                                              | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_4) 
                                                                  << 4U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_3) 
                                                                     << 3U) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_2) 
                                                                        << 2U) 
                                                                       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_1) 
                                                                           << 1U) 
                                                                          | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_3_0)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5021(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5021\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hits_2 
        = ((((((((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_0) 
                         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_1)) 
                        | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_2)) 
                       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_3)) 
                      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_4)) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_5)) 
                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_6)) 
                   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_7)) 
                  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_8)) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_9)) 
                | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_10)) 
               | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_11)) 
              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_12)) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_13)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_14)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_15));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ways_2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_0)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_1)
                     ? 1U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_2)
                              ? 2U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_3)
                                       ? 3U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_4)
                                                ? 4U
                                                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_5)
                                                    ? 5U
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_6)
                                                     ? 6U
                                                     : 
                                                    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_7)
                                                      ? 7U
                                                      : 
                                                     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_8)
                                                       ? 8U
                                                       : 
                                                      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_9)
                                                        ? 9U
                                                        : 
                                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_10)
                                                         ? 0xaU
                                                         : 
                                                        ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_11)
                                                          ? 0xbU
                                                          : 
                                                         ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_12)
                                                           ? 0xcU
                                                           : 
                                                          ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_13)
                                                            ? 0xdU
                                                            : 
                                                           ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_hit_ohs_2_14)
                                                             ? 0xeU
                                                             : 0xfU)))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_995 
        = (0xfU & ((((((((((((((((((((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0U] 
                                      ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[1U] 
                                          << 0x1cU) 
                                         | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0U] 
                                            >> 4U))) 
                                     ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[1U] 
                                         << 0x18U) 
                                        | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0U] 
                                           >> 8U))) 
                                    ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[1U] 
                                        << 0x14U) | 
                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0U] 
                                        >> 0xcU))) 
                                   ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[1U] 
                                       << 0x10U) | 
                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0U] 
                                       >> 0x10U))) 
                                  ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[1U] 
                                      << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0U] 
                                                  >> 0x14U))) 
                                 ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[1U] 
                                     << 8U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0U] 
                                               >> 0x18U))) 
                                ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[1U] 
                                    << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0U] 
                                              >> 0x1cU))) 
                               ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[1U]) 
                              ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[2U] 
                                  << 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[1U] 
                                               >> 4U))) 
                             ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[2U] 
                                 << 0x18U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[1U] 
                                              >> 8U))) 
                            ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[2U] 
                                << 0x14U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[1U] 
                                             >> 0xcU))) 
                           ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[2U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[1U] 
                                            >> 0x10U))) 
                          ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[2U] 
                              << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[1U] 
                                          >> 0x14U))) 
                         ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[2U] 
                             << 8U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[1U] 
                                       >> 0x18U))) 
                        ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[2U] 
                            << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[1U] 
                                      >> 0x1cU))) ^ 
                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[2U]) 
                      ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[3U] 
                          << 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[2U] 
                                       >> 4U))) ^ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[3U] 
                                                    << 0x18U) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[2U] 
                                                      >> 8U))) 
                    ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[3U] 
                        << 0x14U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[2U] 
                                     >> 0xcU))) ^ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[3U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[2U] 
                                                      >> 0x10U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5022(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5022\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s1_ghist_old_history 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s1_ghist_old_history;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s1_ghist_new_saw_branch_taken 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s1_ghist_new_saw_branch_taken;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s2_ghist_new_saw_branch_not_taken 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s2_ghist_new_saw_branch_not_taken;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s2_ppc 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s2_ppc;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s2_tlb_resp_pf_inst 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s2_tlb_resp_pf_inst;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s2_tlb_resp_ae_inst 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s2_tlb_resp_ae_inst;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_613 
        = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_xcpt_pf_inst
           [0U] | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_xcpt_ae_inst
           [0U]);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5023(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5023\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__state 
        = vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_1__DOT__state;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1923 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1921) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1924 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1921));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1869 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1867) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1870 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1867));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_2190 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_2188) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_2191 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_2188));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1971 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1969) 
                    - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5024(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5024\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1972 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1969));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1821 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1819) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1822 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1819));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_2020 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_2018) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_2018));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1923 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1921) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1924 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1921));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1869 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1867) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1870 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1867));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2190 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2188) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2191 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2188));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1971 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1969) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1972 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1969));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1821 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1819) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1822 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1819));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2020 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2018) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2018));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1923 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1921) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1924 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1921));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1869 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1867) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1870 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1867));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5025(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5025\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2190 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2188) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2191 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2188));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1971 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1969) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1972 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1969));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_11 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_opcode___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_opcode
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_param___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_param
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_address___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_address
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_size___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_size
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_source___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_source
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1821 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1819) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1822 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1819));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2020 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2018) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_2018));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_11 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__ram_param
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__ram_mask
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__ram_opcode
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__ram_source
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__ram_size
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__ram_address
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT___T_1];
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5026(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5026\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1839 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1837) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1840 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1837));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1785 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1783) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1786 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1783));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2106 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2104) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2107 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_2104));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1887 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1885) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1888 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1885));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1737 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1735) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1738 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1735));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1936 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1934) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1934));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1839 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1837) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1840 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1837));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1785 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1783) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1786 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1783));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2106 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2104) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2107 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2104));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1887 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1885) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1888 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1885));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1737 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1735) 
                    - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5027(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5027\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1738 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1735));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1936 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1934) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1934));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1839 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1837) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1840 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1837));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1785 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1783) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1786 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1783));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_2106 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_2104) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_2107 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_2104));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1887 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1885) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1888 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1885));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_760 
        = ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_761)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_821)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_11 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__ram_opcode___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__ram_opcode
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__ram_param___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__ram_param
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__ram_source___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__ram_source
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__ram_address___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__ram_address
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__ram_size___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__ram_size
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1737 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1735) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1738 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1735));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5028(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5028\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1936 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1934) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1934));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_11 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_param
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_mask
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_opcode
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_source
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_size
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address
        [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT___T_1];
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5029(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5029\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext_RW0_wdata[0U] 
        = (IData)((((QData)((IData)(((0x400U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
                                      ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24
                                      : 0U))) << 0x22U) 
                   | (((QData)((IData)(((0x400U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
                                         ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24
                                         : 0U))) << 0x11U) 
                      | (QData)((IData)(((0x400U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
                                          ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24
                                          : 0U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext_RW0_wdata[1U] 
        = ((0xfff80000U & (((0x400U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
                             ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24
                             : 0U) << 0x13U)) | (IData)(
                                                        ((((QData)((IData)(
                                                                           ((0x400U 
                                                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
                                                                             ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24
                                                                             : 0U))) 
                                                           << 0x22U) 
                                                          | (((QData)((IData)(
                                                                              ((0x400U 
                                                                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
                                                                                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24
                                                                                : 0U))) 
                                                              << 0x11U) 
                                                             | (QData)((IData)(
                                                                               ((0x400U 
                                                                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
                                                                                 ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24
                                                                                 : 0U))))) 
                                                         >> 0x20U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext_RW0_wdata[2U] 
        = ((0xffe00000U & (((0x400U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
                             ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24
                             : 0U) << 0x15U)) | ((0xfffffff0U 
                                                  & (((0x400U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
                                                       ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24
                                                       : 0U) 
                                                     << 4U)) 
                                                 | (0x7ffffU 
                                                    & (((0x400U 
                                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
                                                         ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24
                                                         : 0U) 
                                                       >> 0xdU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext_RW0_wdata[3U] 
        = ((0xff800000U & (((0x400U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
                             ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24
                             : 0U) << 0x17U)) | ((0xffffffc0U 
                                                  & (((0x400U 
                                                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
                                                       ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24
                                                       : 0U) 
                                                     << 6U)) 
                                                 | (0x1fffffU 
                                                    & (((0x400U 
                                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
                                                         ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24
                                                         : 0U) 
                                                       >> 0xbU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext_RW0_wdata[4U] 
        = (0x7fffffU & (((0x400U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT__wipeCount))
                          ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__directory__DOT___T_24
                          : 0U) >> 9U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5030(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5030\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_1166 
        = ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                      >> ((2U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
                                 >> 0x16U)) | (1U & 
                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
                                                >> 0x17U)))) 
                     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                           >> ((2U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
                                                   >> 0x15U)) 
                                               | (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
                                                     >> 0x16U)))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                            >> ((2U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
                                                    >> 0x14U)) 
                                                | (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
                                                      >> 0x15U)))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                               >> (
                                                   (2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
                                                       >> 0x13U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
                                                         >> 0x14U)))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                               >> (
                                                   (2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
                                                       >> 0x12U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
                                                         >> 0x13U)))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                  >> 
                                                  ((2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
                                                       >> 0x11U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
                                                         >> 0x12U)))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                >> 
                                                ((2U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
                                                     >> 0x10U)) 
                                                 | (1U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
                                                       >> 0x11U)))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                   >> 
                                                   ((2U 
                                                     & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
                                                        >> 0xfU)) 
                                                    | (1U 
                                                       & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
                                                          >> 0x10U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5031(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5031\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_1197 
        = ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                      >> ((2U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                 >> 0x16U)) | (1U & 
                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                                >> 0x17U)))) 
                     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                           >> ((2U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                   >> 0x15U)) 
                                               | (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                                     >> 0x16U)))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                            >> ((2U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                    >> 0x14U)) 
                                                | (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                                      >> 0x15U)))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                               >> (
                                                   (2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                       >> 0x13U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                                         >> 0x14U)))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                               >> (
                                                   (2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                       >> 0x12U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                                         >> 0x13U)))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                  >> 
                                                  ((2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                       >> 0x11U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                                         >> 0x12U)))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                >> 
                                                ((2U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                     >> 0x10U)) 
                                                 | (1U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                                       >> 0x11U)))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                   >> 
                                                   ((2U 
                                                     & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                        >> 0xfU)) 
                                                    | (1U 
                                                       & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                                          >> 0x10U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5032(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5032\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_1229 
        = ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                      >> ((2U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                 >> 0x16U)) | (1U & 
                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                                >> 0x17U)))) 
                     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                           >> ((2U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                   >> 0x15U)) 
                                               | (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                                     >> 0x16U)))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                            >> ((2U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                    >> 0x14U)) 
                                                | (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                                      >> 0x15U)))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                               >> (
                                                   (2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                       >> 0x13U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                                         >> 0x14U)))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                               >> (
                                                   (2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                       >> 0x12U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                                         >> 0x13U)))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                  >> 
                                                  ((2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                       >> 0x11U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                                         >> 0x12U)))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                >> 
                                                ((2U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                     >> 0x10U)) 
                                                 | (1U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                                       >> 0x11U)))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                   >> 
                                                   ((2U 
                                                     & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                        >> 0xfU)) 
                                                    | (1U 
                                                       & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                                          >> 0x10U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5033(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5033\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_1260 
        = ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                      >> ((2U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                 >> 0x16U)) | (1U & 
                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                                >> 0x17U)))) 
                     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                           >> ((2U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                                   >> 0x15U)) 
                                               | (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                                     >> 0x16U)))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                            >> ((2U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                                    >> 0x14U)) 
                                                | (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                                      >> 0x15U)))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                               >> (
                                                   (2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                                       >> 0x13U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                                         >> 0x14U)))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                               >> (
                                                   (2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                                       >> 0x12U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                                         >> 0x13U)))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                  >> 
                                                  ((2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                                       >> 0x11U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                                         >> 0x12U)))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                >> 
                                                ((2U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                                     >> 0x10U)) 
                                                 | (1U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                                       >> 0x11U)))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                   >> 
                                                   ((2U 
                                                     & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                                        >> 0xfU)) 
                                                    | (1U 
                                                       & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                                          >> 0x10U))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5034(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5034\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_1151 
        = ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                      >> ((2U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
                                 >> 6U)) | (1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
                                                  >> 7U)))) 
                     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                           >> ((2U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
                                                   >> 5U)) 
                                               | (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
                                                     >> 6U)))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                            >> ((2U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
                                                    >> 4U)) 
                                                | (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
                                                      >> 5U)))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                               >> (
                                                   (2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
                                                       >> 3U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
                                                         >> 4U)))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                               >> (
                                                   (2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
                                                         >> 3U)))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                  >> 
                                                  ((2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
                                                       >> 1U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
                                                         >> 2U)))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                >> 
                                                ((2U 
                                                  & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U]) 
                                                 | (1U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U] 
                                                       >> 1U)))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                   >> 
                                                   ((2U 
                                                     & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
                                                        << 1U)) 
                                                    | (1U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U])))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5035(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5035\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_1182 
        = ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                      >> ((2U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                 >> 6U)) | (1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                                  >> 7U)))) 
                     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                           >> ((2U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                   >> 5U)) 
                                               | (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                                     >> 6U)))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                            >> ((2U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                    >> 4U)) 
                                                | (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                                      >> 5U)))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                               >> (
                                                   (2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                       >> 3U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                                         >> 4U)))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                               >> (
                                                   (2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                                         >> 3U)))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                  >> 
                                                  ((2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                       >> 1U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                                         >> 2U)))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                >> 
                                                ((2U 
                                                  & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U]) 
                                                 | (1U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U] 
                                                       >> 1U)))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                   >> 
                                                   ((2U 
                                                     & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                        << 1U)) 
                                                    | (1U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U])))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5036(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5036\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_1214 
        = ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                      >> ((2U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                 >> 6U)) | (1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                                  >> 7U)))) 
                     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                           >> ((2U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                   >> 5U)) 
                                               | (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                                     >> 6U)))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                            >> ((2U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                    >> 4U)) 
                                                | (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                                      >> 5U)))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                               >> (
                                                   (2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                       >> 3U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                                         >> 4U)))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                               >> (
                                                   (2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                                         >> 3U)))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                  >> 
                                                  ((2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                       >> 1U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                                         >> 2U)))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                >> 
                                                ((2U 
                                                  & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U]) 
                                                 | (1U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U] 
                                                       >> 1U)))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                   >> 
                                                   ((2U 
                                                     & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                        << 1U)) 
                                                    | (1U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U])))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5037(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5037\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_1245 
        = ((0x80U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                      >> ((2U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                 >> 6U)) | (1U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                                  >> 7U)))) 
                     << 7U)) | ((0x40U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                           >> ((2U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                                   >> 5U)) 
                                               | (1U 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                                     >> 6U)))) 
                                          << 6U)) | 
                                ((0x20U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                            >> ((2U 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                                    >> 4U)) 
                                                | (1U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                                      >> 5U)))) 
                                           << 5U)) 
                                 | ((0x10U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                               >> (
                                                   (2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                                       >> 3U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                                         >> 4U)))) 
                                              << 4U)) 
                                    | ((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                               >> (
                                                   (2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                                         >> 3U)))) 
                                              << 3U)) 
                                       | ((4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                  >> 
                                                  ((2U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                                       >> 1U)) 
                                                   | (1U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                                         >> 2U)))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                >> 
                                                ((2U 
                                                  & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U]) 
                                                 | (1U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U] 
                                                       >> 1U)))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___GEN_3) 
                                                   >> 
                                                   ((2U 
                                                     & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                                        << 1U)) 
                                                    | (1U 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U])))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5038(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5038\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp2058[4];
    WData/*127:0*/ __Vtemp2061[4];
    WData/*127:0*/ __Vtemp2062[4];
    // Body
    __Vtemp2058[0U] = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_66[0U] 
                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U]);
    __Vtemp2058[1U] = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_66[1U] 
                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U]);
    __Vtemp2058[2U] = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_66[2U] 
                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U]);
    __Vtemp2058[3U] = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_66[3U] 
                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U]);
    __Vtemp2061[0U] = ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_param))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U]
                        : (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[0U]));
    __Vtemp2061[1U] = ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_param))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U]
                        : (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[1U]));
    __Vtemp2061[2U] = ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_param))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U]
                        : (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[2U]));
    __Vtemp2061[3U] = ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_param))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U]
                        : (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_rdata[3U]));
    VL_ADD_W(4, __Vtemp2062, __Vtemp2058, __Vtemp2061);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT__sum[0U] 
        = __Vtemp2062[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT__sum[1U] 
        = __Vtemp2062[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT__sum[2U] 
        = __Vtemp2062[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT__sum[3U] 
        = __Vtemp2062[3U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT___T_212 
        = (((0x8000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                        >> 0x10U)) | ((0x4000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                                  >> 9U)) 
                                      | ((0x2000U & 
                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                           >> 2U)) 
                                         | ((0x1000U 
                                             & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[3U] 
                                                << 5U)) 
                                            | ((0x800U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                   >> 0x14U)) 
                                               | ((0x400U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                      >> 0xdU)) 
                                                  | ((0x200U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                         >> 6U)) 
                                                     | ((0x100U 
                                                         & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[2U] 
                                                            << 1U)) 
                                                        | ((0x80U 
                                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                               >> 0x18U)) 
                                                           | ((0x40U 
                                                               & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                                  >> 0x11U)) 
                                                              | ((0x20U 
                                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                                     >> 0xaU)) 
                                                                 | ((0x10U 
                                                                     & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[1U] 
                                                                        >> 3U)) 
                                                                    | ((8U 
                                                                        & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
                                                                           >> 0x1cU)) 
                                                                       | ((4U 
                                                                           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
                                                                              >> 0x15U)) 
                                                                          | ((2U 
                                                                              & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
                                                                                >> 0xeU)) 
                                                                             | (1U 
                                                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_pdata_data[0U] 
                                                                                >> 7U))))))))))))))))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__atomics__DOT__signBit));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5039(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5039\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0][0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0[0U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0][1U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0[1U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0][2U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0[2U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0][3U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0[3U];
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0][0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0[0U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0][1U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0[1U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0][2U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0[2U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0][3U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0[3U];
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_mask__v0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_mask[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_mask__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_mask__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_corrupt__v0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_corrupt__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_corrupt__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_corrupt__v0) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_corrupt__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_corrupt__v0;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_943 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_941) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_944 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_941));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_895 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_893) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_896 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_893));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_997 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_995) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___T_995));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1002 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1000) 
                    - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5040(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5040\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1003 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1000));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_954 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_952) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_955 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_952));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1056 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1054) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1054));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_1002 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_1000) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_1003 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_1000));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_23 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_22));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_954 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_952) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_955 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_952));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_1056 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_1054) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___T_1054));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___GEN_44 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor__DOT___GEN_44 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5041(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5041\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__TLMonitor__DOT___GEN_44 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_196 
        = ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))
            ? 0U : (0xffU & (~ (0x7fffffU & (((IData)(0xfffU) 
                                              << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                                             >> 4U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_15 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_9) 
           & (~ (0xffffU & (((IData)(0xfU) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                            >> 3U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_13 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___T_9) 
                  == (1U & (~ (0xffffU & (((IData)(0xfU) 
                                           << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                                          >> 3U))))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data) 
                    >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1_io_enq_ready 
        = (1U & ((0xfU & (0xfU >> (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_3)))) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT__maybe_full))));
}
