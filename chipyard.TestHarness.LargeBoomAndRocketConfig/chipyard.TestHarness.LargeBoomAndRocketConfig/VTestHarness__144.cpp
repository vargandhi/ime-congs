// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8295(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8295\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_354 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_0_resp_bits_homogeneous)) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_valid_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_472 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0)
                    : ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_84)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_473 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1)
                    : ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_85)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_474 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2)
                    : ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_86)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_475 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3)
                    : ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_87)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_valid_3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_482 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_0)
                    : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_106)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_0)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_0))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8296(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8296\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_483 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1)
                    : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_107)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_484 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2)
                    : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_108)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_485 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3)
                    : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_109)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_1_valid_3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_492 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0)
                    : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_128)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_493 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1)
                    : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_129)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_494 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2)
                    : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_130)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_2));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8297(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8297\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_495 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3)
                    : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_131)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_2_valid_3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_502 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0)
                    : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_150)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_503 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1)
                    : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_151)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_504 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2)
                    : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_152)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_505 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3)
                    : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_153)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_3_valid_3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_512 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_172)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8298(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8298\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_513 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_173)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_514 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_174)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_515 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3)
                    : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_175)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_4_valid_3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_522 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0)
                    : ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_194)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_523 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1)
                    : ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_195)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_524 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2)
                    : ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_196)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_2));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8299(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8299\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_525 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3)
                    : ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_197)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_5_valid_3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_532 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0)
                    : ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_216)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_533 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1)
                    : ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_217)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_534 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2)
                    : ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_218)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_535 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3)
                    : ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_219)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_6_valid_3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_542 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0)
                    : ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_238)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8300(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8300\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_543 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1)
                    : ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_239)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_544 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2)
                    : ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_240)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_545 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                ? ((2U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3)
                    : ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_1097))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_241)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3)))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__sectored_entries_7_valid_3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_858 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
            >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                               >> 0xcU)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
                                             ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                                                 ? 
                                                ((2U 
                                                  > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                                                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_66)
                                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_valid_0))
                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_valid_0))
                                             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_valid_0))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_862 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
            >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                               >> 0xcU)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
                                             ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                                                 ? 
                                                ((2U 
                                                  > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                                                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_70)
                                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_valid_0))
                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_valid_0))
                                             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_valid_0))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8301(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8301\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_866 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
            >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                               >> 0xcU)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
                                             ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                                                 ? 
                                                ((2U 
                                                  > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                                                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_74)
                                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_valid_0))
                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_valid_0))
                                             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_valid_0))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_870 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
            >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                               >> 0xcU)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
                                             ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)
                                                 ? 
                                                ((2U 
                                                  > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                                                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_78)
                                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_valid_0))
                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_valid_0))
                                             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_valid_0))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_354 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw_io_requestor_1_resp_bits_homogeneous)) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__ae_array 
        = (0x3fffU & (((0U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1909)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__eff_array)
                        : 0U) | (((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_cmd)) 
                                  | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_tlb_req_cmd)))
                                  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__c_array))
                                  : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1031 
        = (((QData)((IData)((0xfffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_ppn)))) 
            << 0xeU) | (QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_u) 
                                         << 0xdU) | 
                                        ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g) 
                                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_v)) 
                                          << 0xcU) 
                                         | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__resp_ae) 
                                             << 0xbU) 
                                            | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1000) 
                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_w)) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_d)) 
                                                << 0xaU) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1000) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_x)) 
                                                   << 9U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1000) 
                                                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_r)) 
                                                      << 8U) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__prot_w) 
                                                         << 7U) 
                                                        | ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__legal_address) 
                                                               & ((VL_ULL(0) 
                                                                   == 
                                                                   (VL_ULL(0x86000000) 
                                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr)) 
                                                                  | (VL_ULL(0) 
                                                                     == 
                                                                     (VL_ULL(0x80000000) 
                                                                      & (VL_ULL(0x80000000) 
                                                                         ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_physaddr))))) 
                                                              & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__deny_access_to_debug))) 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1460)
                                                                 ? 
                                                                ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1510) 
                                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_x) 
                                                                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1462)))
                                                                 : 
                                                                ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1264)
                                                                  ? 
                                                                 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1314) 
                                                                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_x) 
                                                                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1266)))
                                                                  : 
                                                                 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1068)
                                                                   ? 
                                                                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1118) 
                                                                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_x) 
                                                                      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_1070)))
                                                                   : 
                                                                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_872)
                                                                    ? 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_922) 
                                                                    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_x) 
                                                                       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_874)))
                                                                    : 
                                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_676)
                                                                     ? 
                                                                    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_726) 
                                                                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_x) 
                                                                        | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_678)))
                                                                     : 
                                                                    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_480)
                                                                      ? 
                                                                     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_530) 
                                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_x) 
                                                                         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_482)))
                                                                      : 
                                                                     ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_284)
                                                                       ? 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_334) 
                                                                       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_x) 
                                                                          | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_286)))
                                                                       : 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_88)
                                                                        ? 
                                                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_138) 
                                                                        & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_x) 
                                                                           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_90)))
                                                                        : 
                                                                       (1U 
                                                                        < 
                                                                        (3U 
                                                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__mpu_priv)))))))))))) 
                                                            << 6U) 
                                                           | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__prot_r) 
                                                               << 5U) 
                                                              | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_238) 
                                                                  << 4U) 
                                                                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_238) 
                                                                     << 3U) 
                                                                    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__prot_eff) 
                                                                        << 2U) 
                                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__cacheable) 
                                                                          << 1U))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8302(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8302\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___GEN_99 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_req_dest)) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___GEN_96)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___GEN_100 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_req_dest) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___GEN_97));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__l2_tlb_ram_RW0_en 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__s0_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_196));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_105 
        = (((((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd)) 
              | (9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd))) 
             | (0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd))) 
            | (0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd))) 
           | (((((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd)) 
                 | (0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd))) 
                | (0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd))) 
               | (0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd))) 
              | (0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_108 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd)) 
           | (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1193 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT__inflight) 
                  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1101)
                      ? 1U : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1123)
                                         ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1196 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT__inflight_opcodes) 
                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1101)
                        ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1101)
                            ? 9U : 0U) : 0U)) & (~ 
                                                 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1123)
                                                   ? 0xfU
                                                   : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8303(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8303\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1199 
        = (0xffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT__inflight_sizes) 
                     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1101)
                         ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1101)
                             ? 0xdU : 0U) : 0U)) & 
                    (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1123)
                         ? 0xffU : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_51 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_36) 
           | (7U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[5U] 
                                            >> 0x13U))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_49))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_54 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_36) 
           | (7U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[5U] 
                                            >> 0x13U))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_52))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_57 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_39) 
           | (7U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[5U] 
                                            >> 0x13U))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_55))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_60 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_39) 
           | (7U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[5U] 
                                            >> 0x13U))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_58))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_63 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_42) 
           | (7U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[5U] 
                                            >> 0x13U))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_61))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8304(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8304\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_66 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_42) 
           | (7U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[5U] 
                                            >> 0x13U))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_64))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_69 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_45) 
           | (7U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[5U] 
                                            >> 0x13U))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_67))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_72 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_45) 
           | (7U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[5U] 
                                            >> 0x13U))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_70))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT__a_set 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1930)
            ? (3U & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache_auto_out_a_bits_source)))
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_nack 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_probe)
                  ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_prb_ack_data) 
                      | ((0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_probe_state_state)) 
                         | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__releaseDone)))) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___GEN_143))
                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___GEN_143)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1336 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__blocked) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_dmem_req_valid)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcacheArb_io_requestor_1_s2_nack));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_imem_flush_icache 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_valid) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_ctrl_fence_i)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcacheArb_io_requestor_1_s2_nack)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__replay_wb_common 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcacheArb_io_requestor_1_s2_nack) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_replay));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT___T_10 
        = (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__nIC) 
                 - (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__nICReady)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_wrong_npc 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_pc_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_931)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_934));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8305(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8305\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_1104 
        = (1U & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_799) 
                   | (~ (((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_1078) 
                                  | (0x3baU == (0xfffU 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                                   >> 0x14U)))) 
                                 | (0x3bbU == (0xfffU 
                                               & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                                  >> 0x14U)))) 
                                | (0x3bcU == (0xfffU 
                                              & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                                 >> 0x14U)))) 
                               | (0x3bdU == (0xfffU 
                                             & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                                >> 0x14U)))) 
                              | (0x3beU == (0xfffU 
                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                               >> 0x14U)))) 
                             | (0x3bfU == (0xfffU & 
                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                            >> 0x14U)))) 
                            | (0x7c1U == (0xfffU & 
                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                           >> 0x14U)))) 
                           | (0xf12U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                                   >> 0x14U)))) 
                          | (0xf11U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                                  >> 0x14U)))) 
                         | (0xf13U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                                 >> 0x14U)))))) 
                  | ((0x180U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                           >> 0x14U))) 
                     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_766)))) 
                 | ((((0xc00U <= (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                            >> 0x14U))) 
                      & (0xc20U > (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                             >> 0x14U)))) 
                     | ((0xc80U <= (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                              >> 0x14U))) 
                        & (0xca0U > (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                               >> 0x14U))))) 
                    & (~ (((1U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
                           | ((7U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mcounteren) 
                              >> (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                           >> 0x14U)))) 
                          & ((1U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
                             | ((7U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_scounteren) 
                                >> (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf_io_inst_0_bits_raw 
                                             >> 0x14U)))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8306(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8306\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_alu_fn 
        = (((((((0x2010U == (0x2006054U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                | (0x2010U == (0x6034U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
               | (0x4040U == (0x4058U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
              | (0x40000030U == (0x40003034U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
             | (0x40001010U == (0x40003054U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
            << 3U) | (((((((0x2010U == (0x2002054U 
                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                           | (0x2010U == (0x2034U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                          | (0x4010U == (0x40004054U 
                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                         | (0x4010U == (0x5054U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                        | (0x4040U == (0x4058U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                       << 2U) | (((((((((0x40U == (0x4054U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                                        | (0x2040U 
                                           == (0x2058U 
                                               & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                                       | (0x3010U == 
                                          (0x3054U 
                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                                      | (0x6010U == 
                                         (0x6054U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                                     | (0x2002030U 
                                        == (0x2002074U 
                                            & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                                    | (0x40000030U 
                                       == (0x40003034U 
                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                                   | (0x40001010U == 
                                      (0x40001054U 
                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                                  << 1U) | ((((0x1010U 
                                               == (0x3054U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                                              | (0x1040U 
                                                 == 
                                                 (0x1058U 
                                                  & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                                             | (0x7000U 
                                                == 
                                                (0x7044U 
                                                 & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                                            | (0x2001030U 
                                               == (0x2001074U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8307(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8307\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___GEN_1 
        = (((8U == (0x2058U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
            & (0U == (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits 
                              >> 0x14U)))) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_reg_pause));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___GEN_2 
        = (((8U == (0x2058U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
            | ((0x2008U == (0x6048U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
               & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits 
                  >> 0x1aU))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_mem_busy) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_reg_fence)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_mem_cmd 
        = (((0x40U == (0x40U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
            << 4U) | (((8U == (0x18000008U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                       << 3U) | ((((((0x40U == (0x40U 
                                                & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                                     | (0x8000008U 
                                        == (0x8000008U 
                                            & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                                    | (0x10000008U 
                                       == (0x10000008U 
                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                                   | (0x80000008U == 
                                      (0x80000008U 
                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                                  << 2U) | ((((0x10000008U 
                                               == (0x10000008U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                                              | (0x40000008U 
                                                 == 
                                                 (0x40000008U 
                                                  & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                                             << 1U) 
                                            | (((0x20U 
                                                 == 
                                                 (0x68U 
                                                  & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                                                | (0x18000020U 
                                                   == 
                                                   (0x18000020U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                                               | (0x20000020U 
                                                  == 
                                                  (0x20000020U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8308(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8308\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_98 
        = ((((((((((((((((((3U == (0x207fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                           | (3U == (0x106fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                          | (0xfU == (0x607fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                         | (0x13U == (0x7077U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                        | (0x17U == (0x5fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                       | (0x33U == (0xfc00007fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                      | (0x33U == (0xbe007077U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                     | (0x43U == (0x4000073U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                    | (0x53U == (0xe400007fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                   | (0x63U == (0x707bU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                  | (0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                 | (0x73U == (0xffefffffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                | (0x1013U == (0xfc00305fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
               | (0x101bU == (0xfe00305fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
              | (0x2003U == (0x605bU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
             | (0x2013U == (0x207fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
            | (0x202fU == (0x1800607fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
           | (0x2073U == (0x207fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8309(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8309\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_mem 
        = ((((((((3U == (0x405fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                 | (3U == (0x207fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                | (3U == (0x107fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
               | (0x2003U == (0x605bU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
              | (0x202fU == (0x1800607fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
             | (0x800202fU == (0xe800607fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
            | (0x1000202fU == (0xf9f0607fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
           | (0x12000073U == (0xfe007fffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_fp 
        = ((4U == (0x5cU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
           | (0x40U == (0x60U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_wen 
        = (((0U == (0x80000020U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
            | (0U == (0x30U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
           | (0x10000000U == (0x10000020U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren1 
        = (((0U == (0x80000004U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
            | (0U == (0x10000004U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
           | (0x40U == (0x50U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fp_decoder_io_sigs_ren2 
        = (((0U == (0x40000004U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
            | (0x20U == (0x20U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
           | (0x40U == (0x50U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8310(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8310\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_csr 
        = (((((((0x70U == (0x10000070U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                | (0x1070U == (0x1070U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
               | (0x2070U == (0x2070U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
              | (0x10000030U == (0x12000034U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
             | (0x60000050U == (0xe0000050U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
            << 2U) | (((0x2070U == (0x2070U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                       << 1U) | (0x1070U == (0x1070U 
                                             & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_wxd 
        = (((((((0U == (0x64U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                | (0x10U == (0x50U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
               | (0x24U == (0x2024U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
              | (0x28U == (0x28U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
             | (0x1030U == (0x1030U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
            | (0x2030U == (0x2030U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
           | (0x80000010U == (0x90000010U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_rxs2 
        = ((((0x20U == (0x64U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
             | (0x20U == (0x34U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
            | (0x2008U == (0x2048U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
           | (0x2000020U == (0x42003024U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8311(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8311\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*287:0*/ __Vtemp9811[9];
    WData/*287:0*/ __Vtemp9812[9];
    WData/*287:0*/ __Vtemp9819[9];
    WData/*287:0*/ __Vtemp9820[9];
    WData/*287:0*/ __Vtemp9830[9];
    WData/*287:0*/ __Vtemp9831[9];
    WData/*287:0*/ __Vtemp9838[9];
    WData/*287:0*/ __Vtemp9839[9];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_rxs1 
        = (((((0U == (0x44U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
              | (0x20U == (0x4024U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
             | (0x20U == (0x38U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
            | (0x2000U == (0x2050U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
           | (0x90000010U == (0x90000034U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
    VL_EXTEND_WI(259,4, __Vtemp9811, ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1134)
                                       ? (1U | (0xeU 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                                   >> 0x13U)))
                                       : 0U));
    VL_SHIFTL_WWI(259,259,8, __Vtemp9812, __Vtemp9811, 
                  (0x7cU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                            >> 6U)));
    __Vtemp9819[0U] = 0xfU;
    __Vtemp9819[1U] = 0U;
    __Vtemp9819[2U] = 0U;
    __Vtemp9819[3U] = 0U;
    __Vtemp9819[4U] = 0U;
    __Vtemp9819[5U] = 0U;
    __Vtemp9819[6U] = 0U;
    __Vtemp9819[7U] = 0U;
    __Vtemp9819[8U] = 0U;
    VL_SHIFTL_WWI(271,271,8, __Vtemp9820, __Vtemp9819, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1229[0U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1134)
                ? __Vtemp9812[0U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1156)
                                                ? __Vtemp9820[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1229[1U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1134)
                ? __Vtemp9812[1U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1156)
                                                ? __Vtemp9820[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1229[2U] 
        = (0xfffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT__inflight_opcodes[2U] 
                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1134)
                            ? __Vtemp9812[2U] : 0U)) 
                       & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1156)
                              ? __Vtemp9820[2U] : 0U))));
    VL_EXTEND_WI(260,5, __Vtemp9830, ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1134)
                                       ? (1U | (0x1eU 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                                   >> 0xcU)))
                                       : 0U));
    VL_SHIFTL_WWI(260,260,8, __Vtemp9831, __Vtemp9830, 
                  (0xf8U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                            >> 5U)));
    __Vtemp9838[0U] = 0xffU;
    __Vtemp9838[1U] = 0U;
    __Vtemp9838[2U] = 0U;
    __Vtemp9838[3U] = 0U;
    __Vtemp9838[4U] = 0U;
    __Vtemp9838[5U] = 0U;
    __Vtemp9838[6U] = 0U;
    __Vtemp9838[7U] = 0U;
    __Vtemp9838[8U] = 0U;
    VL_SHIFTL_WWI(271,271,8, __Vtemp9839, __Vtemp9838, 
                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data) 
                   << 3U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1232[0U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[0U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1134)
                ? __Vtemp9831[0U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1156)
                                                ? __Vtemp9839[0U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1232[1U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[1U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1134)
                ? __Vtemp9831[1U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1156)
                                                ? __Vtemp9839[1U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1232[2U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[2U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1134)
                ? __Vtemp9831[2U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1156)
                                                ? __Vtemp9839[2U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1232[3U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[3U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1134)
                ? __Vtemp9831[3U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1156)
                                                ? __Vtemp9839[3U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1232[4U] 
        = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[4U] 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1134)
                ? __Vtemp9831[4U] : 0U)) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1156)
                                                ? __Vtemp9839[4U]
                                                : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1232[5U] 
        = (0xffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT__inflight_sizes[5U] 
                     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1134)
                         ? __Vtemp9831[5U] : 0U)) & 
                    (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1156)
                         ? __Vtemp9839[5U] : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8312(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8312\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_44 
        = ((5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                         >> 0x14U))) ? 2U : ((4U == 
                                              (7U & 
                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                                >> 0x14U)))
                                              ? 1U : 
                                             ((3U == 
                                               (7U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                                   >> 0x14U)))
                                               ? 1U
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                                       >> 0x14U)))
                                                   ? 1U
                                                   : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1176 
        = ((0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                     >> 8U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_12 
        = ((0U == (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                         >> 0xbU))) & (4U >= (7U & 
                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                               >> 8U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_15 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1134)
            ? ((IData)(1U) << (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                        >> 8U))) : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_391 
        = ((0xcU >= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                             >> 0xdU))) & (0U == (0x7ffff000U 
                                                  & (0x3000U 
                                                     ^ 
                                                     ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                                       << 0x17U) 
                                                      | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[2U] 
                                                         >> 9U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_429 
        = (((((0U == (0x7ffff000U & (0x2010000U ^ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                                    << 0x17U) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[2U] 
                                                      >> 9U))))) 
              | (0U == (0x7ffff000U & (0x54000000U 
                                       ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                           << 0x17U) 
                                          | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[2U] 
                                             >> 9U)))))) 
             | (0U == (0x7c000000U & (0xc000000U ^ 
                                      ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                        << 0x17U) | 
                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[2U] 
                                        >> 9U)))))) 
            | (0U == (0x7fff0000U & (0x2000000U ^ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                                    << 0x17U) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[2U] 
                                                      >> 9U)))))) 
           | (0U == (0x7ffff000U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                     << 0x17U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[2U] 
                                                  >> 9U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8313(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8313\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1178 
        = ((0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                    >> 0xdU)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_49 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[2U] 
                     >> 0xbU)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[2U] 
                                     >> 0xaU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_52 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[2U] 
                     >> 0xbU)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[2U] 
                                  >> 0xaU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_55 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[2U] 
                  >> 0xbU) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[2U] 
                                 >> 0xaU))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_58 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[2U] 
                  >> 0xbU) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[2U] 
                              >> 0xaU)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_42 
        = (1U & ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                 >> 0xdU))) | (1U & 
                                               ((((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                                      >> 0xdU))) 
                                                 >> 2U) 
                                                & (~ 
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[2U] 
                                                    >> 0xbU))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_45 
        = (1U & ((3U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                 >> 0xdU))) | (1U & 
                                               ((((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                                      >> 0xdU))) 
                                                 >> 2U) 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[2U] 
                                                   >> 0xbU)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8314(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8314\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_976 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_a_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_976 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_a_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_976 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_a_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater__DOT__full)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests_io_push_bits_index 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
             ? 0U : (((IData)((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
                                              >> 8U)))) 
                      << 3U) | (((IData)((0U != (0xfU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1759) 
                                                    >> 4U)))) 
                                 << 2U) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1763) 
                                                         >> 2U)))) 
                                            << 1U) 
                                           | (1U & 
                                              (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1763) 
                                                >> 3U) 
                                               | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1763) 
                                                  >> 1U))))))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC_io_req_valid)
               ? (((IData)((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__lowerMatches1) 
                                           >> 8U)))) 
                   << 5U) | (((IData)((0U != (0xffffU 
                                              & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1798 
                                                 >> 0x10U)))) 
                              << 4U) | (((IData)((0U 
                                                  != 
                                                  (0xffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1802) 
                                                      >> 8U)))) 
                                         << 3U) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (0xfU 
                                                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1806) 
                                                                 >> 4U)))) 
                                                    << 2U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1810) 
                                                                    >> 2U)))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1810) 
                                                             >> 3U) 
                                                            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1810) 
                                                               >> 1U))))))))
               : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8315(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8315\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_req_bits_source 
        = ((0x20U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1030[4U])
            ? (((IData)((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                                        >> 8U)))) << 3U) 
               | (((IData)((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_432) 
                                           >> 4U)))) 
                   << 2U) | (((IData)((0U != (3U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_436) 
                                               >> 2U)))) 
                              << 1U) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_440) 
                                              >> 1U)))))
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_443 
        = (((IData)((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_432) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_436) 
                                     >> 2U)))) << 1U) 
              | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_440) 
                       >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_b_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
           & (~ (((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_14))
                   ? 0x10U : 0U) >> 4U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_b_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
           & (4U == (7U & (((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_14))
                             ? 0x10U : 0U) >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_b_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
           & (4U == (7U & (((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_14))
                             ? 0x10U : 0U) >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_b_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
           & (~ (((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_14))
                   ? 0x10U : 0U) >> 4U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8316(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8316\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_b_ready 
        = (1U & (((~ (((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_14))
                        ? 0x10U : 0U) >> 4U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__full))) 
                 | ((4U == (7U & (((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_14))
                                    ? 0x10U : 0U) >> 2U))) 
                    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__full)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_single 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_prio_0)
            ? ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode)) 
               | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_grant))
            : (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_opcode)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_x_bypass 
        = (((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_set) 
                  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_set)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_way) 
                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_way))) 
                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_beat) 
                   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_beat))) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_full)) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_retires))
              ? ((2U & (((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_size)) 
                         << 1U) | (0x3ffffffeU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_offset) 
                                                  >> 2U)))) 
                 | (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_size)) 
                          | (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_offset) 
                                >> 3U))))) : 0U) | 
            (((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_set) 
                  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_set)) 
                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_way) 
                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_way))) 
                & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_beat) 
                   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_beat))) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_full)) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_retires))
              ? ((2U & (((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_size)) 
                         << 1U) | (0x3ffffffeU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_offset) 
                                                  >> 2U)))) 
                 | (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_size)) 
                          | (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_offset) 
                                >> 3U))))) : 0U)) | 
           ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_set) 
                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_set)) 
               & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_way) 
                  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_way))) 
              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_beat) 
                 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_beat))) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_full))
             ? ((2U & (((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_size)) 
                        << 1U) | (0x3ffffffeU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_offset) 
                                                 >> 2U)))) 
                | (1U & ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_size)) 
                         | (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_offset) 
                               >> 3U))))) : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8317(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8317\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_bs_adr_valid 
        = (((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__beat)) 
            | ((((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__busy)) 
                   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_way) 
                      != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_way))) 
                  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_set) 
                     != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_reg_set))) 
                 & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_full)) 
                     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_way) 
                        != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_way))) 
                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_set) 
                       != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_req_set)))) 
                & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_full)) 
                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_way) 
                       != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_way))) 
                   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_set) 
                      != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_req_set)))) 
               & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_full)) 
                   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_way) 
                      != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_way))) 
                  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_evict_req_set) 
                     != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s4_req_set))))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT__want_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests_io_push_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1379) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bypassQueue)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests_io_pop_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1717) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bypass)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1703 
        = (0xffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1699) 
                     >> 8U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1699)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_mem_cmd 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_44)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_mem_cmd)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_42)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_14__DOT__slot_uop_mem_cmd)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__slot_uop_mem_cmd)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_uses_ldq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_uses_ldq 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_44)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__slot_uop_uses_ldq)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_42)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_14__DOT__slot_uop_uses_ldq)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__slot_uop_uses_ldq)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8318(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8318\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__slot_uop_mem_signed 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_40)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__slot_uop_mem_signed)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_38)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_mem_signed)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_mem_signed)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__slot_uop_is_amo 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_40)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__slot_uop_is_amo)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_38)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_is_amo)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_is_amo)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__slot_uop_fp_val 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_38)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_fp_val)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_36)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_fp_val)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__slot_uop_fp_val)));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__slot_uop_imm_packed 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_40)))
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__slot_uop_imm_packed
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_38)))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_imm_packed
                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_imm_packed));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__slot_uop_is_fence 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_40)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__slot_uop_is_fence)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_38)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_is_fence)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_is_fence)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8319(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8319\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_mem_size 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_34)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__slot_uop_mem_size)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_32)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__slot_uop_mem_size)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_8__DOT__slot_uop_mem_size)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT__slot_uop_pdst = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT__slot_uop_pdst 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_44)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT__slot_uop_pdst)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_42)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_14__DOT__slot_uop_pdst)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_13__DOT__slot_uop_pdst)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___T_569 
        = (((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__state))
             ? ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT___T_118) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__p3)) 
                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__ppred)) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_916)))
             : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__state)) 
                & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__p1) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__p2)) 
                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__ppred)) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_916))))) 
           & (0U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_9__DOT__slot_uop_fu_code) 
                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__pause_mem)
                         ? 0U : 4U))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_10__DOT__slot_uop_fu_code 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_40)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__slot_uop_fu_code)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_38)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_fu_code)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_fu_code)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8320(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8320\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_754 
        = (((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__state))
             ? ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11__DOT___T_88) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__p3)) 
                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__ppred)) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_1163)))
             : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__state)) 
                & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__p1) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__p2)) 
                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__ppred)) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_1163))))) 
           & (0U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_11__DOT__slot_uop_fu_code) 
                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit_io_fu_types_0))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_12_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_12__DOT__slot_uop_fu_code 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_35)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__slot_uop_fu_code)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_33)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14__DOT__slot_uop_fu_code)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13__DOT__slot_uop_fu_code)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_fp_val 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_23)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__slot_uop_fp_val)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_21)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_fp_val)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_fp_val)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_uses_ldq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_uses_ldq 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_23)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__slot_uop_uses_ldq)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_21)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_uses_ldq)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_uses_ldq)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8321(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8321\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT___GEN_247 
        = ((0xf7U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                >> 3U))) ? VL_ULL(0x300000007000000)
            : ((0xf6U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 3U))) ? VL_ULL(0x400000003000000)
                : ((0xf5U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 3U))) ? VL_ULL(0x400000007000000)
                    : ((0xf4U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U)))
                        ? VL_ULL(0x300000003000000)
                        : ((0xf3U == (0x1ffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                            ? VL_ULL(0x3000000bd010000)
                            : ((0xf2U == (0x1ffU & 
                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 3U)))
                                ? VL_ULL(0x2000000003000000)
                                : ((0xf1U == (0x1ffU 
                                              & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 3U)))
                                    ? VL_ULL(0x30746e69)
                                    : ((0xf0U == (0x1ffU 
                                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 3U)))
                                        ? VL_ULL(0x6c632c7663736972)
                                        : ((0xefU == 
                                            (0x1ffU 
                                             & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 3U)))
                                            ? VL_ULL(0x1b0000000d000000)
                                            : ((0xeeU 
                                                == 
                                                (0x1ffU 
                                                 & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))
                                                ? VL_ULL(0x300000000000030)
                                                : (
                                                   (0xedU 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? VL_ULL(0x3030303030324074)
                                                    : 
                                                   ((0xecU 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? VL_ULL(0x6e696c6301000000)
                                                     : 
                                                    ((0xebU 
                                                      == 
                                                      (0x1ffU 
                                                       & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter_auto_out_a_bits_address 
                                                          >> 3U)))
                                                      ? VL_ULL(0x200000001000000)
                                                      : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__bootrom__DOT___GEN_234)))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8322(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8322\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_imm_packed 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_23)))
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__slot_uop_imm_packed
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_21)))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_imm_packed
                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_imm_packed));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_mem_cmd 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_23)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__slot_uop_mem_cmd)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_21)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_mem_cmd)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_mem_cmd)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT__slot_uop_ldst_val 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_44)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT__slot_uop_ldst_val)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_42)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_14__DOT__slot_uop_ldst_val)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_13__DOT__slot_uop_ldst_val)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT__slot_uop_mem_cmd 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_44)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT__slot_uop_mem_cmd)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_42)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_14__DOT__slot_uop_mem_cmd)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_13__DOT__slot_uop_mem_cmd)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT__slot_uop_bypassable = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT__slot_uop_bypassable 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_44)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT__slot_uop_bypassable)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_42)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_14__DOT__slot_uop_bypassable)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_13__DOT__slot_uop_bypassable)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8323(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8323\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT__slot_uop_dst_rtype = 2U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT__slot_uop_dst_rtype 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_44)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT__slot_uop_dst_rtype)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_42)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_14__DOT__slot_uop_dst_rtype)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_13__DOT__slot_uop_dst_rtype)));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_is_amo 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_34)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_10__DOT__slot_uop_is_amo)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_32)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__slot_uop_is_amo)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8__DOT__slot_uop_is_amo)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__slot_uop_imm_packed 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_38)))
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT__slot_uop_imm_packed
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_36)))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__slot_uop_imm_packed
                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_10__DOT__slot_uop_imm_packed));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_uses_stq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_uses_stq 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_34)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_10__DOT__slot_uop_uses_stq)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_32)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__slot_uop_uses_stq)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8__DOT__slot_uop_uses_stq)));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_10_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_10__DOT__slot_uop_is_sfb 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_40)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_13__DOT__slot_uop_is_sfb)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_38)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT__slot_uop_is_sfb)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__slot_uop_is_sfb)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8324(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8324\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8__DOT__slot_uop_is_rvc 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_36)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__slot_uop_is_rvc)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_34)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_10__DOT__slot_uop_is_rvc)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__slot_uop_is_rvc)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8__DOT__slot_uop_edge_inst 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_36)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__slot_uop_edge_inst)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_34)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_10__DOT__slot_uop_edge_inst)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__slot_uop_edge_inst)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8__DOT__slot_uop_pc_lob 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_36)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__slot_uop_pc_lob)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_34)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_10__DOT__slot_uop_pc_lob)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__slot_uop_pc_lob)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_fp_val 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_34)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_10__DOT__slot_uop_fp_val)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_32)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__slot_uop_fp_val)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8__DOT__slot_uop_fp_val)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT___T_149 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__p2) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__ppred));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT___T_147 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT___T_118) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__ppred));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8325(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8325\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT___T_148 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__p1) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__ppred));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11_io_request 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__state))
            ? ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT___T_118) 
                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__p3)) 
                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__ppred)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_917)))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__state)) 
               & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__p1) 
                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__p2)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__ppred)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_917)))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT__ppred = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT__ppred 
                = (1U & (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_44)))
                             ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT__ppred))
                             : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_42)))
                                 ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_14__DOT__ppred))
                                 : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_13__DOT__ppred))))));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_1191 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__slot_uop_fu_code) 
           & (0x21U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue_io_empty)
                        ? 0x100U : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_1187 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9_io_request) 
           & (0U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__slot_uop_fu_code) 
                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_fu_types_0))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_10_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_10__DOT__slot_uop_fu_code 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_40)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_13__DOT__slot_uop_fu_code)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_38)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT__slot_uop_fu_code)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__slot_uop_fu_code)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8326(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8326\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_btb_mispredicts_4 
        = (((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_cfi_types_4)) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__maybe_full)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp__DOT__ram_preds_4_predicted_pc_valid
               [0U] : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_resp_f3_preds_4_predicted_pc_valid))) 
           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_bpd_resp_io_deq_bits_preds_4_predicted_pc_bits 
              != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___GEN_182));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1752 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1751) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_redirects_3));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_rob_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_21)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_rob_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_19)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_rob_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_rob_idx)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_pdst = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_pdst 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_21)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_pdst)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_19)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_pdst)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_pdst)));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_is_amo 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_21)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_is_amo)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_19)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_is_amo)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_is_amo)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_dst_rtype = 2U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_dst_rtype 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_21)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_dst_rtype)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_19)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_dst_rtype)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_dst_rtype)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8327(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8327\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_uses_stq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_uses_stq 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_21)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_uses_stq)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_19)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_uses_stq)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_uses_stq)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8_io_out_uop_uopc 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_1163)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_uopc)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8__DOT___T_9)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_uopc)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8__DOT___T_5)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__p1)
                        ? 3U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_uopc))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_uopc))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8_io_out_uop_iw_state 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8__DOT___T_75))
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_1163)
                     ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8__DOT___T_9)
                              ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8__DOT___T_5)
                                       ? 1U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__state)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_9__DOT___T_9 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_9_io_grant) 
            & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__state))) 
           | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_9__DOT___T_5) 
                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__p1)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__p2)) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_9__DOT__ppred)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10_io_grant) 
           & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__state)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10_io_will_be_valid 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__state)) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10_io_grant) 
                 & ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__state)) 
                    | ((((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__state)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__p1)) 
                        & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__p2)) 
                       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_10__DOT__ppred))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8328(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8328\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3_io_in_uop_bits_prs1 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_17)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_prs1)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_15)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_prs1)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_prs1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3_io_in_uop_bits_prs2 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_17)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_prs2)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_15)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_prs2)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_prs2)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3_io_in_uop_bits_prs3 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_17)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_prs3)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_15)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_prs3)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_4__DOT__slot_uop_prs3)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_3_io_in_uop_valid 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_17)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_will_be_valid)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_858));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_1098 
        = ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_17)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6_io_will_be_valid)
            : ((1U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_15))) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_will_be_valid)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_5__DOT__slot_uop_stq_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_21)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_8__DOT__slot_uop_stq_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_19)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_7__DOT__slot_uop_stq_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_6__DOT__slot_uop_stq_idx)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8329(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8329\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__slot_uop_taken 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_38)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT__slot_uop_taken)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_36)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__slot_uop_taken)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_10__DOT__slot_uop_taken)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_ftq_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_28)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_ftq_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_26)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_ftq_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_ftq_idx)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_rob_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_28)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_rob_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_26)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_rob_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_rob_idx)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_pdst = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_pdst 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_28)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_pdst)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_26)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_pdst)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_pdst)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__alu__DOT__alu__DOT___T_150 
        = ((VL_ULL(0x3333333333333333) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__alu__DOT__alu__DOT___T_140 
                                          >> 2U)) | 
           (VL_ULL(0xcccccccccccccccc) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__alu__DOT__alu__DOT___T_140 
                                          << 2U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8330(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8330\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT___T_9 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1_io_grant) 
            & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__state))) 
           | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT___T_5) 
                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__p1)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__p2)) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_1__DOT__ppred)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT___T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_grant) 
           & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2__DOT__state)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__issue_slots_3_grant 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___T_479) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___T_470)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3_io_grant 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___T_479) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___T_470)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___T_485 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___T_479) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___T_470));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_uses_stq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_uses_stq 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_28)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_uses_stq)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_26)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_uses_stq)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_uses_stq)));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_stq_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_28)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_stq_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_26)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_stq_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_stq_idx)));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_bits_prs3 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_24)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_prs3)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_22)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_prs3)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_prs3)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8331(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8331\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_bits_prs1 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_24)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_prs1)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_22)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_prs1)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_prs1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_2_io_in_uop_bits_prs2 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_24)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_prs2)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_22)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_prs2)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_3__DOT__slot_uop_prs2)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_4__DOT__slot_uop_ldq_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_28)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_7__DOT__slot_uop_ldq_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_26)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_6__DOT__slot_uop_ldq_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_5__DOT__slot_uop_ldq_idx)));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5253 
        = (0x3fU & ((0x18U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__l_idx))
                     ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__l_idx) 
                        - (IData)(0x18U)) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__l_idx)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1638 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1633)
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_rs2_data_0
            : (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__Arbiter_io_out_bits_data[1U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__Arbiter_io_out_bits_data[0U]))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1636 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1633)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_stq_idx)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__Arbiter_io_out_bits_uop_stq_idx));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_sfence_0 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1125) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1121));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_39 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__metaReadArb_io_in_3_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__meta_read_arb_io_out_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_req_ready 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__metaReadArb__DOT___T_2)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__meta_0__DOT__wen))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__dataReadArb__DOT___T))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8332(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8332\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_jal 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_32)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__slot_uop_is_jal)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_30)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8__DOT__slot_uop_is_jal)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_is_jal)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_jalr 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_32)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__slot_uop_is_jalr)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_30)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8__DOT__slot_uop_is_jalr)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_is_jalr)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_is_br 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_32)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__slot_uop_is_br)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_30)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8__DOT__slot_uop_is_br)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_is_br)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_rob_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_30)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8__DOT__slot_uop_rob_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_28)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_rob_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_rob_idx)));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_1105 
        = (0xffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_1101 
                       >> 0x10U) | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_1101));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_br_tag 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_28)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_br_tag)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_26)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_br_tag)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_br_tag)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8333(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8333\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___GEN_121 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_1138) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__commit_line));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__do_deq 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_ready) 
                  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___GEN_15))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_1138 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_13 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__wb_io_meta_read_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__wb_io_meta_read_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__wb__DOT___T_47 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__wb_io_data_req_ready) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__wb_io_data_req_valid)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__wb_io_meta_read_ready) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__wb_io_meta_read_valid)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_14 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__wb_io_data_req_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__wb_io_data_req_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2176 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2128) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___GEN_69)) 
           & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT__full)) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_finish_valid))
                  ? ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_finish_bits_sink))
                  : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___GEN_32 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2036)
            ? (0xffU & ((IData)(1U) << (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data))))
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1911 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1859) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1867)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___GEN_69 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1859) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2188))) 
            & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
                >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
                             >> 1U)))) ? (0xffffU & 
                                          ((IData)(1U) 
                                           << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_15_data)))
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2087 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1859) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_2036))) 
           & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8334(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8334\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT___T_46 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__resp_arb_io_out_bits_uop_br_mask) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_lsu_brupdate_b1_resolve_mask)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq_io_deq_ready 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__state)) 
           & ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__state)) 
              & ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__state)) 
                 & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__state))
                     ? ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__resp_arb__DOT___T)) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__full))) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__lb_read_arb_io_in_2_ready)) 
                        & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___T_1075))
                     : ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__state)) 
                        & ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__state)) 
                           & ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__state)) 
                              & ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__state)) 
                                 & ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__state)) 
                                    & ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__state)) 
                                       & ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__state)) 
                                          & ((0xcU 
                                              == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__state)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__replay_arb_io_in_2_ready)))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__resp_arb__DOT___T_1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__resp_arb__DOT___T) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2_io_resp_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___T_1233 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__refill_arb__DOT___T)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s3_valid))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2_io_refill_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__refill_arb__DOT___T_1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__refill_arb__DOT___T) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2_io_refill_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_1107 
        = (((QData)((IData)(((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_bits_uop_mem_size))
                              ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_bits_uop_mem_signed) 
                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_1096 
                                     >> 0x1fU)) ? 0xffffffffU
                                  : 0U) : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_1081[1U]))) 
            << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_1096)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8335(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8335\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_1107 
        = (((QData)((IData)(((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_bits_uop_mem_size))
                              ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_bits_uop_mem_signed) 
                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_1096 
                                     >> 0x1fU)) ? 0xffffffffU
                                  : 0U) : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_1081[1U]))) 
            << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_1096)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___T_1107 
        = (((QData)((IData)(((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq_io_deq_bits_uop_mem_size))
                              ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq_io_deq_bits_uop_mem_signed) 
                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___T_1096 
                                     >> 0x1fU)) ? 0xffffffffU
                                  : 0U) : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___T_1081[1U]))) 
            << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___T_1096)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___T_1107 
        = (((QData)((IData)(((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq_io_deq_bits_uop_mem_size))
                              ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq_io_deq_bits_uop_mem_signed) 
                                  & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___T_1096 
                                     >> 0x1fU)) ? 0xffffffffU
                                  : 0U) : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___T_1081[1U]))) 
            << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___T_1096)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar_auto_in_1_a_ready 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_220_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_a_ready 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_220_1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar_auto_in_0_a_ready 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_220_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor_io_in_a_ready 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_220_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_330 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_329) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_324));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___GEN_56 
        = ((5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                         >> 0x1bU))) ? 2U : ((4U == 
                                              (7U & 
                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                                >> 0x1bU)))
                                              ? 1U : 
                                             ((3U == 
                                               (7U 
                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                                   >> 0x1bU)))
                                               ? 1U
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                                       >> 0x1bU)))
                                                   ? 1U
                                                   : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8336(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8336\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2056 
        = ((7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                  >> 0x11U)) == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_424 
        = (((((VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                   (0x2010000U 
                                                                    ^ 
                                                                    ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                                                      << 0xfU) 
                                                                     | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[4U] 
                                                                        >> 0x11U))))))) 
              | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
                               & (QData)((IData)((0x54000000U 
                                                  ^ 
                                                  ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                                    << 0xfU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[4U] 
                                                      >> 0x11U)))))))) 
             | (VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
                                                                    (0xc000000U 
                                                                     ^ 
                                                                     ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                                                       << 0xfU) 
                                                                      | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[4U] 
                                                                         >> 0x11U)))))))) 
            | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
                                                                   (0x2000000U 
                                                                    ^ 
                                                                    ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                                                      << 0xfU) 
                                                                     | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[4U] 
                                                                        >> 0x11U)))))))) 
           | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                                                    << 0xfU) 
                                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[4U] 
                                                                      >> 0x11U)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_2058 
        = ((0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                    >> 0x14U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_381 
        = ((0xcU >= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                             >> 0x14U))) & (VL_ULL(0) 
                                            == (VL_ULL(0x1fffff000) 
                                                & (QData)((IData)(
                                                                  (0x3000U 
                                                                   ^ 
                                                                   ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                                                     << 0xfU) 
                                                                    | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[4U] 
                                                                       >> 0x11U))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_32 
        = (1U & ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                 >> 0x14U))) | (1U 
                                                & ((((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                                         >> 0x14U))) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[4U] 
                                                       >> 0x14U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8337(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8337\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_35 
        = (1U & ((4U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                 >> 0x14U))) | (1U 
                                                & ((((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                                         >> 0x14U))) 
                                                    >> 3U) 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[4U] 
                                                      >> 0x14U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_39 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[4U] 
                     >> 0x14U)) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[4U] 
                                      >> 0x13U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_42 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[4U] 
                     >> 0x14U)) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[4U] 
                                   >> 0x13U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_45 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[4U] 
                  >> 0x14U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[4U] 
                                  >> 0x13U))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_48 
        = (1U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[4U] 
                  >> 0x14U) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[4U] 
                               >> 0x13U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_245[0U] 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_154))
             ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_188)
             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_218_0))
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[0U]
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_245[1U] 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_154))
             ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_188)
             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_218_0))
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[1U]
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_245[2U] 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_154))
             ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_188)
             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_218_0))
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[2U]
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_245[3U] 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_154))
             ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_188)
             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_218_0))
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[3U]
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_245[4U] 
        = ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_154))
              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_188)
              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_218_0))
             ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[4U]
             : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_154))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_189)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_218_1))
                       ? (0x1fffeU | (0xff800000U & 
                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__refill_paddr 
                                       << 0x11U))) : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_245[5U] 
        = ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_154))
              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_188)
              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_218_0))
             ? ((0x70000000U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                << 1U)) | ((0xe000000U 
                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                               << 1U)) 
                                           | ((0x1e00000U 
                                               & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U] 
                                                  << 1U)) 
                                              | ((0xe0000U 
                                                  & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U]) 
                                                 | (0x1ffffU 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_447[5U])))))
             : 0U) | (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_154))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_189)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_218_1))
                       ? (0x40d00000U | (0x1ffffU & 
                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__refill_paddr 
                                          >> 0xfU)))
                       : 0U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8338(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8338\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_617 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshr_alloc_idx)) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__pri_val)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_req_pri_rdy));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_617 
        = (((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshr_alloc_idx)) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__pri_val)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_req_pri_rdy));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___T_617 
        = (((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshr_alloc_idx)) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__pri_val)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2_io_req_pri_rdy));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___T_617 
        = (((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshr_alloc_idx)) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__pri_val)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3_io_req_pri_rdy));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_req_sec_val 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_117) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_matches_0_0)) 
           & (VL_ULL(0) == (VL_ULL(0x80000000) & (VL_ULL(0x80000000) 
                                                  ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_addr))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_req_sec_val 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_117) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_matches_0_1)) 
           & (VL_ULL(0) == (VL_ULL(0x80000000) & (VL_ULL(0x80000000) 
                                                  ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_addr))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2_io_req_sec_val 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_117) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_matches_0_2)) 
           & (VL_ULL(0) == (VL_ULL(0x80000000) & (VL_ULL(0x80000000) 
                                                  ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_addr))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3_io_req_sec_val 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_117) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_matches_0_3)) 
           & (VL_ULL(0) == (VL_ULL(0x80000000) & (VL_ULL(0x80000000) 
                                                  ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_addr))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8339(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8339\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1133 
        = (0xffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1129) 
                     >> 8U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1129)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__loMulAdd9Out_A 
        = (0x7ffffU & ((0x3ffffU & ((0x1ffU & (((IData)(
                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractB_A4_div 
                                                         >> 0x28U)) 
                                                | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_0_A7_sqrt)
                                                       ? 0x1c8U
                                                       : 0U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_1_A7_sqrt)
                                                         ? 0xc1U
                                                         : 0U)) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_2_A7_sqrt)
                                                        ? 0x143U
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_3_A7_sqrt)
                                                       ? 0x89U
                                                       : 0U))) 
                                               | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S)
                                                   ? 0U
                                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__nextMulAdd9A_A)))) 
                                    * (0x1ffU & (((
                                                   ((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_0_A4_div)
                                                           ? 0x1c7U
                                                           : 0U) 
                                                         | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_1_A4_div)
                                                             ? 0x16cU
                                                             : 0U)) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_2_A4_div)
                                                            ? 0x12aU
                                                            : 0U)) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_3_A4_div)
                                                           ? 0xf8U
                                                           : 0U)) 
                                                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_4_A4_div)
                                                          ? 0xd2U
                                                          : 0U)) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_5_A4_div)
                                                         ? 0xb4U
                                                         : 0U)) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_6_A4_div)
                                                        ? 0x9cU
                                                        : 0U)) 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zLinPiece_7_A4_div)
                                                       ? 0x89U
                                                       : 0U)) 
                                                  | (IData)(
                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractB_A7_sqrt 
                                                             >> 0x2aU))) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S)
                                                     ? 0U
                                                     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__nextMulAdd9B_A)))))) 
                       + (0x3ffffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fdivsqrt__DOT__divsqrt__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9C_A)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8340(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8340\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_1435 
        = (0xfU & (((((((((((((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_1415) 
                                      ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x38U] 
                                          << 0x1cU) 
                                         | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x37U] 
                                            >> 4U))) 
                                     ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x38U] 
                                         << 0x18U) 
                                        | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x37U] 
                                           >> 8U))) 
                                    ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x38U] 
                                        << 0x14U) | 
                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x37U] 
                                        >> 0xcU))) 
                                   ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x38U] 
                                       << 0x10U) | 
                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x37U] 
                                       >> 0x10U))) 
                                  ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x38U] 
                                      << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x37U] 
                                                  >> 0x14U))) 
                                 ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x38U] 
                                     << 8U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x37U] 
                                               >> 0x18U))) 
                                ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x38U] 
                                    << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x37U] 
                                              >> 0x1cU))) 
                               ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x38U]) 
                              ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x39U] 
                                  << 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x38U] 
                                               >> 4U))) 
                             ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x39U] 
                                 << 0x18U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x38U] 
                                              >> 8U))) 
                            ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x39U] 
                                << 0x14U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x38U] 
                                             >> 0xcU))) 
                           ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x39U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x38U] 
                                            >> 0x10U))) 
                          ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x39U] 
                              << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x38U] 
                                          >> 0x14U))) 
                         ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x39U] 
                             << 8U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x38U] 
                                       >> 0x18U))) 
                        ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x39U] 
                            << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x38U] 
                                      >> 0x1cU))) ^ 
                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x39U]) 
                      ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x3aU] 
                          << 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x39U] 
                                       >> 4U))) ^ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x3aU] 
                                                    << 0x18U) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x39U] 
                                                      >> 8U))) 
                    ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x3aU] 
                        << 0x14U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x39U] 
                                     >> 0xcU))) ^ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x3aU] 
                                                    << 0x10U) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT___T_390[0x39U] 
                                                      >> 0x10U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8341(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8341\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_1435 
        = (0xfU & (((((((((((((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_1415) 
                                      ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x38U] 
                                          << 0x1cU) 
                                         | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x37U] 
                                            >> 4U))) 
                                     ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x38U] 
                                         << 0x18U) 
                                        | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x37U] 
                                           >> 8U))) 
                                    ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x38U] 
                                        << 0x14U) | 
                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x37U] 
                                        >> 0xcU))) 
                                   ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x38U] 
                                       << 0x10U) | 
                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x37U] 
                                       >> 0x10U))) 
                                  ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x38U] 
                                      << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x37U] 
                                                  >> 0x14U))) 
                                 ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x38U] 
                                     << 8U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x37U] 
                                               >> 0x18U))) 
                                ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x38U] 
                                    << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x37U] 
                                              >> 0x1cU))) 
                               ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x38U]) 
                              ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x39U] 
                                  << 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x38U] 
                                               >> 4U))) 
                             ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x39U] 
                                 << 0x18U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x38U] 
                                              >> 8U))) 
                            ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x39U] 
                                << 0x14U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x38U] 
                                             >> 0xcU))) 
                           ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x39U] 
                               << 0x10U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x38U] 
                                            >> 0x10U))) 
                          ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x39U] 
                              << 0xcU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x38U] 
                                          >> 0x14U))) 
                         ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x39U] 
                             << 8U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x38U] 
                                       >> 0x18U))) 
                        ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x39U] 
                            << 4U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x38U] 
                                      >> 0x1cU))) ^ 
                       vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x39U]) 
                      ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x3aU] 
                          << 0x1cU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x39U] 
                                       >> 4U))) ^ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x3aU] 
                                                    << 0x18U) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x39U] 
                                                      >> 8U))) 
                    ^ ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x3aU] 
                        << 0x14U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x39U] 
                                     >> 0xcU))) ^ (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x3aU] 
                                                    << 0x10U) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT___T_390[0x39U] 
                                                      >> 0x10U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8342(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8342\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp9865[3];
    WData/*95:0*/ __Vtemp9866[3];
    // Body
    __Vtemp9865[0U] = (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__alu__DOT__shin);
    __Vtemp9865[1U] = (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__alu__DOT__shin 
                               >> 0x20U));
    __Vtemp9865[2U] = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn) 
                              >> 3U) & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__alu__DOT__shin 
                                                >> 0x3fU))));
    VL_SHIFTRS_WWI(65,65,6, __Vtemp9866, __Vtemp9865, 
                   ((((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__alu_io_in2 
                               >> 5U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_alu_dw)) 
                     << 5U) | (0x1fU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__alu_io_in2))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__alu__DOT___T_101[0U] 
        = __Vtemp9866[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__alu__DOT___T_101[1U] 
        = __Vtemp9866[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__alu__DOT___T_101[2U] 
        = (1U & __Vtemp9866[2U]);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__package_Anon_1_io_x_v 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__mem_resp_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__res_v)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1036) 
               | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1039)
                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_v)
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1041) 
                      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_v)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__package_Anon_1_io_x_d 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__mem_resp_valid)
                  ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__mem_resp_data 
                             >> 7U)) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1036)
                                         ? (IData)(
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_227 
                                                    >> 5U))
                                         : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1039)
                                             ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_d)
                                             : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1041)
                                                 ? (IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_227 
                                                            >> 5U))
                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_d))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__package_Anon_1_io_x_a 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__mem_resp_valid)
                  ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__mem_resp_data 
                             >> 6U)) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1036)
                                         ? (IData)(
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_227 
                                                    >> 4U))
                                         : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1039)
                                             ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_a)
                                             : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1041)
                                                 ? (IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_227 
                                                            >> 4U))
                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_a))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__package_Anon_1_io_x_g 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__mem_resp_valid)
                  ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__mem_resp_data 
                             >> 5U)) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1036)
                                         ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__s2_g)
                                         : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1039)
                                             ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g)
                                             : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1041)
                                                 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__s2_g)
                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_g))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8343(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8343\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__package_Anon_1_io_x_u 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__mem_resp_valid)
                  ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__mem_resp_data 
                             >> 4U)) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1036)
                                         ? (IData)(
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_227 
                                                    >> 3U))
                                         : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1039)
                                             ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_u)
                                             : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1041)
                                                 ? (IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_227 
                                                            >> 3U))
                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_u))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__package_Anon_1_io_x_x 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__mem_resp_valid)
                  ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__mem_resp_data 
                             >> 3U)) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1036)
                                         ? (IData)(
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_227 
                                                    >> 2U))
                                         : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1039)
                                             ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_x)
                                             : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1041)
                                                 ? (IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_227 
                                                            >> 2U))
                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_x))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__package_Anon_1_io_x_w 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__mem_resp_valid)
                  ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__mem_resp_data 
                             >> 2U)) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1036)
                                         ? (IData)(
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_227 
                                                    >> 1U))
                                         : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1039)
                                             ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_w)
                                             : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1041)
                                                 ? (IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_227 
                                                            >> 1U))
                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_w))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__package_Anon_1_io_x_r 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__mem_resp_valid)
                  ? (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__mem_resp_data 
                             >> 1U)) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1036)
                                         ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_227)
                                         : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1039)
                                             ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_r)
                                             : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1041)
                                                 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_227)
                                                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_r))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1046_ppn 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1036)
            ? (QData)((IData)((0xfffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_227 
                                                   >> 6U)))))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1039)
                ? ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__count))
                    ? ((VL_ULL(0x3ffffffffffe00) & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_ppn) 
                       | (QData)((IData)((0x1ffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_req_addr))))
                    : ((VL_ULL(0x3ffffffffc0000) & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_ppn) 
                       | (QData)((IData)((0x3ffffU 
                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_req_addr)))))
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_1041)
                    ? (QData)((IData)((((((((((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__hits))
                                               ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__data_0
                                               : 0U) 
                                             | ((2U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__hits))
                                                 ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__data_1
                                                 : 0U)) 
                                            | ((4U 
                                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__hits))
                                                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__data_2
                                                : 0U)) 
                                           | ((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__hits))
                                               ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__data_3
                                               : 0U)) 
                                          | ((0x10U 
                                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__hits))
                                              ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__data_4
                                              : 0U)) 
                                         | ((0x20U 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__hits))
                                             ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__data_5
                                             : 0U)) 
                                        | ((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__hits))
                                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__data_6
                                            : 0U)) 
                                       | ((0x80U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__hits))
                                           ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__data_7
                                           : 0U))))
                    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_55)
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_satp_ppn
                        : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__r_pte_ppn))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8344(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8344\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_874 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_req_size) 
            >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_data_0 
                               >> 0xcU)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_993)
                                             ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_354)
                                             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__special_entry_valid_0))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_874 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size) 
            >> 1U) & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                               >> 0xcU)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993)
                                             ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_354)
                                             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_1993 
        = (0x3fffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__cmd_write_perms)
                        ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__ae_array) 
                           | (~ (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__prot_w)
                                     ? 3U : 0U) << 0xcU) 
                                  | ((0x800U & ((IData)(
                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                         >> 7U)) 
                                                << 0xbU)) 
                                     | ((0x400U & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                            >> 7U)) 
                                                   << 0xaU)) 
                                        | ((0x200U 
                                            & ((IData)(
                                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                        >> 7U)) 
                                               << 9U)) 
                                           | ((0x100U 
                                               & ((IData)(
                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                           >> 7U)) 
                                                  << 8U)) 
                                              | ((0x80U 
                                                  & ((IData)(
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_63 
                                                              >> 7U)) 
                                                     << 7U)) 
                                                 | ((0x40U 
                                                     & ((IData)(
                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_59 
                                                                 >> 7U)) 
                                                        << 6U)) 
                                                    | ((0x20U 
                                                        & ((IData)(
                                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_55 
                                                                    >> 7U)) 
                                                           << 5U)) 
                                                       | ((0x10U 
                                                           & ((IData)(
                                                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_51 
                                                                       >> 7U)) 
                                                              << 4U)) 
                                                          | ((8U 
                                                              & ((IData)(
                                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_47 
                                                                          >> 7U)) 
                                                                 << 3U)) 
                                                             | ((4U 
                                                                 & ((IData)(
                                                                            (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_43 
                                                                             >> 7U)) 
                                                                    << 2U)) 
                                                                | ((2U 
                                                                    & ((IData)(
                                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_39 
                                                                                >> 7U)) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_35 
                                                                                >> 7U))))))))))))))) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__ptw_ae_array)))))
                        : 0U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__cmd_amo_logical)
                                  ? (~ (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_238)
                                            ? 3U : 0U) 
                                          << 0xcU) 
                                         | ((0x800U 
                                             & ((IData)(
                                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                         >> 4U)) 
                                                << 0xbU)) 
                                            | ((0x400U 
                                                & ((IData)(
                                                           (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                            >> 4U)) 
                                                   << 0xaU)) 
                                               | ((0x200U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                               >> 4U)) 
                                                      << 9U)) 
                                                  | ((0x100U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                                  >> 4U)) 
                                                         << 8U)) 
                                                     | ((0x80U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_63 
                                                                     >> 4U)) 
                                                            << 7U)) 
                                                        | ((0x40U 
                                                            & ((IData)(
                                                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_59 
                                                                        >> 4U)) 
                                                               << 6U)) 
                                                           | ((0x20U 
                                                               & ((IData)(
                                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_55 
                                                                           >> 4U)) 
                                                                  << 5U)) 
                                                              | ((0x10U 
                                                                  & ((IData)(
                                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_51 
                                                                              >> 4U)) 
                                                                     << 4U)) 
                                                                 | ((8U 
                                                                     & ((IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_47 
                                                                                >> 4U)) 
                                                                        << 3U)) 
                                                                    | ((4U 
                                                                        & ((IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_43 
                                                                                >> 4U)) 
                                                                           << 2U)) 
                                                                       | ((2U 
                                                                           & ((IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_39 
                                                                                >> 4U)) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT___GEN_35 
                                                                                >> 4U))))))))))))))) 
                                        | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tlb__DOT__c_array)))
                                  : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8345(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8345\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s0_read 
        = ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd)) 
             | (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd))) 
            | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcacheArb_io_mem_req_bits_cmd))) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_105));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_1142 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_1124) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore1_rmw))) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__pstore2_valid)) 
           & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcacheArb_io_mem_req_valid) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_108)))) 
              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__releaseInFlight) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_1110))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_138 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_72) 
             << 0xfU) | (0x3fff8000U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_70) 
                                         << 0xfU) & 
                                        (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[4U] 
                                         >> 2U)))) 
           | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_72) 
                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_70) 
                   & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[4U] 
                         >> 0x11U)))) << 0xeU) | ((
                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_69) 
                                                    << 0xdU) 
                                                   | (0xfffe000U 
                                                      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_67) 
                                                          << 0xdU) 
                                                         & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[4U] 
                                                            >> 4U)))) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_69) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_67) 
                                                          & (~ 
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[4U] 
                                                              >> 0x11U)))) 
                                                      << 0xcU) 
                                                     | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_66) 
                                                          << 0xbU) 
                                                         | (0x3fff800U 
                                                            & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_64) 
                                                                << 0xbU) 
                                                               & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[4U] 
                                                                  >> 6U)))) 
                                                        | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_66) 
                                                             | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_64) 
                                                                & (~ 
                                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[4U] 
                                                                    >> 0x11U)))) 
                                                            << 0xaU) 
                                                           | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_63) 
                                                                << 9U) 
                                                               | (0xfffe00U 
                                                                  & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_61) 
                                                                      << 9U) 
                                                                     & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[4U] 
                                                                        >> 8U)))) 
                                                              | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_63) 
                                                                   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_61) 
                                                                      & (~ 
                                                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[4U] 
                                                                          >> 0x11U)))) 
                                                                  << 8U) 
                                                                 | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_60) 
                                                                      << 7U) 
                                                                     | (0x3fff80U 
                                                                        & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_58) 
                                                                            << 7U) 
                                                                           & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[4U] 
                                                                              >> 0xaU)))) 
                                                                    | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_60) 
                                                                         | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_58) 
                                                                            & (~ 
                                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[4U] 
                                                                                >> 0x11U)))) 
                                                                        << 6U) 
                                                                       | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_57) 
                                                                            << 5U) 
                                                                           | (0xfffe0U 
                                                                              & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_55) 
                                                                                << 5U) 
                                                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[4U] 
                                                                                >> 0xcU)))) 
                                                                          | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_57) 
                                                                               | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_55) 
                                                                                & (~ 
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[4U] 
                                                                                >> 0x11U)))) 
                                                                              << 4U) 
                                                                             | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_54) 
                                                                                << 3U) 
                                                                                | (0x3fff8U 
                                                                                & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_52) 
                                                                                << 3U) 
                                                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[4U] 
                                                                                >> 0xeU)))) 
                                                                                | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_54) 
                                                                                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_52) 
                                                                                & (~ 
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[4U] 
                                                                                >> 0x11U)))) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_51) 
                                                                                << 1U) 
                                                                                | (0xfffeU 
                                                                                & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_49) 
                                                                                << 1U) 
                                                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[4U] 
                                                                                >> 0x10U)))) 
                                                                                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_51) 
                                                                                | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_49) 
                                                                                & (~ 
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_245[4U] 
                                                                                >> 0x11U)))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8346(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8346\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_valid_not_nacked 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_nack)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT___GEN_30 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_imem_flush_icache) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT__invalidated));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1125 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__replay_wb_common)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__take_pc_wb 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__replay_wb_common) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_xcpt)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr_io_eret)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_flush_pipe));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT___T_25 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__fq_io_deq_valid) 
             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT___T_6)) 
            & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__nICReady) 
               < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__nIC))) 
           & (1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT___T_10)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__take_pc_mem 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_valid) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_wrong_npc) 
              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_sfence)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_116 
        = (((((((((((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_98) 
                            | (0x5013U == (0xbc00707fU 
                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                           | (0x501bU == (0xbe00705fU 
                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                          | (0x5033U == (0xbe007077U 
                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                         | (0x2004033U == (0xfe004077U 
                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                        | (0x800202fU == (0xe800607fU 
                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                       | (0x1000202fU == (0xf9f0607fU 
                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                      | (0x10200073U == (0xdfffffffU 
                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                     | (0x10500073U == (0xdfffffffU 
                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                    | (0x12000073U == (0xfe007fffU 
                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                   | (0x20000053U == (0xf400607fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                  | (0x20000053U == (0x7c00607fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                 | (0x20000053U == (0x7c00507fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                | (0x40100053U == (0x7ff0007fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
               | (0x42000053U == (0x7ff0007fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
              | (0x58000053U == (0xfdf0007fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
             | (0x7b200073U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
            | (0xc0000053U == (0xedc0007fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
           | (0xe0000053U == (0xfdf0607fU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8347(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8347\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp9872[3];
    WData/*95:0*/ __Vtemp9873[3];
    WData/*95:0*/ __Vtemp9878[3];
    WData/*95:0*/ __Vtemp9879[3];
    WData/*95:0*/ __Vtemp9884[3];
    WData/*95:0*/ __Vtemp9885[3];
    WData/*95:0*/ __Vtemp9890[3];
    WData/*95:0*/ __Vtemp9891[3];
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_515 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_mem) 
            & (0x14U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_mem_cmd))) 
           | (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_csr)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_509 
        = ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_csr)) 
           | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_csr)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1184 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_wxd) 
           & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rd)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_752 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_rxs2) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__do_bypass_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1182 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_rxs2) 
           & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs2)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_744 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_rxs1) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__do_bypass)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1180 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_ctrl_rxs1) 
           & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_rs1)));
    __Vtemp9872[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1116[0U] 
                             >> 1U));
    __Vtemp9872[1U] = 0U;
    __Vtemp9872[2U] = 0U;
    VL_EXTEND_WW(84,83, __Vtemp9873, __Vtemp9872);
    __Vtemp9878[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1116[0U] 
                             >> 1U));
    __Vtemp9878[1U] = 0U;
    __Vtemp9878[2U] = 0U;
    VL_EXTEND_WW(84,83, __Vtemp9879, __Vtemp9878);
    __Vtemp9884[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1116[0U] 
                             >> 1U));
    __Vtemp9884[1U] = 0U;
    __Vtemp9884[2U] = 0U;
    VL_EXTEND_WW(84,83, __Vtemp9885, __Vtemp9884);
    __Vtemp9890[0U] = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1116[0U] 
                             >> 1U));
    __Vtemp9890[1U] = 0U;
    __Vtemp9890[2U] = 0U;
    VL_EXTEND_WW(84,83, __Vtemp9891, __Vtemp9890);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1194 
        = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
             == ((7U == (7U & __Vtemp9873[0U])) ? 4U
                  : ((6U == (7U & __Vtemp9879[0U]))
                      ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_28)))) 
            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
               == ((7U == (7U & __Vtemp9885[0U])) ? 4U
                    : ((6U == (7U & __Vtemp9891[0U]))
                        ? 5U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_28))))) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_valid) 
              & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
                  == ((7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                    >> 0x14U))) ? 4U
                       : ((6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                        >> 0x14U)))
                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_44)))) 
                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data) 
                    == ((7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                      >> 0x14U))) ? 4U
                         : ((6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                          >> 0x14U)))
                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_44)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8348(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8348\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1226 
        = (0x1fffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT__inflight 
                         | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_15) 
                        & (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___GEN_20)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_51 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_42) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_49))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_54 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_42) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_52))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_57 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_45) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_55))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_60 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_45) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_891[3U] 
                                            >> 0xdU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_58))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1024 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_976) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_985)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8349(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8349\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1134 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_976) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1087)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1024 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_976) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_985)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1134 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_976) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_1087)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1024 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_976) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_985)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1134 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_976) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_1087)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_399 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_397)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_enq_ready));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_475 
        = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_397) 
                    - ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_enq_ready) 
                       & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_397))
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_460)
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_490)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater__DOT___T_5 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_enq_ready) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___T_18)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__TLMonitor__DOT___T_1035 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_278 
        = ((VL_ULL(0) == (VL_ULL(0x80000000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)))) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_enq_ready) 
              & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_397))
                  ? (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_421) 
                        >> 1U)) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_478_1))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_287 
        = ((VL_ULL(0) == (VL_ULL(0x80000000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)))) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_enq_ready) 
              & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_397))
                  ? (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_421) 
                        >> 2U)) : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_478_2))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8350(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8350\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_269 
        = ((VL_ULL(0) == (VL_ULL(0x80000000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_15_data)))) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_enq_ready) 
              & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_397))
                  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_421))
                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_478_0))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__tail_push_tail_data 
        = ((0x23U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests_io_push_bits_index))
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__tail
           [vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests_io_push_bits_index]
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_40 
        = (VL_ULL(0xfffffffff) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
                                  >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests_io_push_bits_index)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD_io_req_bits_sink 
        = (((IData)((0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__mshr_selectOH) 
                                    >> 8U)))) << 3U) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_443));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1912 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_1_io_in_b_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2__DOT___T_1828 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__TLMonitor_2_io_in_b_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_b_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_2__DOT___T_1828 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_b_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1828 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_b_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_b_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__TLMonitor_1__DOT___T_1912 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_b_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_boom_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1912 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_b_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_5 
        = (3U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T) 
                  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_27)
                      ? ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1030[5U] 
                          << 0x18U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1030[4U] 
                                       >> 8U)) : 0U)) 
                 & (~ (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_b_ready) 
                        & ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T)) 
                           | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1030[5U] 
                              >> 3U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_14)
                        : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__8351(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__8351\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1569 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_b_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1467 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_b_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__filter__DOT__TLMonitor__DOT___T_1569 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_b_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__TLMonitor__DOT___T_1467 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_b_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coherent_jbar__DOT__TLMonitor__DOT___T_1569 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_b_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_last 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_counter) 
           == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_single)
                ? 0U : (3U & (~ (0x1ffU & (((IData)(0x3fU) 
                                            << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_req_size)) 
                                           >> 4U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_15 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_latch_bypass)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s1_x_bypass)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC__DOT___T_41 
        = (0xffU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_199) 
                     >> (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_156))) 
                    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_bs_adr_valid)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__reqs_1_bankSel 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceC_io_bs_adr_valid)
            ? (0xffU & ((IData)(1U) << (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_156))))
            : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_43 
        = ((~ (IData)((0xfffffffU == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__used))) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests_io_push_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1707 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1703) 
                    >> 4U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT___T_1703)));
}
