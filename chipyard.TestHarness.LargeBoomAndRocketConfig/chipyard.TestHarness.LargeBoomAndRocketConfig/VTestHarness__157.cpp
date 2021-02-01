// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9088(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9088\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_edge_inst 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_62)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_edge_inst)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_60)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_edge_inst)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_edge_inst)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_pc_lob 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_62)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_pc_lob)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_60)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_pc_lob)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_pc_lob)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_fp_val 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_60)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_fp_val)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_58)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_fp_val)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_fp_val)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT___T_149 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__p2) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__ppred));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT___T_147 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT___T_118) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__ppred));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT___T_148 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__p1) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__ppred));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24_io_request 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__state))
            ? ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT___T_118) 
                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__p3)) 
                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__ppred)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_917)))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__state)) 
               & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__p1) 
                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__p2)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__ppred)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_917)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9089(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9089\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__ppred = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__ppred 
                = (1U & (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_70)))
                             ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__ppred))
                             : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_68)))
                                 ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__ppred))
                                 : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__ppred))))));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_1776 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_fu_code) 
           & (0x21U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue_io_empty)
                        ? 0x100U : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_1772 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22_io_request) 
           & (0U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_fu_code) 
                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_fu_types_0))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_fu_code 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_66)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_fu_code)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_64)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_fu_code)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_fu_code)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_rob_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_rob_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_rob_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_rob_idx)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_pdst = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_pdst 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_pdst)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_pdst)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_pdst)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9090(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9090\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_is_amo 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_is_amo)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_is_amo)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_is_amo)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_dst_rtype = 2U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_dst_rtype 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_dst_rtype)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_dst_rtype)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_dst_rtype)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_uses_stq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_uses_stq 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_uses_stq)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_uses_stq)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_uses_stq)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT___GEN_126 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_uop_pdst) 
                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__next_uop_prs1))) 
                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__next_uop_prs1))) 
                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15_io_in_uop_valid)
                        ? (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_41)))
                               ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__p1))
                               : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_39)))
                                   ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__p1))
                                   : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__p1)))))
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__p1)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9091(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9091\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT___GEN_127 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_uop_pdst) 
                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__next_uop_prs2))) 
                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__next_uop_prs2))) 
                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15_io_in_uop_valid)
                        ? (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_41)))
                               ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__p2))
                               : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_39)))
                                   ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__p2))
                                   : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__p2)))))
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__p2)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT___GEN_128 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_uop_pdst) 
                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__next_uop_prs3))) 
                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__next_uop_prs3))) 
                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15_io_in_uop_valid)
                        ? (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_41)))
                               ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__p3))
                               : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_39)))
                                   ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__p3))
                                   : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__p3)))))
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15__DOT__p3)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16_io_in_uop_bits_prs1 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_43)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_prs1)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_41)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_prs1)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__slot_uop_prs1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16_io_in_uop_bits_prs2 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_43)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_prs2)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_41)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_prs2)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__slot_uop_prs2)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9092(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9092\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16_io_in_uop_bits_prs3 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_43)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_prs3)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_41)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_prs3)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__slot_uop_prs3)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16_io_in_uop_valid 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_43)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19_io_will_be_valid)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_3978));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_4218 
        = ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_43)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19_io_will_be_valid)
            : ((1U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_41))) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_will_be_valid)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_stq_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_stq_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_stq_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_stq_idx)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_taken 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_64)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_taken)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_62)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_taken)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_taken)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17__DOT__slot_uop_ftq_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_54)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_ftq_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_52)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_ftq_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18__DOT__slot_uop_ftq_idx)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9093(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9093\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_108 
        = (0x17U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_110 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_6201 
        = ((0x15U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_21_valid)
            : ((0x14U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_20_valid)
                : ((0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_19_valid)
                    : ((0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_18_valid)
                        : ((0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_17_valid)
                            : ((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_16_valid)
                                : ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_15_valid)
                                    : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))
                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_14_valid)
                                        : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))
                                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_13_valid)
                                            : ((0xcU 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))
                                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_12_valid)
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_11_valid)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_10_valid)
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_9_valid)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_8_valid)
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_7_valid)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))
                                                         ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_6_valid)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))
                                                          ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_5_valid)
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))
                                                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_4_valid)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))
                                                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_3_valid)
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))
                                                             ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_2_valid)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))
                                                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_1_valid)
                                                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_0_valid))))))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9094(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9094\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2136 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_0_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2137 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_1_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2138 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_2_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2139 
        = ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_3_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2140 
        = ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_4_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2141 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_5_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2142 
        = ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_6_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2143 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_7_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2144 
        = ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_8_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2145 
        = ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_9_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2146 
        = ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_10_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2147 
        = ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_11_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2148 
        = ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_12_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2149 
        = ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_13_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2150 
        = ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_14_valid));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9095(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9095\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2151 
        = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_15_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2152 
        = ((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_16_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2153 
        = ((0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_17_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2154 
        = ((0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_18_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2155 
        = ((0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_19_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2156 
        = ((0x14U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_20_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2157 
        = ((0x15U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_21_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2158 
        = ((0x16U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_22_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_2159 
        = ((0x17U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail)) 
           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_23_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_111 
        = ((0x17U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))
            ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_tail))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__b2_uop_ldq_idx 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_51)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__brinfos_2_uop_ldq_idx)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_39)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__brinfos_1_uop_ldq_idx)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__brinfos_0_uop_ldq_idx)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_is_jal 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_58)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_is_jal)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_56)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_is_jal)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_is_jal)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9096(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9096\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_is_jalr 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_58)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_is_jalr)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_56)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_is_jalr)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_is_jalr)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_is_br 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_58)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_is_br)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_56)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_is_br)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_is_br)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18__DOT__slot_uop_rob_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_56)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_rob_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_54)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_rob_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_rob_idx)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17__DOT__slot_uop_br_tag 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_54)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_br_tag)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_52)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_br_tag)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18__DOT__slot_uop_br_tag)));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69134 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68941)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68941)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68941)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3630)
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68941))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68941)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68941))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9097(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9097\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69110 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68917)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68917)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68917)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68917))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68917))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68917)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68917))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69111 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68918)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68918)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68918)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68918))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68918))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68918)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68918))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69112 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68919)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68919)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68919)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68919))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68919))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68919)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68919))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69113 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68920)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68920)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68920)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68920))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68920))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68920)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68920))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9098(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9098\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69114 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68921)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68921)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68921)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68921))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68921))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68921)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68921))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69115 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68922)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68922)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68922)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68922))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68922))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68922)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68922))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69116 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68923)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68923)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68923)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68923))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68923))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68923)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68923))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69117 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68924)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68924)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68924)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68924))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68924))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68924)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68924))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9099(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9099\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69118 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68925)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68925)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68925)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68925))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68925))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68925)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68925))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69119 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68926)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68926)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68926)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68926))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68926))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68926)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68926))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69120 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68927)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68927)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68927)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68927))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68927))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68927)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68927))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69121 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68928)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68928)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68928)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68928))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68928))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68928)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68928))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9100(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9100\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69122 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68929)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68929)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68929)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68929))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68929))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68929)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68929))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69123 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68930)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68930)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68930)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68930))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68930))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68930)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68930))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69124 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68931)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68931)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68931)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68931))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68931))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68931)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68931))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69125 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68932)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68932)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68932)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68932))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68932))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68932)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68932))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9101(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9101\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69126 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68933)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68933)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68933)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((0x10U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68933))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68933))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68933)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68933))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69127 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68934)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68934)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68934)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((0x11U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68934))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68934))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68934)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68934))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69128 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68935)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68935)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68935)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((0x12U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68935))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68935))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68935)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68935))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69129 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68936)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68936)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68936)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((0x13U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68936))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68936))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68936)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68936))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9102(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9102\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69130 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68937)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68937)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68937)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68937))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68937))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68937)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68937))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69131 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68938)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68938)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68938)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68938))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68938))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68938)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68938))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69132 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68939)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68939)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68939)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68939))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68939))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68939)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68939))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69133 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68940)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68940)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68940)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)
                                ? ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68940))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68940))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68940)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68940))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9103(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9103\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69135 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3584)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68942)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3596)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68942)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3611)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3616)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68942)
                        : ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3627)) 
                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68942))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68942)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_68942))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT___T_9 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23_io_grant) 
            & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__state))) 
           | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT___T_5) 
                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__p1)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__p2)) 
              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__ppred)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9104(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9104\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24_io_uop_lrs2_rtype 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__state))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT___T_147)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_lrs2_rtype)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT___T_148)
                    ? 2U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_lrs2_rtype)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_lrs2_rtype));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24_io_uop_lrs1_rtype 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__state))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT___T_147)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_lrs1_rtype)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT___T_148)
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_lrs1_rtype)
                    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT___T_149)
                        ? 2U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_lrs1_rtype))))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_lrs1_rtype));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24_io_uop_uopc 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__state))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT___T_147)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_uopc)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT___T_148)
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_uopc)
                    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT___T_149)
                        ? 3U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_uopc))))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_uopc));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9105(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9105\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__next_uop_prs1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16_io_in_uop_bits_prs1)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__slot_uop_prs1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__next_uop_prs2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16_io_in_uop_bits_prs2)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__slot_uop_prs2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__next_uop_prs3 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16_io_in_uop_bits_prs3)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__slot_uop_prs3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45 
        = (((0U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_43))) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__state)))
            ? 1U : (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_43) 
                         >> 2U)) & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__state)))
                     ? (0xeU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_43) 
                                << 1U)) : (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_43))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9106(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9106\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69327 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69134)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69134)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69134)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3714)
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69134))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69134)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69134))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69303 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69110)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69110)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69110)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69110))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69110))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69110)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69110))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69304 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69111)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69111)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69111)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69111))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69111))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69111)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69111))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9107(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9107\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69305 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69112)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69112)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69112)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69112))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69112))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69112)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69112))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69306 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69113)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69113)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69113)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69113))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69113))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69113)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69113))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69307 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69114)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69114)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69114)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69114))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69114))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69114)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69114))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69308 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69115)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69115)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69115)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69115))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69115))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69115)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69115))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9108(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9108\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69309 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69116)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69116)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69116)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69116))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69116))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69116)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69116))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69310 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69117)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69117)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69117)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69117))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69117))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69117)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69117))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69311 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69118)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69118)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69118)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69118))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69118))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69118)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69118))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69312 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69119)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69119)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69119)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69119))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69119))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69119)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69119))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9109(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9109\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69313 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69120)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69120)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69120)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69120))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69120))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69120)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69120))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69314 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69121)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69121)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69121)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69121))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69121))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69121)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69121))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69315 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69122)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69122)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69122)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69122))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69122))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69122)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69122))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69316 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69123)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69123)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69123)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69123))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69123))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69123)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69123))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9110(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9110\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69317 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69124)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69124)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69124)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69124))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69124))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69124)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69124))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69318 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69125)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69125)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69125)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69125))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69125))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69125)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69125))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69319 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69126)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69126)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69126)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((0x10U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69126))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69126))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69126)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69126))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69320 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69127)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69127)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69127)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((0x11U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69127))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69127))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69127)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69127))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9111(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9111\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69321 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69128)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69128)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69128)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((0x12U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69128))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69128))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69128)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69128))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69322 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69129)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69129)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69129)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((0x13U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69129))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69129))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69129)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69129))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69323 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69130)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69130)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69130)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69130))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69130))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69130)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69130))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69324 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69131)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69131)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69131)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69131))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69131))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69131)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69131))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9112(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9112\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69325 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69132)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69132)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69132)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69132))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69132))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69132)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69132))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69326 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69133)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69133)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69133)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)
                                ? ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69133))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69133))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69133)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69133))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69328 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3668)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69135)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3680)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69135)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3695)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3700)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69135)
                        : ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3711)) 
                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69135))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69135)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69135))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_pdst = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_pdst 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_72)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29__DOT__slot_uop_pdst)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_70)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__slot_uop_pdst)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_pdst)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9113(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9113\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23_io_out_uop_uopc 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_1163)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_uopc)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT___T_9)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_uopc)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT___T_5)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__p1)
                        ? 3U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_uopc))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_uopc))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23_io_out_uop_iw_state 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT___T_75))
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_1163)
                     ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT___T_9)
                              ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT___T_5)
                                       ? 1U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__state)))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_fp_val 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_51)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_fp_val)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_49)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_fp_val)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_fp_val)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_uses_ldq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_uses_ldq 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_51)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_uses_ldq)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_49)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_uses_ldq)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_uses_ldq)));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_imm_packed 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_51)))
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_imm_packed
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_49)))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_imm_packed
                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_imm_packed));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9114(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9114\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_mem_cmd 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_51)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_mem_cmd)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_49)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_mem_cmd)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_mem_cmd)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_ldst_val 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_72)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29__DOT__slot_uop_ldst_val)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_70)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__slot_uop_ldst_val)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_ldst_val)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_mem_cmd 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_72)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29__DOT__slot_uop_mem_cmd)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_70)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__slot_uop_mem_cmd)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_mem_cmd)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_bypassable = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_bypassable 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_72)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29__DOT__slot_uop_bypassable)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_70)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__slot_uop_bypassable)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_bypassable)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_dst_rtype = 2U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_dst_rtype 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_72)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29__DOT__slot_uop_dst_rtype)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_70)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__slot_uop_dst_rtype)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_dst_rtype)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9115(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9115\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_is_amo 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_62)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_is_amo)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_60)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_is_amo)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_is_amo)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_imm_packed 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_66)))
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_imm_packed
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_64)))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_imm_packed
                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_imm_packed));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_uses_stq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_uses_stq 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_62)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_uses_stq)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_60)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_uses_stq)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_uses_stq)));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_is_sfb 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_68)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_is_sfb)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_66)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_is_sfb)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_is_sfb)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_is_rvc 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_64)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_is_rvc)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_62)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_is_rvc)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_is_rvc)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9116(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9116\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_edge_inst 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_64)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_edge_inst)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_62)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_edge_inst)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_edge_inst)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_pc_lob 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_64)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_pc_lob)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_62)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_pc_lob)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_pc_lob)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_fp_val 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_62)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_fp_val)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_60)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_fp_val)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_fp_val)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT___T_149 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__p2) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__ppred));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT___T_147 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT___T_118) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__ppred));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT___T_148 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__p1) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__ppred));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25_io_request 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__state))
            ? ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT___T_118) 
                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__p3)) 
                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__ppred)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_917)))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__state)) 
               & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__p1) 
                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__p2)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__ppred)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_917)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9117(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9117\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__ppred = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__ppred 
                = (1U & (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_72)))
                             ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29__DOT__ppred))
                             : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_70)))
                                 ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__ppred))
                                 : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__ppred))))));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_1821 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_fu_code) 
           & (0x21U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue_io_empty)
                        ? 0x100U : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_1817 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23_io_request) 
           & (0U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_fu_code) 
                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_fu_types_0))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_fu_code 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_68)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_fu_code)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_66)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_fu_code)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_fu_code)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_rob_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_49)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_rob_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_rob_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_rob_idx)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_pdst = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_pdst 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_49)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_pdst)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_pdst)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_pdst)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9118(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9118\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_is_amo 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_49)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_is_amo)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_is_amo)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_is_amo)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_dst_rtype = 2U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_dst_rtype 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_49)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_dst_rtype)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_dst_rtype)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_dst_rtype)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_uses_stq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_uses_stq 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_49)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_uses_stq)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_uses_stq)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_uses_stq)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT___GEN_126 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_uop_pdst) 
                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__next_uop_prs1))) 
                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__next_uop_prs1))) 
                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16_io_in_uop_valid)
                        ? (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_43)))
                               ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__p1))
                               : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_41)))
                                   ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__p1))
                                   : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__p1)))))
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__p1)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9119(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9119\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT___GEN_127 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_uop_pdst) 
                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__next_uop_prs2))) 
                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__next_uop_prs2))) 
                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16_io_in_uop_valid)
                        ? (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_43)))
                               ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__p2))
                               : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_41)))
                                   ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__p2))
                                   : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__p2)))))
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__p2)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT___GEN_128 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_uop_pdst) 
                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__next_uop_prs3))) 
                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__next_uop_prs3))) 
                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16_io_in_uop_valid)
                        ? (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_43)))
                               ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__p3))
                               : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_41)))
                                   ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__p3))
                                   : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__p3)))))
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16__DOT__p3)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___T_562 
        = (7U & ((3U & ((1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_12_io_will_be_valid)) 
                                | (0U != (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_29)))) 
                               & (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_35)))
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15_io_will_be_valid)
                                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_3018))))) 
                        + ((1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_13_io_will_be_valid)) 
                                   | (0U != (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_31)))) 
                                  & (~ ((4U == (7U 
                                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_37)))
                                         ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16_io_will_be_valid)
                                         : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_3258))))) 
                           + (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_14_io_will_be_valid)) 
                                     | (0U != (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_33)))) 
                                    & (~ ((4U == (7U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_39)))
                                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17_io_will_be_valid)
                                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_3498)))))))) 
                 + (3U & ((1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_15_io_will_be_valid)) 
                                  | (0U != (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_35)))) 
                                 & (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_41)))
                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_will_be_valid)
                                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_3738))))) 
                          + ((1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_16_io_will_be_valid)) 
                                     | (0U != (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_37)))) 
                                    & (~ ((4U == (7U 
                                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_43)))
                                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19_io_will_be_valid)
                                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_3978))))) 
                             + (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17_io_will_be_valid)) 
                                       | (0U != (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_39)))) 
                                      & (~ ((4U == 
                                             (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45)))
                                             ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20_io_will_be_valid)
                                             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_4218))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9120(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9120\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17_io_in_uop_bits_prs1 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_prs1)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_43)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_prs1)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_prs1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17_io_in_uop_bits_prs2 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_prs2)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_43)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_prs2)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_prs2)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17_io_in_uop_bits_prs3 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_prs3)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_43)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_prs3)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_prs3)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17_io_in_uop_valid 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20_io_will_be_valid)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_4218));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_4458 
        = ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20_io_will_be_valid)
            : ((1U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_43))) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19_io_will_be_valid)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_stq_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_49)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_stq_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_stq_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_stq_idx)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9121(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9121\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_taken 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_66)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_taken)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_64)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_taken)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_taken)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18__DOT__slot_uop_ftq_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_56)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_ftq_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_54)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_ftq_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_ftq_idx)));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__brinfos_2_uop_ldq_idx 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_3_ldq_idx;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__brinfos_1_uop_ldq_idx 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_2_ldq_idx;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__brinfos_0_uop_ldq_idx 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_ldq_idx;
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_is_jal 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_60)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_is_jal)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_58)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_is_jal)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_is_jal)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_is_jalr 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_60)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_is_jalr)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_58)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_is_jalr)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_is_jalr)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_is_br 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_60)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_is_br)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_58)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_is_br)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_is_br)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9122(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9122\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_rob_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_58)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_rob_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_56)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_rob_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_rob_idx)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18__DOT__slot_uop_br_tag 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_56)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_br_tag)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_54)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_br_tag)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_br_tag)));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69520 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69327)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69327)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69327)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3798)
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69327))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69327)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69327))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69496 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69303)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69303)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69303)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69303))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69303))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69303)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69303))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69497 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69304)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69304)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69304)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69304))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69304))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69304)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69304))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9123(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9123\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69498 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69305)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69305)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69305)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69305))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69305))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69305)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69305))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69499 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69306)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69306)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69306)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69306))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69306))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69306)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69306))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69500 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69307)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69307)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69307)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69307))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69307))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69307)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69307))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69501 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69308)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69308)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69308)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69308))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69308))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69308)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69308))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9124(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9124\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69502 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69309)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69309)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69309)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69309))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69309))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69309)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69309))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69503 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69310)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69310)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69310)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69310))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69310))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69310)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69310))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69504 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69311)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69311)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69311)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69311))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69311))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69311)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69311))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69505 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69312)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69312)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69312)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69312))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69312))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69312)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69312))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9125(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9125\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69506 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69313)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69313)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69313)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69313))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69313))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69313)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69313))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69507 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69314)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69314)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69314)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69314))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69314))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69314)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69314))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69508 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69315)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69315)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69315)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69315))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69315))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69315)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69315))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69509 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69316)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69316)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69316)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69316))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69316))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69316)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69316))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9126(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9126\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69510 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69317)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69317)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69317)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69317))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69317))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69317)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69317))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69511 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69318)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69318)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69318)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69318))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69318))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69318)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69318))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69512 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69319)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69319)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69319)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((0x10U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69319))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69319))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69319)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69319))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69513 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69320)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69320)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69320)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((0x11U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69320))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69320))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69320)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69320))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9127(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9127\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69514 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69321)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69321)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69321)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((0x12U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69321))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69321))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69321)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69321))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69515 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69322)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69322)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69322)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((0x13U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69322))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69322))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69322)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69322))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69516 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69323)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69323)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69323)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69323))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69323))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69323)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69323))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69517 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69324)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69324)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69324)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69324))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69324))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69324)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69324))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9128(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9128\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69518 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69325)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69325)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69325)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69325))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69325))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69325)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69325))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69519 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69326)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69326)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69326)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)
                                ? ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69326))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69326))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69326)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69326))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69521 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3752)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69328)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3764)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69328)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3779)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3784)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69328)
                        : ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3795)) 
                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69328))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69328)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69328))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9129(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9129\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25_io_uop_lrs2_rtype 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__state))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT___T_147)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_lrs2_rtype)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT___T_148)
                    ? 2U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_lrs2_rtype)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_lrs2_rtype));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25_io_uop_lrs1_rtype 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__state))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT___T_147)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_lrs1_rtype)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT___T_148)
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_lrs1_rtype)
                    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT___T_149)
                        ? 2U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_lrs1_rtype))))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_lrs1_rtype));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9130(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9130\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25_io_uop_uopc 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__state))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT___T_147)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_uopc)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT___T_148)
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_uopc)
                    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT___T_149)
                        ? 3U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_uopc))))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_uopc));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__next_uop_prs1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17_io_in_uop_bits_prs1)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__slot_uop_prs1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__next_uop_prs2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17_io_in_uop_bits_prs2)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__slot_uop_prs2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__next_uop_prs3 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17_io_in_uop_bits_prs3)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__slot_uop_prs3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47 
        = (((0U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45))) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__state)))
            ? 1U : (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45) 
                         >> 2U)) & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__state)))
                     ? (0xeU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45) 
                                << 1U)) : (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9131(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9131\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69713 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69520)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69520)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69520)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3882)
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69520))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69520)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69520))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69689 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69496)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69496)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69496)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69496))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69496))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69496)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69496))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9132(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9132\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69690 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69497)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69497)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69497)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69497))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69497))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69497)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69497))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69691 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69498)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69498)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69498)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69498))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69498))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69498)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69498))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69692 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69499)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69499)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69499)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69499))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69499))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69499)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69499))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69693 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69500)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69500)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69500)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69500))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69500))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69500)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69500))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9133(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9133\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69694 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69501)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69501)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69501)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69501))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69501))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69501)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69501))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69695 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69502)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69502)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69502)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69502))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69502))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69502)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69502))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69696 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69503)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69503)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69503)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69503))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69503))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69503)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69503))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69697 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69504)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69504)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69504)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69504))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69504))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69504)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69504))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9134(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9134\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69698 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69505)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69505)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69505)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69505))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69505))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69505)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69505))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69699 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69506)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69506)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69506)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69506))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69506))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69506)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69506))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69700 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69507)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69507)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69507)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69507))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69507))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69507)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69507))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69701 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69508)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69508)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69508)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69508))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69508))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69508)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69508))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9135(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9135\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69702 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69509)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69509)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69509)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69509))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69509))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69509)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69509))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69703 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69510)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69510)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69510)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69510))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69510))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69510)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69510))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69704 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69511)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69511)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69511)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69511))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69511))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69511)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69511))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69705 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69512)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69512)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69512)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((0x10U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69512))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69512))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69512)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69512))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9136(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9136\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69706 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69513)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69513)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69513)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((0x11U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69513))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69513))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69513)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69513))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69707 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69514)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69514)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69514)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((0x12U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69514))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69514))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69514)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69514))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69708 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69515)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69515)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69515)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((0x13U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69515))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69515))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69515)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69515))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69709 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69516)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69516)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69516)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69516))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69516))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69516)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69516))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9137(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9137\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69710 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69517)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69517)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69517)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69517))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69517))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69517)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69517))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69711 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69518)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69518)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69518)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69518))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69518))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69518)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69518))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69712 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69519)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69519)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69519)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)
                                ? ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69519))
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69519))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69519)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69519))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3836)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69521)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3848)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69521)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3863)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3868)
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69521)
                        : ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0))
                            ? ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3879)) 
                               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69521))
                            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69521)))
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69521))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9138(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9138\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_pdst = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_pdst 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_74)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_30__DOT__slot_uop_pdst)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_72)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29__DOT__slot_uop_pdst)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__slot_uop_pdst)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_fp_val 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_53)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_fp_val)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_51)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_fp_val)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_fp_val)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_uses_ldq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_uses_ldq 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_53)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_uses_ldq)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_51)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_uses_ldq)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_uses_ldq)));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_imm_packed 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_53)))
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_imm_packed
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_51)))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_imm_packed
                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_imm_packed));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9139(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9139\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_mem_cmd 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_53)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_mem_cmd)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_51)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_mem_cmd)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_mem_cmd)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_ldst_val 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_74)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_30__DOT__slot_uop_ldst_val)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_72)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29__DOT__slot_uop_ldst_val)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__slot_uop_ldst_val)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_mem_cmd 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_74)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_30__DOT__slot_uop_mem_cmd)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_72)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29__DOT__slot_uop_mem_cmd)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__slot_uop_mem_cmd)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_bypassable = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_bypassable 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_74)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_30__DOT__slot_uop_bypassable)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_72)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29__DOT__slot_uop_bypassable)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__slot_uop_bypassable)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_dst_rtype = 2U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_dst_rtype 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_74)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_30__DOT__slot_uop_dst_rtype)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_72)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29__DOT__slot_uop_dst_rtype)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__slot_uop_dst_rtype)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9140(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9140\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_is_amo 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_64)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_is_amo)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_62)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_is_amo)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_is_amo)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_imm_packed 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_68)))
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_imm_packed
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_66)))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_imm_packed
                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_imm_packed));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_uses_stq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_uses_stq 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_64)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_uses_stq)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_62)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_uses_stq)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_uses_stq)));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_is_sfb 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_70)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__slot_uop_is_sfb)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_68)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_is_sfb)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_is_sfb)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_is_rvc 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_66)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_is_rvc)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_64)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_is_rvc)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_is_rvc)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9141(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9141\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_edge_inst 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_66)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_edge_inst)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_64)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_edge_inst)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_edge_inst)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_pc_lob 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_66)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_pc_lob)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_64)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_pc_lob)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_pc_lob)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_fp_val = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_fp_val 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_64)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_fp_val)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_62)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_fp_val)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_fp_val)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT___T_149 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__p2) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__ppred));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT___T_147 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT___T_118) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__ppred));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT___T_148 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__p1) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__ppred));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26_io_request 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__state))
            ? ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT___T_118) 
                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__p3)) 
                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__ppred)) 
               & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_917)))
            : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__state)) 
               & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__p1) 
                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__p2)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__ppred)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_917)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9142(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9142\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__ppred = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__ppred 
                = (1U & (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_74)))
                             ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_30__DOT__ppred))
                             : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_72)))
                                 ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29__DOT__ppred))
                                 : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__ppred))))));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_1866 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_fu_code) 
           & (0x21U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__BranchKillableQueue_io_empty)
                        ? 0x100U : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_1862 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24_io_request) 
           & (0U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_fu_code) 
                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit_io_fu_types_0))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_fu_code 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_70)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__slot_uop_fu_code)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_68)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_fu_code)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_fu_code)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_rob_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_51)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_rob_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_49)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_rob_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_rob_idx)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_pdst = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_pdst 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_51)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_pdst)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_49)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_pdst)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_pdst)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9143(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9143\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_is_amo 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_51)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_is_amo)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_49)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_is_amo)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_is_amo)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_dst_rtype = 2U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_dst_rtype 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_51)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_dst_rtype)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_49)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_dst_rtype)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_dst_rtype)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_uses_stq = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_uses_stq 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_51)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_uses_stq)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_49)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_uses_stq)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_uses_stq)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT___GEN_126 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_uop_pdst) 
                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__next_uop_prs1))) 
                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__next_uop_prs1))) 
                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17_io_in_uop_valid)
                        ? (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45)))
                               ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__p1))
                               : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_43)))
                                   ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__p1))
                                   : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__p1)))))
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__p1)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9144(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9144\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT___GEN_127 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_uop_pdst) 
                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__next_uop_prs2))) 
                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__next_uop_prs2))) 
                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17_io_in_uop_valid)
                        ? (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45)))
                               ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__p2))
                               : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_43)))
                                   ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__p2))
                                   : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__p2)))))
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__p2)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT___GEN_128 
        = (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline_io_wakeups_1_valid) 
                  & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_uop_pdst) 
                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__next_uop_prs3))) 
                 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_valid) 
                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_uop_pdst) 
                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__next_uop_prs3))) 
                    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17_io_in_uop_valid)
                        ? (~ ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45)))
                               ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__p3))
                               : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_43)))
                                   ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__p3))
                                   : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__p3)))))
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__p3)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_in_uop_bits_prs1 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_prs1)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_prs1)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_prs1)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_in_uop_bits_prs2 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_prs2)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_prs2)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_prs2)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9145(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9145\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_in_uop_bits_prs3 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_prs3)
            : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_prs3)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_prs3)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_in_uop_valid 
        = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21_io_will_be_valid)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_4458));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_4698 
        = ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47)))
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21_io_will_be_valid)
            : ((1U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45))) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20_io_will_be_valid)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__slot_uop_stq_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_51)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__slot_uop_stq_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_49)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__slot_uop_stq_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__slot_uop_stq_idx)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_taken 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_68)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_taken)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_66)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_taken)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__slot_uop_taken)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_ftq_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_58)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_ftq_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_56)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_ftq_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_ftq_idx)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9146(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9146\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_3_ldq_idx 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT___T_90)
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_3_ldq_idx));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_2_ldq_idx 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT___T_75)
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_2_ldq_idx));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_ldq_idx 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT___T_60)
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_1_ldq_idx));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_is_jal 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_62)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_is_jal)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_60)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_is_jal)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_is_jal)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_is_jalr 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_62)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_is_jalr)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_60)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_is_jalr)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_is_jalr)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_is_br 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_62)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__slot_uop_is_br)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_60)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_is_br)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_is_br)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_rob_idx 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_60)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__slot_uop_rob_idx)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_58)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_rob_idx)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_rob_idx)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9147(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9147\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19_io_in_uop_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_br_tag 
            = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_58)))
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__slot_uop_br_tag)
                : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_56)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__slot_uop_br_tag)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__slot_uop_br_tag)));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69715 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69689));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69716 
        = ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69690));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69717 
        = ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69691));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69718 
        = ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69692));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69719 
        = ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69693));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69720 
        = ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69694));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69721 
        = ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69695));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69722 
        = ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69696));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69723 
        = ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69697));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69724 
        = ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69698));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69725 
        = ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69699));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69726 
        = ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69700));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9148(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9148\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69727 
        = ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69701));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69728 
        = ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69702));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69729 
        = ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69703));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69730 
        = ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69704));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69731 
        = ((0x10U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69705));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69732 
        = ((0x11U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69706));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69733 
        = ((0x12U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69707));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69734 
        = ((0x13U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69708));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69735 
        = ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69709));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69736 
        = ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69710));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69737 
        = ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69711));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69738 
        = ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__lcam_ldq_idx_0)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_69712));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4949 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4944) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_23_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4923)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4904 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4899) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_22_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4878)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9149(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9149\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4859 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4854) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_21_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4833)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4814 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4809) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_20_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4788)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4769 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4764) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_19_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4743)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4724 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4719) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_18_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4698)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4679 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4674) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_17_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4653)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4634 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4629) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_16_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4608)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4589 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4584) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_15_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4563)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9150(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9150\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4544 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4539) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_14_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4518)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4499 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4494) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_13_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4473)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4454 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4449) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_12_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4428)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4409 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4404) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_11_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4383)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4364 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4359) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_10_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4338)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4319 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4314) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_9_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4293)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4274 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4269) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_8_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4248)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9151(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9151\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4229 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4224) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_7_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4203)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4184 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4179) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_6_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4158)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4139 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4134) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_5_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4113)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4094 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4089) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_4_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4068)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4049 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4044) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_3_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4023)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4004 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3999) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_2_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3978)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3959 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3954) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_1_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3933)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9152(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9152\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3914 
        = (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3909) 
              == (0xffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1844))) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_0_bits_uop_is_fence))) 
            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3888)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_forward_0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9153(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9153\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26_io_uop_lrs2_rtype 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__state))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT___T_147)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_lrs2_rtype)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT___T_148)
                    ? 2U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_lrs2_rtype)))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_lrs2_rtype));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26_io_uop_lrs1_rtype 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__state))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT___T_147)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_lrs1_rtype)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT___T_148)
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_lrs1_rtype)
                    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT___T_149)
                        ? 2U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_lrs1_rtype))))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_lrs1_rtype));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26_io_uop_uopc 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__state))
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT___T_147)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_uopc)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT___T_148)
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_uopc)
                    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT___T_149)
                        ? 3U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_uopc))))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__slot_uop_uopc));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9154(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9154\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__next_uop_prs1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_in_uop_bits_prs1)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_prs1));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__next_uop_prs2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_in_uop_bits_prs2)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_prs2));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__next_uop_prs3 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_in_uop_valid)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_in_uop_bits_prs3)
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_prs3));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_49 
        = (((0U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47))) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__state)))
            ? 1U : (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47) 
                         >> 2U)) & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__state)))
                     ? (0xeU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47) 
                                << 1U)) : (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__9155(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__9155\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_23 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4943) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4949) 
              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4955) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4959))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_22 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4898) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4904) 
              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4910) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4914))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_21 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4853) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4859) 
              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4865) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4869))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_20 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4808) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4814) 
              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4820) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4824))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_19 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4763) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4769) 
              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4775) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4779))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_18 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4718) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4724) 
              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4730) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4734))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_17 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4673) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4679) 
              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4685) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4689))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_16 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4628) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4634) 
              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4640) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4644))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_15 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4583) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4589) 
              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4595) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4599))));
}
