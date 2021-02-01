// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3672(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3672\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_0_uopc 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_uopc;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_0_br_mask 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_73;
        } else {
            if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_0_br_mask 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu_io_resp_bits_uop_br_mask;
            } else {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__valids_0) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_0_br_mask 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_16;
                }
            }
        }
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__valids_0) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_0_br_mask 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_16;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_0_rob_idx 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_rob_idx;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_0_stq_idx 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_stq_idx;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_0_pdst 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_pdst;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_0_is_amo 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_is_amo;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_0_uses_stq 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_uses_stq;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_0_dst_rtype 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_dst_rtype;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_1_uopc 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_uopc;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_1_br_mask 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_73;
        } else {
            if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_1_br_mask 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu_io_resp_bits_uop_br_mask;
            } else {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__valids_1) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_1_br_mask 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_25;
                }
            }
        }
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__valids_1) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_1_br_mask 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_25;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_1_rob_idx 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_rob_idx;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_1_stq_idx 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_stq_idx;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_1_pdst 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_pdst;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_1_is_amo 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_is_amo;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_1_uses_stq 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_uses_stq;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_1_dst_rtype 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_dst_rtype;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_2_uopc 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_uopc;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_2_br_mask 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_73;
        } else {
            if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_2_br_mask 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu_io_resp_bits_uop_br_mask;
            } else {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__valids_2) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_2_br_mask 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_34;
                }
            }
        }
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__valids_2) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_2_br_mask 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_34;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_2_rob_idx 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_rob_idx;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_2_stq_idx 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_stq_idx;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_2_pdst 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_pdst;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_2_is_amo 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_is_amo;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_2_uses_stq 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_uses_stq;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_2_dst_rtype 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_dst_rtype;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_3_uopc 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_uopc;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_3_br_mask 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_73;
        } else {
            if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_3_br_mask 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu_io_resp_bits_uop_br_mask;
            } else {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__valids_3) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_3_br_mask 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_43;
                }
            }
        }
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__valids_3) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_3_br_mask 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_43;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_3_rob_idx 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_rob_idx;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_3_stq_idx 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_stq_idx;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_3_pdst 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_pdst;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_3_is_amo 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_is_amo;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_3_uses_stq 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_uses_stq;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_3_dst_rtype 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_dst_rtype;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_4_uopc 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_uopc;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_4_br_mask 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_73;
        } else {
            if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_4_br_mask 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu_io_resp_bits_uop_br_mask;
            } else {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__valids_4) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_4_br_mask 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_52;
                }
            }
        }
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__valids_4) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_4_br_mask 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_52;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_4_rob_idx 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_rob_idx;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_4_stq_idx 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_stq_idx;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_4_pdst 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_pdst;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_4_is_amo 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_is_amo;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_4_uses_stq 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_uses_stq;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_4_dst_rtype 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_dst_rtype;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_5_uopc 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_uopc;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_5_br_mask 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_73;
        } else {
            if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_5_br_mask 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu_io_resp_bits_uop_br_mask;
            } else {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__valids_5) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_5_br_mask 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_61;
                }
            }
        }
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__valids_5) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_5_br_mask 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_61;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_5_rob_idx 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_rob_idx;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_5_stq_idx 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_stq_idx;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_5_pdst 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_pdst;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_5_is_amo 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_is_amo;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_5_uses_stq 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_uses_stq;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_5_dst_rtype 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_dst_rtype;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_6_uopc 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_uopc;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_6_br_mask 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_73;
        } else {
            if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_6_br_mask 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu_io_resp_bits_uop_br_mask;
            } else {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__valids_6) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_6_br_mask 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_70;
                }
            }
        }
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__valids_6) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_6_br_mask 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT___T_70;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_6_rob_idx 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_rob_idx;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_6_stq_idx 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_stq_idx;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_6_pdst 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_pdst;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_6_is_amo 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_is_amo;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_6_uses_stq 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_uses_stq;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__do_enq) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__value))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__BranchKillableQueue__DOT__uops_6_dst_rtype 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___T_2_3_dst_rtype;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3673(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3673\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_16_bits_addr_is_virtual 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_13_bits_observed 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2996) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_218)
               ? ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_194)) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29317))
               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29317)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_15_bits_addr_is_virtual 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_12_bits_observed 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2912) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_218)
               ? ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_194)) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29316))
               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29316)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_14_bits_addr_is_virtual 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_11_bits_observed 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2828) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_218)
               ? ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_194)) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29315))
               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29315)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_13_bits_addr_is_virtual 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_10_bits_observed 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2744) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_218)
               ? ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_194)) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29314))
               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29314)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_12_bits_addr_is_virtual 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3674(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3674\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_9_bits_observed 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2660) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_218)
               ? ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_194)) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29313))
               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29313)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_11_bits_addr_is_virtual 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_8_bits_observed 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2576) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_218)
               ? ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_194)) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29312))
               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29312)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_10_bits_addr_is_virtual 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_observed 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2492) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_218)
               ? ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_194)) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29311))
               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29311)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_9_bits_addr_is_virtual 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_observed 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2408) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_218)
               ? ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_194)) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29310))
               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29310)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_8_bits_addr_is_virtual 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_observed 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2324) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_218)
               ? ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_194)) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29309))
               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29309)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3675(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3675\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_addr_is_virtual 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_observed 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2240) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_218)
               ? ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_194)) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29308))
               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29308)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_addr_is_virtual 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_observed 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2156) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_218)
               ? ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_194)) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29307))
               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29307)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_addr_is_virtual 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_observed 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2072) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_218)
               ? ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_194)) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29306))
               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29306)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_addr_is_virtual 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_observed 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1988) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_218)
               ? ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_194)) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29305))
               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29305)));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_addr_is_virtual 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3676(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3676\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_observed 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1904) 
           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_218)
               ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_194)) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29304))
               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_29304)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_tlb_uncacheable_0 
        = (1U & (~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dtlb__DOT___T_1814)))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0x17U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_23_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0x16U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_22_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_addr_is_virtual 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0x15U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_21_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0x14U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_20_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_19_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_18_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_17_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_16_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3677(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3677\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_15_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_14_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_13_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_8_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3678(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3678\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_9_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_10_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_11_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_12_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_addr_is_uncacheable 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1603;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_addr_is_virtual 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3875 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78648));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3791 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78647));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3707 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78646));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3623 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78645));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3539 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78644));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3455 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78643));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3371 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78642));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3679(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3679\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3287 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78641));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3203 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78640));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3119 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78639));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_3035 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78638));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2951 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78637));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2867 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78636));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2783 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78635));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2699 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78634));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2615 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78633));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2531 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78632));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2447 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78631));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2363 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78630));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2279 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78629));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2195 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78628));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2111 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78627));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1589) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1590))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_addr_is_virtual 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_miss_0;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_2027 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78626));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3680(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3680\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1943 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78625));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_stq_idx 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_stq_idx;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_23 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_23;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_22 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_22;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_21 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_21;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_20 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_20;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_19 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_19;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_17 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_17;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_16 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_16;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_15 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_15;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_13 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_13;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_12 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_12;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_11 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_11;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_10 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_10;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_9 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_9;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_8 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_8;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_7 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_7;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_5 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_5;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_4 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_4;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_6 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_6;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_18 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_18;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_0 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_1 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_1;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_2 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_2;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_3 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_3;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3681(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3681\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p2_block_load_mask_14 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__p1_block_load_mask_14;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_686 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s1_send_resp_or_nack_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_631 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s1_send_resp_or_nack_0;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_23 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((0x17U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((0x17U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((0x17U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_21 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((0x15U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((0x15U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((0x15U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_18 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_17 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3682(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3682\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_16 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_15 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_13 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_11 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3683(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3683\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_10 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_9 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_8 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_7 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3684(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3684\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_5 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_4 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_0 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_6 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3685(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3685\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_20 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((0x14U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((0x14U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((0x14U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_19 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_1 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3686(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3686\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_3 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_12 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_14 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__s1_executing_loads_22 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
            ? ((0x16U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx)) 
               & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                ? ((0x16U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_retry_idx)) 
                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))
                : ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)) 
                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0) 
                      & ((0x16U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx)) 
                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_fire_0))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3687(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3687\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__state = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT___T_1937) {
            if ((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT___T_1912)) 
                       | (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__resp_arb__DOT___T_2)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__full))) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0_io_resp_valid))))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__state = 0U;
            } else {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT___T_1987) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__state = 3U;
                } else {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT___T_1985) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__state = 2U;
                    } else {
                        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT___T_1984) {
                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__state = 1U;
                        }
                    }
                }
            }
        } else {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT___T_1987) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__state = 3U;
            } else {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT___T_1985) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__state = 2U;
                } else {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT___T_1984) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__state = 1U;
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3688(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3688\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshr_alloc_idx 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_req_pri_rdy) 
            & (0U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshr_head)))
            ? 0U : (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_req_pri_rdy) 
                     & (1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshr_head)))
                     ? 1U : (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2_io_req_pri_rdy) 
                              & (2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshr_head)))
                              ? 2U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3_io_req_pri_rdy)
                                       ? 3U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_req_pri_rdy)
                                                ? 0U
                                                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_req_pri_rdy)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2_io_req_pri_rdy)
                                                     ? 2U
                                                     : 3U)))))));
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__ram_is_hella__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__ram_is_hella__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__ram_is_hella__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__ram_is_hella__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__ram_is_hella__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__ram_is_hella__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__ram_is_hella__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__ram_is_hella__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__ram_is_hella__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__ram_is_hella__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__ram_is_hella__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__ram_is_hella__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__ram_sdq_id__v0 
            = ((1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__sdq_val)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_49)
                : 0U);
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__ram_sdq_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__ram_sdq_id__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3689(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3689\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__ram_sdq_id__v0 
            = ((1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__sdq_val)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_49)
                : 0U);
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__ram_sdq_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__ram_sdq_id__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__ram_sdq_id__v0 
            = ((1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__sdq_val)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_49)
                : 0U);
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__ram_sdq_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__ram_sdq_id__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__ram_sdq_id__v0 
            = ((1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__sdq_val)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT___T_49)
                : 0U);
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__ram_sdq_id__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__ram_sdq_id__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__value;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_br_mask 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s1_req_0_uop_br_mask) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_lsu_brupdate_b1_resolve_mask)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1808 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1807;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1804 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_1005;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5021 
        = (((((((((((((((((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_0) 
                                  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_1)) 
                                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_2)) 
                                | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_3)) 
                               | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_4)) 
                              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_5)) 
                             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_6)) 
                            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_7)) 
                           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_8)) 
                          | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_9)) 
                         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_10)) 
                        | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_11)) 
                       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_12)) 
                      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_13)) 
                     | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_14)) 
                    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_15)) 
                   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_16)) 
                  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_17)) 
                 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_18)) 
                | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_19)) 
               | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_20)) 
              | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_21)) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_22)) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldst_addr_matches_0_23)) 
           & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4991) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4992)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3690(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3690\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1784 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1783;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1780 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_1005;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__wb_forward_valid_0 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4991) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4992)));
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s1_req_0_uop_stq_idx 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_33)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_load_incoming_0)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_uop_0_stq_idx)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_retry_0)
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__exe_tlb_uop_0_stq_idx)
                    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)
                        ? ((0x17U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_23_bits_uop_stq_idx)
                            : ((0x16U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_execute_head))
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_22_bits_uop_stq_idx)
                                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_1883)))
                        : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_load_wakeup_0)
                            ? ((0x17U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_23_bits_uop_stq_idx)
                                : ((0x16U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_wakeup_idx))
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_22_bits_uop_stq_idx)
                                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_56879)))
                            : 0U)))) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__wb_fire)
                                         ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__prober_fire)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_39)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_replay_valid)
                                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_bits_uop_stq_idx)
                                                    : 
                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_replay_valid)
                                                     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_bits_uop_stq_idx)
                                                     : 
                                                    ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2_io_replay_valid)
                                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq_io_deq_bits_uop_stq_idx)
                                                      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq_io_deq_bits_uop_stq_idx))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_569 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_2) 
            << 2U) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_1) 
                       << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__MaxPeriodFibonacciLFSR__DOT__state_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__dec_brmask_logic__DOT__branch_mask 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_576)
                                           ? 0U : (
                                                   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__dec_brmask_logic__DOT__curr_mask) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__dec_brmask_logic_io_brupdate_b1_resolve_mask))) 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__b2_mispredict)
                                                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__b2_uop_br_mask)
                                                       : 0xffffU))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_tail_lsb = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_2383) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_tail_lsb = 2U;
        } else {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_2391) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_tail_lsb 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_head_lsb;
            } else {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__b2_mispredict) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_tail_lsb = 0U;
                } else {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_2400) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_tail_lsb = 0U;
                    } else {
                        if (((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_2319)) 
                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob_io_enq_partial_stall))) {
                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_tail_lsb 
                                = ((1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_2319) 
                                           | (3U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_2319) 
                                               >> 1U))) 
                                          | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_2319) 
                                             >> 2U)))
                                    ? ((1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_2319) 
                                               >> 1U) 
                                              | (1U 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_2319) 
                                                    >> 2U))))
                                        ? 2U : 1U) : 0U);
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3691(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3691\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_2235) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu_io_core_lxcpt_valid) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_2242) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__r_xcpt_uop_rob_idx 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_uop_rob_idx;
            }
        } else {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT___T_2246) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__r_xcpt_uop_rob_idx 
                    = ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__idx))
                        ? (2U | (0x7cU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob_io_rob_tail_idx)))
                        : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__idx))
                            ? (1U | (0x7cU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob_io_rob_tail_idx)))
                            : (0x7cU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob_io_rob_tail_idx))));
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__r_xcpt_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ld_xcpt_valid) 
                                           | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_xcpt_valids_0)) 
                                          & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_1005))) 
                                         & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_lsu_brupdate_b1_mispredict_mask) 
                                                   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__xcpt_uop_br_mask)))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_ldq_incoming_e_0_bits_uop_br_mask 
        = (((0x17U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx))
             ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_23_bits_uop_br_mask)
             : ((0x16U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_0_ldq_idx))
                 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_22_bits_uop_br_mask)
                 : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_48133))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_lsu_brupdate_b1_resolve_mask)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stdf_clr_bsy_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__fired_stdf_incoming) 
                                         & ((((((0x17U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_stdf_uop_stq_idx))
                                                 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_23_valid)
                                                 : 
                                                ((0x16U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_stdf_uop_stq_idx))
                                                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_22_valid)
                                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_62584))) 
                                               & ((0x17U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_stdf_uop_stq_idx))
                                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_23_bits_addr_valid)
                                                   : 
                                                  ((0x16U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_stdf_uop_stq_idx))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_22_bits_addr_valid)
                                                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_62664)))) 
                                              & (~ 
                                                 ((0x17U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_stdf_uop_stq_idx))
                                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_23_bits_addr_is_virtual)
                                                   : 
                                                  ((0x16U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_stdf_uop_stq_idx))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_22_bits_addr_is_virtual)
                                                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_62666))))) 
                                             & (~ (
                                                   (0x17U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_stdf_uop_stq_idx))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_23_bits_uop_is_amo)
                                                    : 
                                                   ((0x16U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_stdf_uop_stq_idx))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__stq_22_bits_uop_is_amo)
                                                     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_62639))))) 
                                            & (0U == 
                                               ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_lsu_brupdate_b1_mispredict_mask) 
                                                & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_stdf_uop_br_mask))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3692(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3692\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__wb_forward_ldq_idx_0 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__fired_load_incoming_0)
            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_ldq_idx)
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__fired_load_wakeup_0)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1845)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__fired_load_retry_0)
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1846)
                    : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5494 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__mem_incoming_uop_0_ldq_idx;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__brinfos_0_valid 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT__is_br) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT__is_jalr)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob_io_flush_valid)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__brinfos_1_valid 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__is_br) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__is_jalr)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob_io_flush_valid)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__brinfos_2_valid 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__alu__DOT__is_br) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__alu__DOT__is_jalr)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob_io_flush_valid)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__brinfos_1_mispredict 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__is_br) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__is_jalr)) 
           & ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__pc_sel))
               ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_2_taken))
               : ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__pc_sel)) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_2_taken))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__brinfos_2_mispredict 
        = (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__alu__DOT__is_br) 
            | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__alu__DOT__is_jalr)) 
           & ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__alu__DOT__pc_sel))
               ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_3_taken))
               : ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__alu__DOT__pc_sel)) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_3_taken))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob_io_enq_valids_2) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags_2__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags_2__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_tail;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_fflags_valid) 
         & (2U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_fflags_bits_uop_rob_idx))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags_2__v1 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_fflags_bits_flags;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags_2__v1 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags_2__v1 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_fflags_bits_uop_rob_idx) 
                        >> 2U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_fflags_valid) 
         & (2U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_fflags_bits_uop_rob_idx))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags_2__v2 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_fflags_bits_flags;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags_2__v2 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags_2__v2 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_fflags_bits_uop_rob_idx) 
                        >> 2U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3693(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3693\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob_io_enq_valids_0) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_tail;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_fflags_valid) 
         & (0U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_fflags_bits_uop_rob_idx))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags__v1 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_fflags_bits_flags;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags__v1 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags__v1 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_fflags_bits_uop_rob_idx) 
                        >> 2U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_fflags_valid) 
         & (0U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_fflags_bits_uop_rob_idx))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags__v2 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_fflags_bits_flags;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags__v2 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags__v2 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_fflags_bits_uop_rob_idx) 
                        >> 2U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob_io_enq_valids_1) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags_1__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags_1__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_tail;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_fflags_valid) 
         & (1U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_fflags_bits_uop_rob_idx))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags_1__v1 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_fflags_bits_flags;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags_1__v1 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags_1__v1 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__ll_wbarb_io_out_bits_fflags_bits_uop_rob_idx) 
                        >> 2U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_fflags_valid) 
         & (1U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_fflags_bits_uop_rob_idx))))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags_1__v2 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_fflags_bits_flags;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags_1__v2 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob__DOT__rob_fflags_1__v2 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit_io_fresp_bits_fflags_bits_uop_rob_idx) 
                        >> 2U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3694(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3694\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__resp_arb_io_out_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__ram_data__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0_io_resp_valid)
                ? ((VL_ULL(0xffffffffffffff00) & ((
                                                   (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_bits_uop_mem_size))
                                                    ? 
                                                   (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq_io_deq_bits_uop_mem_signed) 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_1126) 
                                                        >> 7U))
                                                     ? VL_ULL(0xffffffffffffff)
                                                     : VL_ULL(0))
                                                    : 
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_1122 
                                                    >> 8U)) 
                                                  << 8U)) 
                   | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_1126)))
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1_io_resp_valid)
                    ? ((VL_ULL(0xffffffffffffff00) 
                        & (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_bits_uop_mem_size))
                             ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq_io_deq_bits_uop_mem_signed) 
                                 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_1126) 
                                    >> 7U)) ? VL_ULL(0xffffffffffffff)
                                 : VL_ULL(0)) : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_1122 
                                                 >> 8U)) 
                           << 8U)) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___T_1126)))
                    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2_io_resp_valid)
                        ? ((VL_ULL(0xffffffffffffff00) 
                            & (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq_io_deq_bits_uop_mem_size))
                                 ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq_io_deq_bits_uop_mem_signed) 
                                     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___T_1126) 
                                        >> 7U)) ? VL_ULL(0xffffffffffffff)
                                     : VL_ULL(0)) : 
                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___T_1122 
                                 >> 8U)) << 8U)) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___T_1126)))
                        : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3_io_resp_valid)
                            ? ((VL_ULL(0xffffffffffffff00) 
                                & (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq_io_deq_bits_uop_mem_size))
                                     ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq_io_deq_bits_uop_mem_signed) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___T_1126) 
                                            >> 7U))
                                         ? VL_ULL(0xffffffffffffff)
                                         : VL_ULL(0))
                                     : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___T_1122 
                                        >> 8U)) << 8U)) 
                               | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___T_1126)))
                            : ((VL_ULL(0xffffffffffffff00) 
                                & (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_mem_size))
                                     ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_uop_mem_signed) 
                                         & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT___T_1972) 
                                            >> 7U))
                                         ? VL_ULL(0xffffffffffffff)
                                         : VL_ULL(0))
                                     : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT___T_1968 
                                        >> 8U)) << 8U)) 
                               | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT___T_1972)))))));
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3695(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3695\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_23_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74010)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74010))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74010)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74010))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74010)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0x17U 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74010))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74010)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74010)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74010)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74010))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74010)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74010))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74010)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0x17U 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74010))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74010)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74010))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78673))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78673))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78673)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78673))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78673)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78673)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78673))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78673)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91923))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91923))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91923)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((0x17U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91923))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91923))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3696(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3696\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_22_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74009)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74009))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74009)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74009))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74009)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0x16U 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74009))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74009)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74009)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74009)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74009))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74009)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74009))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74009)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0x16U 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74009))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74009)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74009))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78672))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78672))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78672)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78672))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78672)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78672)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78672))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78672)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91922))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91922))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91922)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((0x16U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91922))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91922))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3697(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3697\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_21_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74008)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74008))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74008)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74008))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74008)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0x15U 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74008))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74008)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74008)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74008)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74008))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74008)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74008))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74008)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0x15U 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74008))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74008)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74008))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78671))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78671))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78671)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78671))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78671)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78671)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78671))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78671)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91921))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91921))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91921)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((0x15U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91921))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91921))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3698(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3698\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_20_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74007)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74007))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74007)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74007))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74007)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0x14U 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74007))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74007)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74007)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74007)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74007))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74007)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74007))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74007)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0x14U 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74007))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74007)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74007))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78670))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78670))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78670)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78670))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78670)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78670)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78670))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78670)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91920))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91920))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91920)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((0x14U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91920))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91920))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3699(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3699\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_19_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74006)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((0x13U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74006))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74006)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74006))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((0x13U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74006)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0x13U 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74006))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74006)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74006)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74006)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((0x13U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74006))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74006)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74006))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((0x13U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74006)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0x13U 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74006))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74006)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74006))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0x13U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78669))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78669))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78669)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((0x13U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78669))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78669)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((0x13U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78669)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0x13U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78669))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78669)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((0x13U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91919))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91919))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91919)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((0x13U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91919))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91919))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3700(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3700\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_18_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74005)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((0x12U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74005))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74005)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74005))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((0x12U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74005)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0x12U 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74005))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74005)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74005)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74005)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((0x12U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74005))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74005)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74005))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((0x12U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74005)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0x12U 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74005))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74005)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74005))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0x12U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78668))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78668))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78668)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((0x12U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78668))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78668)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((0x12U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78668)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0x12U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78668))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78668)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((0x12U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91918))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91918))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91918)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((0x12U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91918))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91918))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3701(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3701\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_17_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74004)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((0x11U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74004))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74004)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74004))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((0x11U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74004)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0x11U 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74004))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74004)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74004)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74004)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((0x11U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74004))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74004)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74004))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((0x11U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74004)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0x11U 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74004))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74004)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74004))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0x11U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78667))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78667))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78667)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((0x11U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78667))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78667)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((0x11U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78667)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0x11U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78667))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78667)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((0x11U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91917))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91917))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91917)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((0x11U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91917))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91917))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3702(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3702\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_16_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74003)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((0x10U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74003))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74003)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74003))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((0x10U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74003)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0x10U 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74003))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74003)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74003)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74003)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((0x10U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74003))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74003)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74003))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((0x10U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74003)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0x10U 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74003))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74003)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74003))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0x10U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78666))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78666))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78666)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((0x10U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78666))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78666)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((0x10U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78666)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0x10U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78666))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78666)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((0x10U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91916))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91916))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91916)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((0x10U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91916))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91916))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3703(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3703\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_15_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74002)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74002))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74002)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74002))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74002)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0xfU 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74002))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74002)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74002)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74002)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74002))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74002)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74002))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74002)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0xfU 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74002))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74002)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74002))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78665))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78665))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78665)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78665))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78665)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78665)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78665))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78665)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91915))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91915))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91915)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91915))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91915))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3704(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3704\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_14_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74001)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74001))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74001)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74001))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74001)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0xeU 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74001))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74001)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74001)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74001)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74001))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74001)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74001))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74001)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0xeU 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74001))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74001)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74001))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78664))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78664))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78664)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78664))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78664)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78664)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78664))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78664)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91914))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91914))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91914)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91914))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91914))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3705(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3705\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_13_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74000)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74000))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74000)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74000))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74000)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0xdU 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74000))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74000)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74000)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74000)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74000))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74000)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74000))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74000)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0xdU 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74000))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74000)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_74000))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78663))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78663))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78663)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78663))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78663)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78663)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78663))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78663)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91913))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91913))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91913)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91913))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91913))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3706(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3706\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_12_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73999)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73999))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73999)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73999))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73999)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0xcU 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73999))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73999)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73999)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73999)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73999))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73999)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73999))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73999)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0xcU 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73999))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73999)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73999))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78662))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78662))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78662)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78662))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78662)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78662)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78662))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78662)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91912))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91912))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91912)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91912))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91912))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3707(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3707\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_11_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73998)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73998))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73998)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73998))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73998)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0xbU 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73998))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73998)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73998)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73998)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73998))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73998)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73998))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73998)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0xbU 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73998))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73998)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73998))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78661))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78661))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78661)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78661))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78661)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78661)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78661))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78661)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91911))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91911))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91911)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91911))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91911))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3708(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3708\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_10_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73997)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73997))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73997)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73997))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73997)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0xaU 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73997))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73997)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73997)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73997)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73997))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73997)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73997))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73997)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0xaU 
                                              != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73997))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73997)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73997))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78660))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78660))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78660)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78660))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78660)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78660)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78660))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78660)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91910))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91910))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91910)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91910))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91910))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3709(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3709\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_9_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73996)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73996))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73996)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73996))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73996)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73996))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73996)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73996)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73996)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73996))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73996)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73996))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73996)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73996))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73996)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73996))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78659))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78659))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78659)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78659))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78659)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78659)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78659))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78659)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91909))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91909))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91909)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91909))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91909))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3710(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3710\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_8_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73995)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73995))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73995)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73995))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73995)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73995))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73995)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73995)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73995)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73995))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73995)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73995))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73995)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73995))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73995)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73995))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78658))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78658))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78658)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78658))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78658)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78658)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78658))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78658)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91908))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91908))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91908)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91908))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91908))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3711(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3711\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_7_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73994)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73994))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73994)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73994))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73994)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73994))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73994)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73994)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73994)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73994))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73994)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73994))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73994)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73994))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73994)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73994))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78657))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78657))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78657)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78657))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78657)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78657)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78657))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78657)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91907))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91907))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91907)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91907))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91907))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3712(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3712\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_6_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73993)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73993))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73993)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73993))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73993)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73993))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73993)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73993)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73993)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73993))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73993)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73993))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73993)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73993))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73993)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73993))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78656))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78656))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78656)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78656))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78656)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78656)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78656))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78656)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91906))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91906))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91906)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91906))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91906))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3713(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3713\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_5_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73992)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73992))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73992)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73992))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73992)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73992))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73992)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73992)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73992)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73992))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73992)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73992))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73992)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73992))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73992)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73992))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78655))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78655))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78655)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78655))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78655)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78655)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78655))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78655)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91905))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91905))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91905)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91905))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91905))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3714(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3714\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_4_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73991)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73991))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73991)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73991))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73991)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73991))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73991)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73991)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73991)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73991))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73991)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73991))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73991)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73991))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73991)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73991))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78654))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78654))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78654)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78654))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78654)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78654)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78654))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78654)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91904))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91904))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91904)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91904))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91904))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3715(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3715\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_3_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73990)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73990))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73990)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73990))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73990)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73990))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73990)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73990)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73990)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73990))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73990)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73990))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73990)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73990))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73990)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73990))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78653))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78653))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78653)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78653))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78653)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78653)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78653))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78653)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91903))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91903))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91903)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91903))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91903))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3716(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3716\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_2_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73989)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73989))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73989)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73989))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73989)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73989))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73989)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73989)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73989)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73989))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73989)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73989))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73989)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73989))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73989)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73989))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78652))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78652))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78652)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78652))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78652)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78652)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78652))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78652)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91902))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91902))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91902)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91902))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91902))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3717(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3717\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_1_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73988)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73988))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73988)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73988))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73988)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73988))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73988)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73988)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73988)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73988))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73988)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73988))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73988)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73988))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73988)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73988))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78651))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78651))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78651)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78651))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78651)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78651)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78651))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78651)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91901))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91901))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91901)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((1U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91901))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91901))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3718(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3718\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__ldq_0_bits_executed 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5982)) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5927)
               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                   ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                           ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                               ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73987)
                               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                   ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73987))
                                   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73987)))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73987))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                           ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73987)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73987))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73987)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73987)))
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                               ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73987)
                                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                       ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73987))
                                       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73987)))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73987))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                       ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_io_lsu_nack_0_valid)
                                  ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_is_hella)
                                      ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73987)
                                      : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_uses_ldq)
                                          ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__s2_req_0_uop_ldq_idx)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73987))
                                          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73987)))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_73987))
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78650))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78650))))
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78650)
                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                               ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78650))
                               : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78650)))))
               : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5928)
                   ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5929)) 
                      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                          ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5885)
                              ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78650)
                              : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5886)
                                  ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5887)) 
                                     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78650))
                                  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_78650)))
                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                              ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91900))
                              : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91900))))
                   : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5906)
                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91900)
                       : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5907)
                           ? ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5908)) 
                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91900))
                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___GEN_91900))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3719(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3719\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_209) 
          | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_211)) 
         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_213))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_2_stale_pdst 
            = ((((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_234))
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_pdst)
                  : 0U) | ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_234))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_1_pdst)
                            : 0U)) | ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_234))
                                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_2_pdst)
                                       : 0U));
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_ifu_redirect_flush)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__dis_stalls_2)))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_2_stale_pdst 
                    = ((0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x26U] 
                                            << 0x12U) 
                                           | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x25U] 
                                              >> 0xeU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_31)
                        : ((0x1eU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x26U] 
                                                << 0x12U) 
                                               | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x25U] 
                                                  >> 0xeU))))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_30)
                            : ((0x1dU == (0x1fU & (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x26U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x25U] 
                                                      >> 0xeU))))
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_29)
                                : ((0x1cU == (0x1fU 
                                              & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x26U] 
                                                  << 0x12U) 
                                                 | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x25U] 
                                                    >> 0xeU))))
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_28)
                                    : ((0x1bU == (0x1fU 
                                                  & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x26U] 
                                                      << 0x12U) 
                                                     | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x25U] 
                                                        >> 0xeU))))
                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_27)
                                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT___GEN_3994))))));
            }
        }
    }
    if ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_197) 
          | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_199)) 
         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_201))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_2_prs2 
            = ((((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_222))
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_pdst)
                  : 0U) | ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_222))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_1_pdst)
                            : 0U)) | ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_222))
                                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_2_pdst)
                                       : 0U));
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_ifu_redirect_flush)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__dis_stalls_2)))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_2_prs2 
                    = ((0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x26U] 
                                            << 5U) 
                                           | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x25U] 
                                              >> 0x1bU))))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_31)
                        : ((0x1eU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x26U] 
                                                << 5U) 
                                               | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x25U] 
                                                  >> 0x1bU))))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_30)
                            : ((0x1dU == (0x1fU & (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x26U] 
                                                    << 5U) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x25U] 
                                                      >> 0x1bU))))
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_29)
                                : ((0x1cU == (0x1fU 
                                              & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x26U] 
                                                  << 5U) 
                                                 | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x25U] 
                                                    >> 0x1bU))))
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_28)
                                    : ((0x1bU == (0x1fU 
                                                  & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x26U] 
                                                      << 5U) 
                                                     | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x25U] 
                                                        >> 0x1bU))))
                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_27)
                                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT___GEN_3930))))));
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3720(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3720\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_117) 
          | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_119)) 
         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_121))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_1_stale_pdst 
            = ((((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_142))
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_pdst)
                  : 0U) | ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_142))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_1_pdst)
                            : 0U)) | ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_142))
                                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_2_pdst)
                                       : 0U));
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_ifu_redirect_flush)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__dis_stalls_2)))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_1_stale_pdst 
                    = ((0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x19U] 
                                            << 0xcU) 
                                           | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x18U] 
                                              >> 0x14U))))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_31)
                        : ((0x1eU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x19U] 
                                                << 0xcU) 
                                               | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x18U] 
                                                  >> 0x14U))))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_30)
                            : ((0x1dU == (0x1fU & (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x19U] 
                                                    << 0xcU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x18U] 
                                                      >> 0x14U))))
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_29)
                                : ((0x1cU == (0x1fU 
                                              & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x19U] 
                                                  << 0xcU) 
                                                 | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x18U] 
                                                    >> 0x14U))))
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_28)
                                    : ((0x1bU == (0x1fU 
                                                  & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x19U] 
                                                      << 0xcU) 
                                                     | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x18U] 
                                                        >> 0x14U))))
                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_27)
                                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT___GEN_3866))))));
            }
        }
    }
    if ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_191) 
          | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_193)) 
         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_195))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_2_prs1 
            = ((((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_216))
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_pdst)
                  : 0U) | ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_216))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_1_pdst)
                            : 0U)) | ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_216))
                                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_2_pdst)
                                       : 0U));
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_ifu_redirect_flush)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__dis_stalls_2)))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_2_prs1 
                    = ((0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x26U] 
                                            << 0xaU) 
                                           | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x25U] 
                                              >> 0x16U))))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_31)
                        : ((0x1eU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x26U] 
                                                << 0xaU) 
                                               | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x25U] 
                                                  >> 0x16U))))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_30)
                            : ((0x1dU == (0x1fU & (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x26U] 
                                                    << 0xaU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x25U] 
                                                      >> 0x16U))))
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_29)
                                : ((0x1cU == (0x1fU 
                                              & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x26U] 
                                                  << 0xaU) 
                                                 | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x25U] 
                                                    >> 0x16U))))
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_28)
                                    : ((0x1bU == (0x1fU 
                                                  & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x26U] 
                                                      << 0xaU) 
                                                     | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x25U] 
                                                        >> 0x16U))))
                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_27)
                                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT___GEN_3898))))));
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3721(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3721\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_13) 
          | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_15)) 
         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_17))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_prs2 
            = ((((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_38))
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_pdst)
                  : 0U) | ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_38))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_1_pdst)
                            : 0U)) | ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_38))
                                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_2_pdst)
                                       : 0U));
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_ifu_redirect_flush)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__dis_stalls_2)))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_prs2 
                    = ((0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0xdU] 
                                            << 0x19U) 
                                           | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0xcU] 
                                              >> 7U))))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_31)
                        : ((0x1eU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0xdU] 
                                                << 0x19U) 
                                               | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0xcU] 
                                                  >> 7U))))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_30)
                            : ((0x1dU == (0x1fU & (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0xdU] 
                                                    << 0x19U) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0xcU] 
                                                      >> 7U))))
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_29)
                                : ((0x1cU == (0x1fU 
                                              & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0xdU] 
                                                  << 0x19U) 
                                                 | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0xcU] 
                                                    >> 7U))))
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_28)
                                    : ((0x1bU == (0x1fU 
                                                  & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0xdU] 
                                                      << 0x19U) 
                                                     | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0xcU] 
                                                        >> 7U))))
                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_27)
                                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT___GEN_3674))))));
            }
        }
    }
    if ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_105) 
          | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_107)) 
         | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_109))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_1_prs2 
            = ((((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_130))
                  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_0_pdst)
                  : 0U) | ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_130))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_1_pdst)
                            : 0U)) | ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT___T_130))
                                       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_2_pdst)
                                       : 0U));
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core_io_ifu_redirect_flush)))) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__dis_stalls_2)))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_uops_1_prs2 
                    = ((0x1fU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x1aU] 
                                            << 0x1fU) 
                                           | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x19U] 
                                              >> 1U))))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_31)
                        : ((0x1eU == (0x1fU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x1aU] 
                                                << 0x1fU) 
                                               | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x19U] 
                                                  >> 1U))))
                            ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_30)
                            : ((0x1dU == (0x1fU & (
                                                   (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x1aU] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x19U] 
                                                      >> 1U))))
                                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_29)
                                : ((0x1cU == (0x1fU 
                                              & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x1aU] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x19U] 
                                                    >> 1U))))
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_28)
                                    : ((0x1bU == (0x1fU 
                                                  & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x1aU] 
                                                      << 0x1fU) 
                                                     | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__fb__DOT___T_3074[0x19U] 
                                                        >> 1U))))
                                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT__map_table_27)
                                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__maptable__DOT___GEN_3802))))));
            }
        }
    }
}
