// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2952(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2952\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__maybe_full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__ram_corrupt__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__full)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__saved_corrupt)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data));
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue__DOT__ram_corrupt__v0 = 1U;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT__p2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_23__DOT___GEN_127));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_615) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_584 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_80));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__clint__DOT__TLMonitor__DOT___T_536 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_80));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_14 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_14 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_13;
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_b_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1413) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1388 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_source;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT___T_1)
          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT___GEN_9))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_last__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_io_enq_bits_last;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_last__v0 = 1U;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_4654) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_x 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 2U)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2953(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2953\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_4714) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_x 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 0x1aU)));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_4674) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_x 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 0xaU)));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_4694) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_x 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 0x12U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_4734) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_x 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 0x22U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_4754) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_x 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 0x2aU)));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_4774) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_x 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 0x32U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_4794) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_x 
                = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                                 >> 0x3aU)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT___T_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT___T_1 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT___T_11;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu_io_in_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__in_in1[0U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu_io_in_bits_in1[0U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__in_in1[1U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu_io_in_bits_in1[1U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu__DOT__in_in1[2U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__fpiu_io_in_bits_in1[2U];
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_ghist_new_saw_branch_taken__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_ghist_new_saw_branch_taken
            [0U];
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_ghist_new_saw_branch_taken__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_ghist_new_saw_branch_taken__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__enq_ptr_value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2954(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2954\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_ghist_new_saw_branch_not_taken__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_ghist_new_saw_branch_not_taken
            [0U];
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_ghist_new_saw_branch_not_taken__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_ghist_new_saw_branch_not_taken__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_ghist_old_history__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_ghist_old_history
            [0U];
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_ghist_old_history__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__ram_ghist_old_history__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4_btb_corrections__DOT__enq_ptr_value;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile_io_write_ports_0_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT____Vlvbound1 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_data;
        if ((0x63U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_pdst))) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v0 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT____Vlvbound1;
            vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v0 = 1U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v0 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ll_wbarb_io_out_bits_uop_pdst;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile_io_write_ports_1_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT____Vlvbound2 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT___T_40;
        if ((0x63U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit_io_iresp_bits_uop_pdst))) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v1 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT____Vlvbound2;
            vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v1 = 1U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v1 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit_io_iresp_bits_uop_pdst;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile_io_write_ports_2_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT____Vlvbound3 
            = (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_1047[1U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_1047[0U])));
        if ((0x63U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_2_0_pdst))) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v2 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT____Vlvbound3;
            vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v2 = 1U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v2 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT___T_2_0_pdst;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile_io_write_ports_3_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT____Vlvbound4 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT___T_33;
        if ((0x63U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit_io_iresp_bits_uop_pdst))) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v3 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT____Vlvbound4;
            vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v3 = 1U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregfile__DOT__regfile__v3 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit_io_iresp_bits_uop_pdst;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2955(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2955\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT___T_99));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater__DOT___T_5) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater__DOT__saved_source 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_15_data;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_670 = 3U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_663) 
             & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_664)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_670 
                = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_686) 
                   | (2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_686) 
                            << 1U)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
        = (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_453));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT___T_3 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_write_addr;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT___T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_write_valid) 
           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_write_idx) 
              == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx)));
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_1)
          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_18))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_enq_bits_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_size__v0 = 1U;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT___T_4 
        = ((0x1fU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_31
            : ((0x1eU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_30
                : ((0x1dU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_29
                    : ((0x1cU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_28
                        : ((0x1bU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_27
                            : ((0x1aU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_26
                                : ((0x19U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_25
                                    : ((0x18U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_24
                                        : ((0x17U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_23
                                            : ((0x16U 
                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_22
                                                : (
                                                   (0x15U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_21
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                                     ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_20
                                                     : 
                                                    ((0x13U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                                      ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_19
                                                      : 
                                                     ((0x12U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                                       ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_18
                                                       : 
                                                      ((0x11U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_17
                                                        : 
                                                       ((0x10U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                                         ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_16
                                                         : 
                                                        ((0xfU 
                                                          == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                                          ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_15
                                                          : 
                                                         ((0xeU 
                                                           == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                                           ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_14
                                                           : 
                                                          ((0xdU 
                                                            == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                                            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_13
                                                            : 
                                                           ((0xcU 
                                                             == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                                             ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_12
                                                             : 
                                                            ((0xbU 
                                                              == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                                              ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_11
                                                              : 
                                                             ((0xaU 
                                                               == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                                               ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_10
                                                               : 
                                                              ((9U 
                                                                == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                                                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_9
                                                                : 
                                                               ((8U 
                                                                 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                                                 ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_8
                                                                 : 
                                                                ((7U 
                                                                  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                                                  ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_7
                                                                  : 
                                                                 ((6U 
                                                                   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                                                   ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_6
                                                                   : 
                                                                  ((5U 
                                                                    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                                                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_5
                                                                    : 
                                                                   ((4U 
                                                                     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                                                     ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_4
                                                                     : 
                                                                    ((3U 
                                                                      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                                                      ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_3
                                                                      : 
                                                                     ((2U 
                                                                       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                                                       ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_2
                                                                       : 
                                                                      ((1U 
                                                                        == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras_io_read_idx))
                                                                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_1
                                                                        : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ras__DOT__ras_0)))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2956(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2956\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_scounteren 
        = (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___GEN_302);
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_address__v0 
            = (0x7fffffffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                               << 0x17U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[2U] 
                                            >> 9U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_address__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT___T;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1776) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1746 
            = (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1827) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1797 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_15_data;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_694_0 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_560))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_694_0 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_614;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_694_2 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_560))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_694_2 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_616;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mcounteren 
        = (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___GEN_303);
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_92) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_retires 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_retires;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__grantInProgress = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3631) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__grantIsCached) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__grantInProgress 
                    = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__d_last)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_694_1 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_560))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_694_1 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_615;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2957(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2957\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4465 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1495));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4461 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1495));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4455 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1495));
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_source__v0 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source) 
                        >> 4U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue_1__DOT___T;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_694_6 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_560))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_694_6 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_620;
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_1)
          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_18))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_id__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1_io_enq_bits_id;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_id__v0 = 1U;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_imem_sfence_valid) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid = 0U;
        } else {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_76) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT__valid 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__ptw__DOT___T_118;
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT___T_99));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_939) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_940) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_corrupt 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2958(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2958\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp361[4];
    WData/*127:0*/ __Vtemp362[4];
    WData/*127:0*/ __Vtemp363[4];
    WData/*127:0*/ __Vtemp364[4];
    WData/*127:0*/ __Vtemp365[4];
    WData/*127:0*/ __Vtemp368[4];
    WData/*127:0*/ __Vtemp369[4];
    WData/*127:0*/ __Vtemp370[4];
    WData/*127:0*/ __Vtemp374[4];
    WData/*127:0*/ __Vtemp375[4];
    WData/*127:0*/ __Vtemp376[4];
    WData/*127:0*/ __Vtemp377[4];
    WData/*127:0*/ __Vtemp378[4];
    WData/*127:0*/ __Vtemp381[4];
    WData/*127:0*/ __Vtemp382[4];
    WData/*127:0*/ __Vtemp383[4];
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__blockProbeAfterGrantCount = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3631) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__grantIsCached) {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__d_last) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__blockProbeAfterGrantCount = 7U;
                } else {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3752) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__blockProbeAfterGrantCount 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3619;
                    }
                }
            } else {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3752) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__blockProbeAfterGrantCount 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3619;
                }
            }
        } else {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3752) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__blockProbeAfterGrantCount 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3619;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_694_5 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_560))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_694_5 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_619;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_2_bit0AlignedSigC 
            = (1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U]);
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_2_bit0AlignedSigC 
            = (1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U]);
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__valid) {
        VL_EXTEND_WQ(106,53, __Vtemp361, (VL_ULL(0x1fffffffffffff) 
                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_sig));
        VL_EXTEND_WQ(106,53, __Vtemp362, (VL_ULL(0x1fffffffffffff) 
                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_sig));
        VL_MUL_W(4, __Vtemp363, __Vtemp361, __Vtemp362);
        __Vtemp364[0U] = __Vtemp363[0U];
        __Vtemp364[1U] = __Vtemp363[1U];
        __Vtemp364[2U] = __Vtemp363[2U];
        __Vtemp364[3U] = (0x3ffU & __Vtemp363[3U]);
        VL_EXTEND_WW(107,106, __Vtemp365, __Vtemp364);
        __Vtemp368[0U] = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
                           << 0x1fU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U] 
                                        >> 1U));
        __Vtemp368[1U] = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
                           << 0x1fU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
                                        >> 1U));
        __Vtemp368[2U] = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[3U] 
                           << 0x1fU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
                                        >> 1U));
        __Vtemp368[3U] = (0x3ffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[4U] 
                                     << 0x1fU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[3U] 
                                                  >> 1U)));
        VL_EXTEND_WW(107,106, __Vtemp369, __Vtemp368);
        VL_ADD_W(4, __Vtemp370, __Vtemp365, __Vtemp369);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_5[0U] 
            = __Vtemp370[0U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_5[1U] 
            = __Vtemp370[1U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_5[2U] 
            = __Vtemp370[2U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_5[3U] 
            = (0x7ffU & __Vtemp370[3U]);
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        VL_EXTEND_WQ(106,53, __Vtemp374, (VL_ULL(0x1fffffffffffff) 
                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_sig));
        VL_EXTEND_WQ(106,53, __Vtemp375, (VL_ULL(0x1fffffffffffff) 
                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_sig));
        VL_MUL_W(4, __Vtemp376, __Vtemp374, __Vtemp375);
        __Vtemp377[0U] = __Vtemp376[0U];
        __Vtemp377[1U] = __Vtemp376[1U];
        __Vtemp377[2U] = __Vtemp376[2U];
        __Vtemp377[3U] = (0x3ffU & __Vtemp376[3U]);
        VL_EXTEND_WW(107,106, __Vtemp378, __Vtemp377);
        __Vtemp381[0U] = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
                           << 0x1fU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U] 
                                        >> 1U));
        __Vtemp381[1U] = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
                           << 0x1fU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
                                        >> 1U));
        __Vtemp381[2U] = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[3U] 
                           << 0x1fU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
                                        >> 1U));
        __Vtemp381[3U] = (0x3ffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[4U] 
                                     << 0x1fU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[3U] 
                                                  >> 1U)));
        VL_EXTEND_WW(107,106, __Vtemp382, __Vtemp381);
        VL_ADD_W(4, __Vtemp383, __Vtemp378, __Vtemp382);
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_5[0U] 
            = __Vtemp383[0U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_5[1U] 
            = __Vtemp383[1U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_5[2U] 
            = __Vtemp383[2U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_5[3U] 
            = (0x7ffU & __Vtemp383[3U]);
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2959(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2959\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT___T_2_highAlignedSigC 
            = (VL_ULL(0x7fffffffffffff) & (((QData)((IData)(
                                                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[5U])) 
                                            << 0x35U) 
                                           | (((QData)((IData)(
                                                               vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[4U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__fpu__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[3U])) 
                                                 >> 0xbU))));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_2_highAlignedSigC 
            = (VL_ULL(0x7fffffffffffff) & (((QData)((IData)(
                                                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[5U])) 
                                            << 0x35U) 
                                           | (((QData)((IData)(
                                                               vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[4U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[3U])) 
                                                 >> 0xbU))));
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__Repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT___T;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__Repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__Repeater_io_deq_bits_sink;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_sink__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT___T;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__Repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__Repeater_io_deq_bits_param;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT___T;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__Repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__Repeater_io_deq_bits_denied;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT___T;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__Repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT___T;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__Repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__Repeater_io_deq_bits_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT___T;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2960(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2960\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_694_3 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_560))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_694_3 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_617;
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__Repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__Queue_1__DOT___T;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_448) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__req_tag 
            = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_reg_inst 
                        >> 7U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13_io_in_uop_valid) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__slot_uop_br_mask 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_46)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage_io_ren2_uops_0_br_mask)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_44)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15_io_out_uop_br_mask)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_14_io_out_uop_br_mask)));
        }
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__slot_uop_br_mask 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13__DOT__next_br_mask;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29_io_in_uop_valid) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29__DOT__slot_uop_br_mask 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_78)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage_io_ren2_uops_0_br_mask)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_76)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_31_io_out_uop_br_mask)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_30_io_out_uop_br_mask)));
        }
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29__DOT__slot_uop_br_mask 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29__DOT__next_br_mask;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19_io_in_uop_valid) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_br_mask 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_49)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22_io_out_uop_br_mask)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21_io_out_uop_br_mask)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20_io_out_uop_br_mask)));
        }
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__slot_uop_br_mask 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19__DOT__next_br_mask;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2961(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2961\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_31__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_31__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_31__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_31__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_30__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_30__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_30__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_30__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_13__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_13__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_13__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_13__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_14__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_14__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_14__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_14__DOT___T_99));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2962(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2962\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_20__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_21__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_22__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_23__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT___T_91));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2963(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2963\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_16__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_16__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_16__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_16__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17__DOT___T_99));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2964(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2964\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_24__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_25__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_26__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_10__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_10__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_10__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_10__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT___T_99));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8__DOT__p1_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8__DOT___T_91));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8__DOT__p2_poisoned 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8__DOT___T_99));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1077) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__TLMonitor__DOT___T_1049 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2965(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2965\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_4015) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a 
                    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0x13U)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_4035) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a 
                    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0x1bU)));
            }
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_1_b_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_address__v0 
            = (0x80000000U | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address);
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_address__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_2__DOT___T;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT__do_enq;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
        = (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_446));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT___T_2_0_dst_rtype 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_dst_rtype;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__imul__DOT___T_2_2_dst_rtype 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__imul__DOT___T_2_1_dst_rtype;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__alu__DOT___T_2_2_dst_rtype 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__alu__DOT___T_2_1_dst_rtype;
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm 
            = (((((0U == (0x30U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                  | (4U == (0x201cU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                 | (0x10U == (0x14U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                << 2U) | ((((8U == (0x18U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                            | (0x14U == (0x14U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                           << 1U) | ((8U == (0x18U 
                                             & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                                     | (0x40U == (0x44U 
                                                  & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2966(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2966\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_3735) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_imem_sfence_valid) {
            if ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_mem_size))) {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_656) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0 = 0U;
                } else {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_354;
                    }
                }
            } else {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_874;
            }
        } else {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_993) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___GEN_354;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_694_4 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_560))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_694_4 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___T_618;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mtvec 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___GEN_270));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_3__DOT__s1_pc 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0_io_f0_pc;
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_3__DOT__s1_pc 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1_io_f0_pc;
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___T_2_isZeroC 
            = (0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[1U] 
                             << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                       >> 0x1dU))));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___T_2_isZeroC 
            = (0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[2U] 
                             << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                       >> 0x1dU))));
    }
    if ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0) 
               | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_store_commit_0))))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5022 = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__can_fire_store_commit_0) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__will_fire_store_commit_0)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5022 
                = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5031)
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_5029)
                    : 0xfU);
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2967(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2967\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp389[3];
    WData/*95:0*/ __Vtemp394[3];
    WData/*95:0*/ __Vtemp395[3];
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_opcode__v0 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                     >> 0x13U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT___T;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_valid) {
        __Vtemp389[1U] = ((0xfffffffeU & ((7U == (7U 
                                                  & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[2U] 
                                                      << 3U) 
                                                     | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[1U] 
                                                        >> 0x1dU))))
                                           ? (0xefefffffU 
                                              & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[1U])
                                           : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[1U])) 
                          | (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xff800000U 
                                                                     & ((((0x7ffU 
                                                                           & VL_EXTENDS_II(11,10, 
                                                                                (0x1ffU 
                                                                                & ((IData)(0x80U) 
                                                                                + 
                                                                                (0x3ffU 
                                                                                & VL_EXTENDS_II(10,9, 
                                                                                (0x80U 
                                                                                | (0x3fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_133)))))))))) 
                                                                          + 
                                                                          (0x7ffU 
                                                                           & VL_EXTENDS_II(11,10, 
                                                                                (3U 
                                                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_40 
                                                                                >> 0x18U))))) 
                                                                         & (~ 
                                                                            ((0x80000000U 
                                                                              & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_134[1U])
                                                                              ? 0U
                                                                              : 0x1c0U))) 
                                                                        << 0x17U)) 
                                                                    | ((0x80000000U 
                                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_134[1U])
                                                                        ? 
                                                                       (0x7fffffU 
                                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_40)
                                                                        : 0U))))) 
                                     >> 0x20U)));
        __Vtemp394[0U] = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_singleIn)
                           ? (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN_io_in_sign)) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xff800000U 
                                                                     & ((((0x7ffU 
                                                                           & VL_EXTENDS_II(11,10, 
                                                                                (0x1ffU 
                                                                                & ((IData)(0x80U) 
                                                                                + 
                                                                                (0x3ffU 
                                                                                & VL_EXTENDS_II(10,9, 
                                                                                (0x80U 
                                                                                | (0x3fU 
                                                                                & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_133)))))))))) 
                                                                          + 
                                                                          (0x7ffU 
                                                                           & VL_EXTENDS_II(11,10, 
                                                                                (3U 
                                                                                & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_40 
                                                                                >> 0x18U))))) 
                                                                         & (~ 
                                                                            ((0x80000000U 
                                                                              & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_134[1U])
                                                                              ? 0U
                                                                              : 0x1c0U))) 
                                                                        << 0x17U)) 
                                                                    | ((0x80000000U 
                                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_134[1U])
                                                                        ? 
                                                                       (0x7fffffU 
                                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_40)
                                                                        : 0U))))))
                           : ((7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[2U] 
                                             << 3U) 
                                            | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[1U] 
                                               >> 0x1dU))))
                               ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[0U]
                               : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[0U]));
        __Vtemp395[0U] = (IData)((((QData)((IData)(
                                                   (0xfffffU 
                                                    == 
                                                    (0xfffffU 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U])))) 
                                   << 0x3cU) | (((QData)((IData)(
                                                                 (0x7fU 
                                                                  & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[2U] 
                                                                      << 0xbU) 
                                                                     | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U] 
                                                                        >> 0x15U))))) 
                                                 << 0x35U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_223 
                                                                                >> 0x1fU))))) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(
                                                                       (0xfffffU 
                                                                        & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U]))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((0x80000000U 
                                                                          & ((IData)(
                                                                                (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_223 
                                                                                >> 0x20U)) 
                                                                             << 0x1fU)) 
                                                                         | (0x7fffffffU 
                                                                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_223))))))))));
        __Vtemp395[1U] = ((0xe0000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U]) 
                          | (IData)(((((QData)((IData)(
                                                       (0xfffffU 
                                                        == 
                                                        (0xfffffU 
                                                         & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U])))) 
                                       << 0x3cU) | 
                                      (((QData)((IData)(
                                                        (0x7fU 
                                                         & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[2U] 
                                                             << 0xbU) 
                                                            | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U] 
                                                               >> 0x15U))))) 
                                        << 0x35U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_223 
                                                                     >> 0x1fU))))) 
                                         << 0x34U) 
                                        | (((QData)((IData)(
                                                            (0xfffffU 
                                                             & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U]))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & ((IData)(
                                                                          (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_223 
                                                                           >> 0x20U)) 
                                                                  << 0x1fU)) 
                                                              | (0x7fffffffU 
                                                                 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_223))))))))) 
                                     >> 0x20U)));
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_266_data[0U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_wflags)
                ? __Vtemp394[0U] : ((7U == (7U & ((
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[2U] 
                                                   << 3U) 
                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U] 
                                                     >> 0x1dU))))
                                     ? __Vtemp395[0U]
                                     : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[0U]));
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_266_data[1U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_wflags)
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_singleIn)
                    ? __Vtemp389[1U] : ((7U == (7U 
                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[2U] 
                                                    << 3U) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[1U] 
                                                      >> 0x1dU))))
                                         ? (0xefefffffU 
                                            & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[1U])
                                         : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[1U]))
                : ((7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[2U] 
                                  << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U] 
                                            >> 0x1dU))))
                    ? __Vtemp395[1U] : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U]));
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_266_data[2U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_wflags)
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_singleIn)
                    ? (1U & ((7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[2U] 
                                            << 3U) 
                                           | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[1U] 
                                              >> 0x1dU))))
                              ? (1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[2U])
                              : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[2U]))
                    : ((7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[2U] 
                                      << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[1U] 
                                                >> 0x1dU))))
                        ? (1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[2U])
                        : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN_io_out[2U]))
                : ((7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[2U] 
                                  << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[1U] 
                                            >> 0x1dU))))
                    ? (1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[2U])
                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_142[2U]));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT___T_266_exc 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_wflags)
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_singleIn)
                    ? ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT___T_134[1U] 
                        >> 0x1fU) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN__DOT__roundAnyRawFNToRecFN__DOT__common_inexact))
                    : ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT___T_134[1U] 
                        >> 0x1fU) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__INToRecFN_1__DOT__roundAnyRawFNToRecFN__DOT__common_inexact)))
                : 0U);
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2968(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2968\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
        = (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_432));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_521 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_532));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_549 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_560));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_577 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_588));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_605 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_616));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_633 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_644));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_661 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_672));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_615) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_587 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_615) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_587 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_615) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_587 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_615) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_587 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_615) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_587 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_615) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_587 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_denied;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_615) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_584 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_615) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_584 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_615) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_584 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2969(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2969\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_615) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_584 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_615) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_584 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_615) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_584 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_size;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtvec 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_337));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
        = (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_439));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1413) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__TLMonitor__DOT___T_1386 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_io_deq_bits_param;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_b_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address__v0 
            = (0x80000000U | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address);
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT___T;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_4654) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 7U)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_4774) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0x37U)));
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2970(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2970\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_4734) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0x27U)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_4754) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0x2fU)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_4674) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0xfU)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_4694) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0x17U)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_4714) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0x1fU)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_4794) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0x3fU)));
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_flush_pipe 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ctrl_killm)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_reg_flush_pipe));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2971(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2971\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__p3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT___GEN_128));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__isValid 
        = ((IData)(vlTOPp->reset) ? 0U : (0xfffffffU 
                                          & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT___GEN_381));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__p3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT___GEN_143));
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_135))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_162 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__IDPool__DOT__select;
    }
    if (((~ (IData)((0xfffffffU == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__used))) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests_io_push_valid))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT____Vlvbound6 = 0U;
        if ((0x1bU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_1___05FT_47_addr))) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_1__v0 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT____Vlvbound6;
            vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_1__v0 = 1U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_1__v0 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_prio_1___05FT_47_addr;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb_io_btb_update_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_bits_isValid 
            = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_imem_btb_update_valid)) 
                     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_945) 
                        | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_ctrl_jal))));
    }
    if (((~ (IData)((0xfffffffU == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__used))) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests_io_push_valid))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT____Vlvbound3 
            = (((IData)((0U != (0x1fffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__freeOH 
                                           >> 0x10U)))) 
                << 4U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT___T_39));
        if ((0x23U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests_io_push_bits_index))) {
            vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__tail__v0 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT____Vlvbound3;
            vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__tail__v0 = 1U;
            vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__tail__v0 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests_io_push_bits_index;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__b2_target_offset 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_51)
            ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__brinfos_2_target_offset
            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_39)
                ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__brinfos_1_target_offset
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__brinfos_0_target_offset));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2972(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2972\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_939) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_940) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_6_0_denied 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__retire) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s7_dat[0U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s6_dat[0U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s7_dat[1U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s6_dat[1U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s7_dat[2U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s6_dat[2U];
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s7_dat[3U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s6_dat[3U];
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_218_1 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_154))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_218_1 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_189;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_218_0 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_154))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_218_0 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__tlMasterXbar__DOT___T_188;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR_io_increment) {
            vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 
                = ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_15) 
                     ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_13)) 
                    ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_12)) 
                   ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT__MaxPeriodFibonacciLFSR__DOT__state_10));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_92) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s3_bypass 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s2_bypass;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4420 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1495));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4416 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1495));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4410 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1495));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT__p2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_22__DOT___GEN_127));
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_source__v0 
            = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_772[3U] 
                        >> 8U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT___T;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2973(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2973\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__retire) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s6_beat 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__s5_beat;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_release_data_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_release_data_valid) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__releaseRejected)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_3975) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a 
                    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 3U)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_3995) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a 
                    = (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0xbU)));
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_idx 
        = (VL_ULL(0xfffffffff) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0_io_f0_pc 
                                  >> 4U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_idx 
        = (VL_ULL(0xfffffffff) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1_io_f0_pc 
                                  >> 4U));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_pc_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_ctrl_csr 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__mem_ctrl_csr;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_in_uop_valid) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_br_mask 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_47)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21_io_out_uop_br_mask)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20_io_out_uop_br_mask)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19_io_out_uop_br_mask)));
        }
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__slot_uop_br_mask 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18__DOT__next_br_mask;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
        = (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_418));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3776 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3768) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3776 
                = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__c_first)
                             ? ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tl_out___05Fc_bits_opcode))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__tl_out___05Fc_bits_size)) 
                                        >> 4U))) : 0U)
                             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3778)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2974(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2974\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_702) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_676 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_702) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__TLMonitor__DOT___T_676 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_702) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__TLMonitor__DOT___T_676 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12_io_in_uop_valid) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_br_mask 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_44)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15_io_out_uop_br_mask)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_42)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_14_io_out_uop_br_mask)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13_io_out_uop_br_mask)));
        }
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__slot_uop_br_mask 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12__DOT__next_br_mask;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT___T_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT___T_1 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT___T_11;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28_io_in_uop_valid) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__slot_uop_br_mask 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_76)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_31_io_out_uop_br_mask)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_74)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_30_io_out_uop_br_mask)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29_io_out_uop_br_mask)));
        }
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__slot_uop_br_mask 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28__DOT__next_br_mask;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_finish_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs_io_mem_finish_bits_sink;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT__ram_sink__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_4__DOT___T;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__imul__DOT___T_2_2_br_mask 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit__DOT__imul__DOT___T_2_1_br_mask) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__ALUExeUnit_io_brupdate_b1_resolve_mask)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2975(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2975\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__do_enq;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_448) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__req_dw 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_alu_dw;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_448) {
        vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
            = (IData)((((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_alu_dw)
                                          ? (IData)(
                                                    (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div_io_req_bits_in2 
                                                     >> 0x20U))
                                          : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__rhs_sign)
                                              ? 0xffffffffU
                                              : 0U)))) 
                        << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div_io_req_bits_in2))));
        vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
            = (IData)(((((QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_alu_dw)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div_io_req_bits_in2 
                                                      >> 0x20U))
                                           : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__rhs_sign)
                                               ? 0xffffffffU
                                               : 0U)))) 
                         << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div_io_req_bits_in2))) 
                       >> 0x20U));
        vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__rhs_sign;
    } else {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__state))) {
            if ((0x80000000U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U])) {
                vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__divisor[0U] 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__subtractor[0U];
                vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__divisor[1U] 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__subtractor[1U];
                vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__divisor[2U] 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__subtractor[2U];
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT___T_139_bits 
        = (VL_ULL(0xffffffffff) & ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_hit_ohs_0_0)
                                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__btb_0__DOT__btb_0_ext_R0_data)
                                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__btb_1__DOT__btb_0_ext_R0_data)))
                                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__ebtb__DOT__ebtb_ext__DOT__mem_0_0__DOT__ram_R_0_data
                                    : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_pc 
                                       + (((QData)((IData)(
                                                           (0x7ffffffU 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT___GEN_17) 
                                                                             >> 0xcU))))))) 
                                           << 0xdU) 
                                          | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT___GEN_17))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT___T_170_bits 
        = (VL_ULL(0xffffffffff) & ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_hit_ohs_1_0)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__btb_0__DOT__btb_0_ext_R0_data 
                                                      >> 0xeU))
                                           : (IData)(
                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__btb_1__DOT__btb_0_ext_R0_data 
                                                      >> 0xeU))))
                                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__ebtb__DOT__ebtb_ext__DOT__mem_0_0__DOT__ram_R_0_data
                                    : (VL_ULL(2) + 
                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_pc 
                                        + (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT___GEN_63) 
                                                                              >> 0xcU))))))) 
                                            << 0xdU) 
                                           | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT___GEN_63)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2976(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2976\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT___T_232_bits 
        = (VL_ULL(0xffffffffff) & ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_hit_ohs_3_0)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__btb_0__DOT__btb_0_ext_R0_data 
                                                      >> 0x2aU))
                                           : (IData)(
                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__btb_1__DOT__btb_0_ext_R0_data 
                                                      >> 0x2aU))))
                                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__ebtb__DOT__ebtb_ext__DOT__mem_0_0__DOT__ram_R_0_data
                                    : (VL_ULL(6) + 
                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_pc 
                                        + (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT___GEN_155) 
                                                                              >> 0xcU))))))) 
                                            << 0xdU) 
                                           | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT___GEN_155)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT___T_201_bits 
        = (VL_ULL(0xffffffffff) & ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_hit_ohs_2_0)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__btb_0__DOT__btb_0_ext_R0_data 
                                                      >> 0x1cU))
                                           : (IData)(
                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__btb_1__DOT__btb_0_ext_R0_data 
                                                      >> 0x1cU))))
                                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__ebtb__DOT__ebtb_ext__DOT__mem_0_0__DOT__ram_R_0_data
                                    : (VL_ULL(4) + 
                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__s1_pc 
                                        + (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT___GEN_109) 
                                                                              >> 0xcU))))))) 
                                            << 0xdU) 
                                           | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT___GEN_109)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT___T_139_bits 
        = (VL_ULL(0xffffffffff) & ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_hit_ohs_0_0)
                                           ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__btb_0__DOT__btb_0_ext_R0_data)
                                           : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__btb_1__DOT__btb_0_ext_R0_data)))
                                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__ebtb__DOT__ebtb_ext__DOT__mem_0_0__DOT__ram_R_0_data
                                    : (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_pc 
                                       + (((QData)((IData)(
                                                           (0x7ffffffU 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT___GEN_17) 
                                                                             >> 0xcU))))))) 
                                           << 0xdU) 
                                          | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT___GEN_17))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT___T_170_bits 
        = (VL_ULL(0xffffffffff) & ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_hit_ohs_1_0)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__btb_0__DOT__btb_0_ext_R0_data 
                                                      >> 0xeU))
                                           : (IData)(
                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__btb_1__DOT__btb_0_ext_R0_data 
                                                      >> 0xeU))))
                                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__ebtb__DOT__ebtb_ext__DOT__mem_0_0__DOT__ram_R_0_data
                                    : (VL_ULL(2) + 
                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_pc 
                                        + (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT___GEN_63) 
                                                                              >> 0xcU))))))) 
                                            << 0xdU) 
                                           | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT___GEN_63)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2977(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2977\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT___T_232_bits 
        = (VL_ULL(0xffffffffff) & ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_hit_ohs_3_0)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__btb_0__DOT__btb_0_ext_R0_data 
                                                      >> 0x2aU))
                                           : (IData)(
                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__btb_1__DOT__btb_0_ext_R0_data 
                                                      >> 0x2aU))))
                                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__ebtb__DOT__ebtb_ext__DOT__mem_0_0__DOT__ram_R_0_data
                                    : (VL_ULL(6) + 
                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_pc 
                                        + (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT___GEN_155) 
                                                                              >> 0xcU))))))) 
                                            << 0xdU) 
                                           | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT___GEN_155)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT___T_201_bits 
        = (VL_ULL(0xffffffffff) & ((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_hit_ohs_2_0)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__btb_0__DOT__btb_0_ext_R0_data 
                                                      >> 0x1cU))
                                           : (IData)(
                                                     (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__btb_1__DOT__btb_0_ext_R0_data 
                                                      >> 0x1cU))))
                                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__ebtb__DOT__ebtb_ext__DOT__mem_0_0__DOT__ram_R_0_data
                                    : (VL_ULL(4) + 
                                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__s1_pc 
                                        + (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT___GEN_109) 
                                                                              >> 0xcU))))))) 
                                            << 0xdU) 
                                           | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT___GEN_109)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_409 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_420));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_465 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_476));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_493 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_504));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_437 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_448));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_185 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_196));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_381 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_392));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_353 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_364));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2978(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2978\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_325 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_336));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_297 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_308));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_269 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_280));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_241 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_252));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_213 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_224));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_157 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_168));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_129 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_140));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
        = (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_425));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_3_ctrl_imm_sel 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT___T_90)
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_3_ctrl_imm_sel));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_2_ctrl_imm_sel 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT___T_75)
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_2_ctrl_imm_sel));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_ctrl_imm_sel 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT___T_60)
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_1_ctrl_imm_sel));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_312[0U] 
        = (IData)(((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__pre_s3_5_bypass))
                    ? (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_130[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_130[0U])))
                    : (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_302[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_302[0U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_312[1U] 
        = (IData)((((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__pre_s3_5_bypass))
                     ? (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_130[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_130[0U])))
                     : (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_302[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_302[0U])))) 
                   >> 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_312[2U] 
        = (IData)(((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__pre_s3_5_bypass))
                    ? (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_130[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_130[2U])))
                    : (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_302[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_302[2U])))));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_312[3U] 
        = (IData)((((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT__pre_s3_5_bypass))
                     ? (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_130[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___GEN_130[2U])))
                     : (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_302[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceD__DOT___T_302[2U])))) 
                   >> 0x20U));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2979(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2979\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp401[3];
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__do_enq;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__blockUncachedGrant 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3748)
            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar_auto_in_0_d_valid)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__dataArb_io_in_0_valid)
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__dataArb_io_out_valid))
            : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__dataArb_io_out_valid));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_valid) {
        __Vtemp401[0U] = (IData)((((QData)((IData)(
                                                   (1U 
                                                    & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U])))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((0xff800000U 
                                                                 & ((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125) 
                                                                            & (~ 
                                                                               (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                                                << 3U) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                                                >> 0x1dU)))) 
                                                                                | VL_GTS_III(1,15,15, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125)))
                                                                                 ? 0x1c0U
                                                                                 : 0U))) 
                                                                           & (~ 
                                                                              ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                                                ? 0x194U
                                                                                : 0U))) 
                                                                          & (~ 
                                                                             ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                                               ? 0x80U
                                                                               : 0U))) 
                                                                         & (~ 
                                                                            ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                              ? 0x40U
                                                                              : 0U))) 
                                                                        | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                                            ? 0x6bU
                                                                            : 0U)) 
                                                                       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                                           ? 0x17fU
                                                                           : 0U)) 
                                                                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                          ? 0x180U
                                                                          : 0U)) 
                                                                     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)
                                                                         ? 0x1c0U
                                                                         : 0U)) 
                                                                    << 0x17U)) 
                                                                | (0x7fffffU 
                                                                   & (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                         | (0U 
                                                                            == 
                                                                            (7U 
                                                                             & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                                                << 3U) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                                                >> 0x1dU))))) 
                                                                        | VL_GTS_III(1,15,15, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125)))
                                                                        ? 
                                                                       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)
                                                                         ? 0x400000U
                                                                         : 0U)
                                                                        : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_122) 
                                                                      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                                          ? 0x7fffffU
                                                                          : 0U))))))));
        __Vtemp401[1U] = ((0xfffffffeU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U]) 
                          | (IData)(((((QData)((IData)(
                                                       (1U 
                                                        & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)) 
                                                           & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U])))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xff800000U 
                                                                     & ((((((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125) 
                                                                                & (~ 
                                                                                (((0U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                                                << 3U) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                                                >> 0x1dU)))) 
                                                                                | VL_GTS_III(1,15,15, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125)))
                                                                                 ? 0x1c0U
                                                                                 : 0U))) 
                                                                               & (~ 
                                                                                ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                                                 ? 0x194U
                                                                                 : 0U))) 
                                                                              & (~ 
                                                                                ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                                                 ? 0x80U
                                                                                 : 0U))) 
                                                                             & (~ 
                                                                                ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                                 ? 0x40U
                                                                                 : 0U))) 
                                                                            | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
                                                                                ? 0x6bU
                                                                                : 0U)) 
                                                                           | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                                               ? 0x17fU
                                                                               : 0U)) 
                                                                          | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
                                                                              ? 0x180U
                                                                              : 0U)) 
                                                                         | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)
                                                                             ? 0x1c0U
                                                                             : 0U)) 
                                                                        << 0x17U)) 
                                                                    | (0x7fffffU 
                                                                       & (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut) 
                                                                             | (0U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                                                << 3U) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                                                >> 0x1dU))))) 
                                                                            | VL_GTS_III(1,15,15, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125)))
                                                                            ? 
                                                                           ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)
                                                                             ? 0x400000U
                                                                             : 0U)
                                                                            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_122) 
                                                                          | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
                                                                              ? 0x7fffffU
                                                                              : 0U))))))) 
                                     >> 0x20U)));
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_71_data[0U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_singleOut)
                    ? __Vtemp401[0U] : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_singleOut)
                                         ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_52[0U]
                                         : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
                                             ? ((7U 
                                                 == 
                                                 (7U 
                                                  & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                      << 3U) 
                                                     | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                        >> 0x1dU))))
                                                 ? 0U
                                                 : 
                                                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[0U])
                                             : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags)
                                                 ? 
                                                ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_22)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_27)
                                                   ? 
                                                  vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[0U]
                                                   : 
                                                  vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[0U]))
                                                 : 
                                                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[0U]))))
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_singleOut)
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_52[0U]
                    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
                        ? ((7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                          << 3U) | 
                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                          >> 0x1dU))))
                            ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[0U])
                        : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags)
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_22)
                                ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_27)
                                         ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[0U]
                                         : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[0U]))
                            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[0U]))));
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_71_data[1U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_singleOut)
                    ? __Vtemp401[1U] : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_singleOut)
                                         ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_52[1U]
                                         : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
                                             ? ((7U 
                                                 == 
                                                 (7U 
                                                  & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                      << 3U) 
                                                     | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                        >> 0x1dU))))
                                                 ? 0xe0080000U
                                                 : 
                                                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U])
                                             : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags)
                                                 ? 
                                                ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_22)
                                                  ? 0xe0080000U
                                                  : 
                                                 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_27)
                                                   ? 
                                                  vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U]
                                                   : 
                                                  vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[1U]))
                                                 : 
                                                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[1U]))))
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_singleOut)
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_52[1U]
                    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
                        ? ((7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                          << 3U) | 
                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                          >> 0x1dU))))
                            ? 0xe0080000U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U])
                        : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags)
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_22)
                                ? 0xe0080000U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_27)
                                                  ? 
                                                 vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U]
                                                  : 
                                                 vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[1U]))
                            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[1U]))));
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_71_data[2U] 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_singleOut)
                    ? (1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U])
                    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_singleOut)
                        ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_52[2U]
                        : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
                            ? ((7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                              << 3U) 
                                             | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                >> 0x1dU))))
                                ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U])
                            : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags)
                                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_22)
                                    ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_27)
                                             ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U]
                                             : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[2U]))
                                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[2U]))))
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_singleOut)
                    ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_52[2U]
                    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
                        ? ((7U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                          << 3U) | 
                                         (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                          >> 0x1dU))))
                            ? 0U : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U])
                        : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags)
                            ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_22)
                                ? 0U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_27)
                                         ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U]
                                         : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[2U]))
                            : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnj[2U]))));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_71_exc 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_singleOut)
                    ? ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc) 
                         << 4U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow) 
                                   << 2U)) | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__commonCase) 
                                                & (VL_GTS_III(1,15,15, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125)) 
                                                   | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_100) 
                                                        & VL_GTES_III(1,6,6, 0U, 
                                                                      (0x3fU 
                                                                       & ((VL_EXTENDS_II(14,13, 
                                                                                (0xfffU 
                                                                                & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                                                                                << 0xcU) 
                                                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                                                                >> 0x14U)))) 
                                                                           - (IData)(0x700U)) 
                                                                          >> 8U)))) 
                                                       & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_89) 
                                                      & (~ 
                                                         ((((~ 
                                                             (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_89 
                                                              >> 1U)) 
                                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_122 
                                                               >> 0x18U)) 
                                                           & (0U 
                                                              != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_96)) 
                                                          & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_101) 
                                                              & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig 
                                                                 >> 1U)) 
                                                             | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp) 
                                                                & (0U 
                                                                   != 
                                                                   (3U 
                                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig))))))))) 
                                               << 1U) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__commonCase) 
                                                    & (VL_GTS_III(1,15,15, 0x6bU, (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125)) 
                                                       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__RecFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_100))))))
                    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
                        ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_15) 
                           << 4U) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags)
                                      ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_15) 
                                          | ((7U == 
                                              (7U & 
                                               ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[2U] 
                                                 << 3U) 
                                                | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[1U] 
                                                   >> 0x1dU)))) 
                                             & (~ (
                                                   vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[1U] 
                                                   >> 0x13U)))) 
                                         << 4U) : 0U)))
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_54)
                    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_15) 
                       << 4U) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags)
                                  ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT___T_15) 
                                      | ((7U == (7U 
                                                 & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[2U] 
                                                     << 3U) 
                                                    | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[1U] 
                                                       >> 0x1dU)))) 
                                         & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[1U] 
                                               >> 0x13U)))) 
                                     << 4U) : 0U)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2980(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2980\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT__p3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20__DOT___GEN_128));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_3__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_850 = 3U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_843) 
             & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_844)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_850 
                = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_866) 
                   | (2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_866) 
                            << 1U)));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_want_victimize) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__probe_bits_param = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_17) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__probe_bits_param 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_2__DOT__ram_param___05FT_15_data;
        }
    }
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_92))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_108 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_4;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_218_1 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_154))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_218_1 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_189;
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1_io_enq_ready) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1_io_enq_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT__ram_mask__v0 = 1U;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT__maybe_full = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT___T_4) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__Queue_1__DOT__do_enq;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_785) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_4_0_state))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_corrupt 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_corrupt___05FT_15_data;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2981(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2981\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_708) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__in_xbar__DOT__TLMonitor__DOT___T_680 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_opcode___05FT_15_data;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_708) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__TLMonitor__DOT___T_680 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_opcode___05FT_15_data;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1044) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1011 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1776) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1743 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1827) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1794 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_535 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                     >> 0x11U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_534 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                     >> 0x14U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_536 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                     >> 0xeU));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_537 
            = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                        >> 9U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_538 
            = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                << 0x17U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                             >> 9U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_535 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                     >> 0x11U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_534 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                     >> 0x14U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_536 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                     >> 0xeU));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2982(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2982\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_537 
            = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                        >> 9U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_538 
            = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                << 0x17U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                             >> 9U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_535 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                     >> 0x11U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_534 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                     >> 0x14U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_536 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                     >> 0xeU));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_537 
            = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                        >> 9U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_538 
            = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                << 0x17U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                             >> 9U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_535 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                     >> 0x11U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_534 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                     >> 0x14U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_536 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                     >> 0xeU));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_537 
            = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                        >> 9U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_538 
            = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                << 0x17U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                             >> 9U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2983(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2983\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_535 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                     >> 0x11U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_534 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                     >> 0x14U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_536 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                     >> 0xeU));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_537 
            = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                        >> 9U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_538 
            = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                << 0x17U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                             >> 9U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_535 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                     >> 0x11U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_534 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                     >> 0x14U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_536 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                     >> 0xeU));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_537 
            = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                        >> 9U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_538 
            = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                << 0x17U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                             >> 9U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_535 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                     >> 0x11U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_534 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                     >> 0x14U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2984(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2984\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_536 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                     >> 0xeU));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_537 
            = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                        >> 9U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_562) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_538 
            = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                << 0x17U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                             >> 9U));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_785) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_4_0_state))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_source 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_source___05FT_15_data;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4375 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1495));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4371 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1495));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_4365 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT__dmem_req_0_valid) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__lsu__DOT___T_1495));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_615) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__TLMonitor__DOT___T_585 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_615) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__TLMonitor__DOT___T_585 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_615) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__TLMonitor__DOT___T_585 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_615) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__widget__DOT__TLMonitor__DOT___T_585 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_615) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__TLMonitor__DOT___T_585 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_615) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__coupler_to_bus_named_subsystem_mbus__DOT__widget__DOT__TLMonitor__DOT___T_585 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_bits_source;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_1054 = 3U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_1047) 
             & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_1048)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_1054 
                = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_1070) 
                   | (2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_1070) 
                            << 1U)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2985(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2985\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_952 = 3U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_945) 
             & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_946)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_952 
                = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_968) 
                   | (2U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_968) 
                            << 1U)));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_replay)))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_miss 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb_io_resp_miss;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT___T_59 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__s1_valid;
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_785) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_4_0_state))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_5_0_bits_param 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_param___05FT_15_data;
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_io_enq_ready) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_ghist_new_saw_branch_not_taken__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1881)
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1893)
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_predicted_ghist_new_saw_branch_not_taken)
                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s2_ghist_new_saw_branch_not_taken))
                : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s2_ghist_new_saw_branch_not_taken));
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_ghist_new_saw_branch_not_taken__v0 = 1U;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x140U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_sscratch 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x180U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_4641) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_satp_ppn 
                    = (QData)((IData)((0xfffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_745_1 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_701))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_745_1 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_716;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2986(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2986\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_sepc 
        = (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen)
                                    ? ((0x141U == (0xfffU 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))
                                        ? (~ (VL_ULL(1) 
                                              | (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata)))
                                        : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___GEN_82)
                                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___GEN_82));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
        = (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_404));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x143U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_stval 
                = (VL_ULL(0xffffffffff) & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata);
        } else {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__exception) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__delegate) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_stval 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_io_tval;
                    }
                }
            }
        }
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__exception) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__delegate) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_stval 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_io_tval;
                }
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_61 
        = (0x3fU & (IData)((VL_ULL(0xffffffffff) & 
                            ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen)
                              ? ((0xb04U == (0xfffU 
                                             & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))
                                  ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata
                                  : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_62)))
                              : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_62))))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0xb04U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_63 
                = (VL_ULL(0x3ffffffff) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                                          >> 6U));
        } else {
            if ((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_62))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_63 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_66;
            }
        }
    } else {
        if ((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_62))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_63 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_66;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2987(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2987\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x7b2U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_dscratch 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_fflags 
        = (0x1fU & (IData)(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen)
                             ? ((3U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))
                                 ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata
                                 : ((1U == (0xfffU 
                                            & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))
                                     ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata
                                     : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___GEN_121))))
                             : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___GEN_121)))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x302U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_medeleg 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_129 
        = ((3U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_hpmevent_1)))
            ? (0U != ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_hpmevent_1 
                       >> 8U) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_82))))
            : ((2U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_hpmevent_1)))
                ? (0U != ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_hpmevent_1 
                           >> 8U) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_82))))
                : ((1U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_hpmevent_1)))
                    ? (0U != ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_hpmevent_1 
                               >> 8U) & (QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob_io_flush_valid) 
                                                         << 1U)))))
                    : (0U != ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_hpmevent_1 
                               >> 8U) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob_io_com_xcpt_valid)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2988(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2988\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_96 
        = ((3U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_hpmevent_0)))
            ? (0U != ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_hpmevent_0 
                       >> 8U) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_82))))
            : ((2U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_hpmevent_0)))
                ? (0U != ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_hpmevent_0 
                           >> 8U) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT___T_82))))
                : ((1U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_hpmevent_0)))
                    ? (0U != ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_hpmevent_0 
                               >> 8U) & (QData)((IData)(
                                                        ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob_io_flush_valid) 
                                                         << 1U)))))
                    : (0U != ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_hpmevent_0 
                               >> 8U) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rob_io_com_xcpt_valid)))))));
    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ctrl_killd)))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ex_ctrl_sel_alu1 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__id_xcpt)
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_730)
                    ? 2U : ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT___T_109))
                             ? 2U : 1U)) : ((((0x14U 
                                               == (0x34U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                                              | (0x48U 
                                                 == 
                                                 (0x48U 
                                                  & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                                             << 1U) 
                                            | (((((0U 
                                                   == 
                                                   (0x4004U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)) 
                                                  | (0U 
                                                     == 
                                                     (0x50U 
                                                      & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                                                 | (0U 
                                                    == 
                                                    (0x44U 
                                                     & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                                                | (0U 
                                                   == 
                                                   (0x24U 
                                                    & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits))) 
                                               | (0U 
                                                  == 
                                                  (0x18U 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ibuf__DOT__RVCExpander_io_out_bits)))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2989(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2989\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0_io_f0_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__meta_1__DOT__meta_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0 
            = (0x7fU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0_io_f0_pc 
                                >> 4U)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0_io_f0_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__meta_1__DOT__meta_0_ext__DOT__mem_0_1__DOT__ram_R_0_addr_pipe_0 
            = (0x7fU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0_io_f0_pc 
                                >> 4U)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0_io_f0_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__meta_1__DOT__meta_0_ext__DOT__mem_0_2__DOT__ram_R_0_addr_pipe_0 
            = (0x7fU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0_io_f0_pc 
                                >> 4U)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0_io_f0_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__meta_1__DOT__meta_0_ext__DOT__mem_0_3__DOT__ram_R_0_addr_pipe_0 
            = (0x7fU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0_io_f0_pc 
                                >> 4U)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_f0_req_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__meta_1__DOT__meta_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0 
            = (0x7fU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1_io_f0_pc 
                                >> 4U)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_f0_req_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__meta_1__DOT__meta_0_ext__DOT__mem_0_1__DOT__ram_R_0_addr_pipe_0 
            = (0x7fU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1_io_f0_pc 
                                >> 4U)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_f0_req_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__meta_1__DOT__meta_0_ext__DOT__mem_0_2__DOT__ram_R_0_addr_pipe_0 
            = (0x7fU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1_io_f0_pc 
                                >> 4U)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_f0_req_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__meta_1__DOT__meta_0_ext__DOT__mem_0_3__DOT__ram_R_0_addr_pipe_0 
            = (0x7fU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1_io_f0_pc 
                                >> 4U)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0_io_f0_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__meta_0__DOT__meta_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0 
            = (0x7fU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0_io_f0_pc 
                                >> 4U)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0_io_f0_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__meta_0__DOT__meta_0_ext__DOT__mem_0_1__DOT__ram_R_0_addr_pipe_0 
            = (0x7fU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0_io_f0_pc 
                                >> 4U)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0_io_f0_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__meta_0__DOT__meta_0_ext__DOT__mem_0_2__DOT__ram_R_0_addr_pipe_0 
            = (0x7fU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0_io_f0_pc 
                                >> 4U)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0_io_f0_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_2__DOT__meta_0__DOT__meta_0_ext__DOT__mem_0_3__DOT__ram_R_0_addr_pipe_0 
            = (0x7fU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0_io_f0_pc 
                                >> 4U)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2990(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2990\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_f0_req_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__meta_0__DOT__meta_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0 
            = (0x7fU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1_io_f0_pc 
                                >> 4U)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_f0_req_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__meta_0__DOT__meta_0_ext__DOT__mem_0_1__DOT__ram_R_0_addr_pipe_0 
            = (0x7fU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1_io_f0_pc 
                                >> 4U)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_f0_req_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__meta_0__DOT__meta_0_ext__DOT__mem_0_2__DOT__ram_R_0_addr_pipe_0 
            = (0x7fU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1_io_f0_pc 
                                >> 4U)));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd_io_f0_req_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_2__DOT__meta_0__DOT__meta_0_ext__DOT__mem_0_3__DOT__ram_R_0_addr_pipe_0 
            = (0x7fU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1_io_f0_pc 
                                >> 4U)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1072 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1_io_in_d_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1072 
                = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT__d_first)
                             ? ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                                        >> 4U))) : 0U)
                             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1074)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1952 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1775) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1952 
                = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT__d_first)
                             ? ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                                        >> 4U))) : 0U)
                             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__TLMonitor__DOT___T_1954)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1901 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1724) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1901 
                = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT__d_first)
                             ? ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                                        >> 4U))) : 0U)
                             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1903)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2991(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2991\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT___T_28 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar_auto_in_1_d_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT___T_28 
                = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT___T_31)
                             ? ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                                        >> 4U))) : 0U)
                             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__icache__DOT___T_30)));
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & ((~ (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_d_ready) 
                                              & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_deq_valid)) 
                                             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater_io_repeat)))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater__DOT___GEN_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_54 
        = (0x3fU & (IData)((VL_ULL(0xffffffffff) & 
                            ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen)
                              ? ((0xb03U == (0xfffU 
                                             & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))
                                  ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata
                                  : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_55)))
                              : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_55))))));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0xb03U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_56 
                = (VL_ULL(0x3ffffffff) & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                                          >> 6U));
        } else {
            if ((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_55))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_56 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_59;
            }
        }
    } else {
        if ((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_55))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_56 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_59;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_dpc 
        = (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen)
                                    ? ((0x7b1U == (0xfffU 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))
                                        ? (~ (VL_ULL(1) 
                                              | (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata)))
                                        : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___GEN_78)
                                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___GEN_78));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2992(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2992\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mepc 
        = (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen)
                                    ? ((0x341U == (0xfffU 
                                                   & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))
                                        ? (~ (VL_ULL(1) 
                                              | (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata)))
                                        : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___GEN_89)
                                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___GEN_89));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_448) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__resHi = 0U;
    } else {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__state))) {
            if ((0x40U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__count))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__resHi 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__isHi;
            } else {
                if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__state))) {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_99) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__resHi 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__isHi;
                    } else {
                        if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__state))) {
                            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__resHi = 0U;
                        }
                    }
                } else {
                    if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__state))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__resHi = 0U;
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__state))) {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT___T_99) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__resHi 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__isHi;
                } else {
                    if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__state))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__resHi = 0U;
                    }
                }
            } else {
                if ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__state))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__div__DOT__resHi = 0U;
                }
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x343U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mtval 
                = (VL_ULL(0xffffffffff) & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata);
        } else {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__exception) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
                    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__delegate)))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mtval 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_io_tval;
                    }
                }
            }
        }
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__exception) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__delegate)))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mtval 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_io_tval;
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2993(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2993\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreakm = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x7b0U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreakm 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0xfU)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaks = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x7b0U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaks 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0xdU)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaku = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x7b0U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaku 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0xcU)));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17_io_in_uop_valid) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__slot_uop_br_mask 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_45)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_20_io_out_uop_br_mask)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT___GEN_43)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_19_io_out_uop_br_mask)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_18_io_out_uop_br_mask)));
        }
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__slot_uop_br_mask 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_17__DOT__next_br_mask;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_39 
        = ((IData)(vlTOPp->reset) ? 0U : (0x3fU & (IData)(
                                                          ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen)
                                                            ? 
                                                           ((0xb02U 
                                                             == 
                                                             (0xfffU 
                                                              & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))
                                                             ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata
                                                             : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_40)))
                                                            : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_40))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2994(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2994\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_47 
        = ((IData)(vlTOPp->reset) ? 0U : (0x3fU & (IData)(
                                                          ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen)
                                                            ? 
                                                           ((0xb00U 
                                                             == 
                                                             (0xfffU 
                                                              & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))
                                                             ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata
                                                             : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_48)))
                                                            : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_48))))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_41 = VL_ULL(0);
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0xb02U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_41 
                    = (VL_ULL(0x3ffffffffffffff) & 
                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                        >> 6U));
            } else {
                if ((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_40))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_41 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_44;
                }
            }
        } else {
            if ((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_40))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_41 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_44;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_49 = VL_ULL(0);
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0xb00U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_49 
                    = (VL_ULL(0x3ffffffffffffff) & 
                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata 
                        >> 6U));
            } else {
                if ((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_48))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_49 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_52;
                }
            }
        } else {
            if ((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_48))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_49 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT___T_52;
            }
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT___T_1)
          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT___GEN_9))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_strb__v0 
            = (0xffU & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                         << 0x1fU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                                      >> 1U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_strb__v0 = 1U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2995(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2995\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp422[4];
    WData/*127:0*/ __Vtemp423[4];
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT___T_1)
          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT___GEN_9))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_data__v0 
            = (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U])) 
                << 0x3fU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[1U])) 
                              << 0x1fU) | ((QData)((IData)(
                                                           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[0U])) 
                                           >> 1U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_data__v0 = 1U;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT__p2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_pipeline__DOT__fp_issue_unit__DOT__slots_21__DOT___GEN_127));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x340U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mscratch 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s0_clk_en) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s1_did_read 
            = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__dataArb__DOT___T_1)) 
               & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcacheArb_io_mem_req_valid) 
                  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_161)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x100U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))) {
                VL_EXTEND_WQ(103,64, __Vtemp422, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata);
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr 
                    = (1U & (__Vtemp422[0U] >> 0x13U));
            } else {
                if ((0x300U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))) {
                    VL_EXTEND_WQ(103,64, __Vtemp423, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata);
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr 
                        = (1U & (__Vtemp423[0U] >> 0x13U));
                }
            }
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_1)
          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_18))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_len__v0 
            = (0xffU & (~ (0x7fffU & (((IData)(0x7ffU) 
                                       << (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                                                 >> 0xeU))) 
                                      >> 3U))));
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_len__v0 = 1U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2996(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2996\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp424[4];
    WData/*127:0*/ __Vtemp425[4];
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_1)
          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_18))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_echo_tl_state_source__v0 
            = (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                        >> 9U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_echo_tl_state_source__v0 = 1U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_1)
          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_18))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_echo_tl_state_size__v0 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                     >> 0xeU));
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_echo_tl_state_size__v0 = 1U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_1)
          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_18))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_addr__v0 
            = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                << 0x17U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[2U] 
                             >> 9U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_addr__v0 = 1U;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_sum = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x100U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))) {
                VL_EXTEND_WQ(103,64, __Vtemp424, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata);
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_sum 
                    = (1U & (__Vtemp424[0U] >> 0x12U));
            } else {
                if ((0x300U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))) {
                    VL_EXTEND_WQ(103,64, __Vtemp425, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata);
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_sum 
                        = (1U & (__Vtemp425[0U] >> 0x12U));
                }
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_14__DOT__p3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_14__DOT___GEN_143));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11_io_in_uop_valid) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_br_mask 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_42)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_14_io_out_uop_br_mask)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT___GEN_40)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_13_io_out_uop_br_mask)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_12_io_out_uop_br_mask)));
        }
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__slot_uop_br_mask 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_11__DOT__next_br_mask;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2997(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2997\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27_io_in_uop_valid) {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27_io_in_uop_valid) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_br_mask 
                = ((4U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_74)))
                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_30_io_out_uop_br_mask)
                    : ((2U == (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT___GEN_72)))
                        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_29_io_out_uop_br_mask)
                        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_28_io_out_uop_br_mask)));
        }
    } else {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__slot_uop_br_mask 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_27__DOT__next_br_mask;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
          ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___T_1)
          : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_18))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_wen__v0 
            = (1U & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_274[3U] 
                        >> 0x16U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_wen__v0 = 1U;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_corrupt__v0 
            = (1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[0U]);
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_data__v0[0U] 
            = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[1U] 
                << 0x1fU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[0U] 
                             >> 1U));
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_data__v0[1U] 
            = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[2U] 
                << 0x1fU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[1U] 
                             >> 1U));
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_data__v0[2U] 
            = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[3U] 
                << 0x1fU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[2U] 
                             >> 1U));
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_data__v0[3U] 
            = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[4U] 
                << 0x1fU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[3U] 
                             >> 1U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_param__v0 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                     >> 8U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_opcode__v0 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                     >> 0xbU));
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2998(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2998\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_address__v0 
            = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                << 0x1fU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[4U] 
                             >> 1U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_address__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_size__v0 
            = (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                       >> 4U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache_auto_out_c_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_source__v0 
            = (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT___T_1011[5U] 
                     >> 1U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_3__DOT___T;
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
        = (0x3fffffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_411));
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT__p2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__mem_issue_unit__DOT__slots_15__DOT___GEN_147));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1185 = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ll_wen) 
             | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1215))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1185 
                = (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1191 
                   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1215)
                       ? ((IData)(1U) << (0x1fU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                                   >> 7U)))
                       : 0U));
        } else {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__ll_wen) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1185 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT___T_1191;
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x180U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x14U)))) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_3818) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_satp_ppn 
                    = (QData)((IData)((0xfffffU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata))));
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2999(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2999\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x302U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x14U)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_medeleg 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x140U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x14U)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_sscratch 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_sepc 
        = (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
                                    ? ((0x141U == (0xfffU 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x14U)))
                                        ? (~ (VL_ULL(1) 
                                              | (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata)))
                                        : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_80)
                                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_80));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x143U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x14U)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_stval 
                = (VL_ULL(0xffffffffff) & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
        } else {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
                    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__delegate) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_stval 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr_io_tval;
                    }
                }
            }
        }
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
                if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__delegate) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_stval 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr_io_tval;
                }
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
        = (VL_ULL(0x7fffffffff) & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_366);
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x7b2U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x14U)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_dscratch 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3000(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3000\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_fflags 
        = (0x1fU & (IData)(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
                             ? ((3U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                                  >> 0x14U)))
                                 ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata
                                 : ((1U == (0xfffU 
                                            & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                               >> 0x14U)))
                                     ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata
                                     : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_118))))
                             : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_118)))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_218_0 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_154))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_218_0 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__tlMasterXbar__DOT___T_188;
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x340U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x14U)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mscratch 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_dpc 
        = (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
                                    ? ((0x7b1U == (0xfffU 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x14U)))
                                        ? (~ (VL_ULL(1) 
                                              | (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata)))
                                        : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_76)
                                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_76));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x343U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x14U)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtval 
                = (VL_ULL(0xffffffffff) & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
        } else {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
                    if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__delegate)))) {
                        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtval 
                            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr_io_tval;
                    }
                }
            }
        }
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug)))) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__delegate)))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtval 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr_io_tval;
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3001(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3001\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_47 
        = ((IData)(vlTOPp->reset) ? 0U : (0x3fU & (IData)(
                                                          ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
                                                            ? 
                                                           ((0xb00U 
                                                             == 
                                                             (0xfffU 
                                                              & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                                                 >> 0x14U)))
                                                             ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata
                                                             : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_48)))
                                                            : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_48))))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_49 = VL_ULL(0);
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0xb00U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_49 
                    = (VL_ULL(0x3ffffffffffffff) & 
                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
                        >> 6U));
            } else {
                if ((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_48))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_49 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_52;
                }
            }
        } else {
            if ((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_48))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_49 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_52;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaks = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x7b0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaks 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0xdU)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreakm = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x7b0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreakm 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0xfU)));
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3002(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3002\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp427[4];
    WData/*127:0*/ __Vtemp428[4];
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaku = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x7b0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaku 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 0xcU)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_step = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x7b0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_step 
                    = (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
                                     >> 2U)));
            }
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__regsel_sourceD 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT___T_685;
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0x104U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                  >> 0x14U)))) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mie 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_3824;
        } else {
            if ((0x304U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mie 
                    = (VL_ULL(0xaaa) & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_tsr = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x300U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))) {
                VL_EXTEND_WQ(103,64, __Vtemp427, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata);
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_tsr 
                    = (1U & (__Vtemp427[0U] >> 0x16U));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_tw = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x300U == (0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr_exe_unit__DOT___T_83))) {
                VL_EXTEND_WQ(103,64, __Vtemp428, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__wdata);
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_tw 
                    = (1U & (__Vtemp428[0U] >> 0x15U));
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3003(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3003\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_39 
        = ((IData)(vlTOPp->reset) ? 0U : (0x3fU & (IData)(
                                                          ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
                                                            ? 
                                                           ((0xb02U 
                                                             == 
                                                             (0xfffU 
                                                              & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                                                 >> 0x14U)))
                                                             ? vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata
                                                             : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_40)))
                                                            : (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_40))))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_41 = VL_ULL(0);
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0xb02U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_41 
                    = (VL_ULL(0x3ffffffffffffff) & 
                       (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata 
                        >> 6U));
            } else {
                if ((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_40))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_41 
                        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_44;
                }
            }
        } else {
            if ((0x40U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_40))) {
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_41 
                    = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___T_44;
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu_io_in_valid) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_typ 
            = (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__ex_reg_inst 
                     >> 0x14U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__fractB_Z 
            = (0x7fffffU & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_sig);
    }
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)))) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__fractB_Z 
            = (VL_ULL(0xfffffffffffff) & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_sig);
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3004(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3004\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp429[4];
    WData/*127:0*/ __Vtemp430[4];
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3567 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3631) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3567 
                = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__d_first)
                             ? ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                                        >> 4U))) : 0U)
                             : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT___T_3569)));
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)
                ? (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_io_a 
                                        >> 0x1dU))))
                : ((0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_io_a 
                                         >> 0x1dU)))) 
                   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isInf)));
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mepc 
        = (VL_ULL(0xffffffffff) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen)
                                    ? ((0x341U == (0xfffU 
                                                   & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x14U)))
                                        ? (~ (VL_ULL(1) 
                                              | (~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata)))
                                        : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_87)
                                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT___GEN_87));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_tsr = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                VL_EXTEND_WQ(103,64, __Vtemp429, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_tsr 
                    = (1U & (__Vtemp429[0U] >> 0x16U));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_tw = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                VL_EXTEND_WQ(103,64, __Vtemp430, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_tw 
                    = (1U & (__Vtemp430[0U] >> 0x15U));
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3005(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3005\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp431[4];
    WData/*127:0*/ __Vtemp432[4];
    WData/*127:0*/ __Vtemp433[4];
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_tvm = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                VL_EXTEND_WQ(103,64, __Vtemp431, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_tvm 
                    = (1U & (__Vtemp431[0U] >> 0x14U));
            }
        }
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isInf_Z 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf) 
                   | (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_io_b 
                                           >> 0x1dU))))));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater__DOT___T_5) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__Repeater__DOT__saved_size 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_1 
                = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_4__DOT___T_11;
        }
    }
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_2_ctrl_fcn_dw 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT___T_75)) 
           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_2_ctrl_fcn_dw));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT___T_448) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__jmp_unit__DOT__div__DOT__div__DOT__req_dw 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_1_ctrl_fcn_dw;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_sum = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x100U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                VL_EXTEND_WQ(103,64, __Vtemp432, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_sum 
                    = (1U & (__Vtemp432[0U] >> 0x12U));
            } else {
                if ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                          >> 0x14U)))) {
                    VL_EXTEND_WQ(103,64, __Vtemp433, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_sum 
                        = (1U & (__Vtemp433[0U] >> 0x12U));
                }
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3006(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3006\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp434[4];
    WData/*127:0*/ __Vtemp435[4];
    WData/*127:0*/ __Vtemp436[4];
    WData/*127:0*/ __Vtemp437[4];
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x100U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                VL_EXTEND_WQ(103,64, __Vtemp434, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr 
                    = (1U & (__Vtemp434[0U] >> 0x13U));
            } else {
                if ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                          >> 0x14U)))) {
                    VL_EXTEND_WQ(103,64, __Vtemp435, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mxr 
                        = (1U & (__Vtemp435[0U] >> 0x13U));
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__csr_wen) {
            if ((0x100U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                      >> 0x14U)))) {
                VL_EXTEND_WQ(103,64, __Vtemp436, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
                vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs 
                    = ((0U != (3U & ((__Vtemp436[1U] 
                                      << 0x13U) | (
                                                   __Vtemp436[0U] 
                                                   >> 0xdU))))
                        ? 3U : 0U);
            } else {
                if ((0x300U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__wb_reg_inst 
                                          >> 0x14U)))) {
                    VL_EXTEND_WQ(103,64, __Vtemp437, vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__wdata);
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_fs 
                        = ((0U != (3U & ((__Vtemp437[1U] 
                                          << 0x13U) 
                                         | (__Vtemp437[0U] 
                                            >> 0xdU))))
                            ? 3U : 0U);
                }
            }
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT___T;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_15_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT___T;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3007(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3007\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT___T;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_cause = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__exception) {
            if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__trapToDebug) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)))) {
                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_cause 
                        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__reg_singleStepped)
                            ? 4U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__causeIsDebugInt)
                                     ? 3U : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core__DOT__csr__DOT__causeIsDebugTrigger)
                                              ? 2U : 1U)));
                }
            }
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data;
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_mask__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT___T;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_io_enq_ready) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_ghist_old_history__v0 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1881)
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_1893)
                    ? (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___GEN_229[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___GEN_229[0U])))
                    : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s2_ghist_old_history)
                : vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__s2_ghist_old_history);
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f3__DOT__ram_ghist_old_history__v0 = 1U;
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z 
            = (1U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_io_a 
                              >> 0x20U)) ^ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)) 
                                            & (IData)(
                                                      (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_io_b 
                                                       >> 0x20U)))));
    }
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isInf_Z 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)
                ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf)
                : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf) 
                   | (0U == (7U & ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
                                    << 3U) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                              >> 0x1dU))))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__3008(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__3008\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__exe_reg_uops_2_ctrl_op_fcn 
        = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT___T_75)
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_2_ctrl_op_fcn));
    if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__majorExc_Z 
            = ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)
                ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_7) 
                   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_sqrt))
                : ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_7) 
                     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isNaN) 
                        & (~ (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_sig 
                              >> 0x16U)))) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_div)) 
                   | (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN)) 
                       & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf))) 
                      & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__fpuOpt__DOT__divSqrt_io_b 
                                              >> 0x1dU)))))));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_36 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_8) {
            vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_36 
                = (1U & (~ ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_17)) 
                            | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___T_16)))));
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt__v0 
            = (1U & vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_1136[0U]);
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_data__v0[0U] 
            = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_1136[1U] 
                << 0x1fU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_1136[0U] 
                             >> 1U));
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_data__v0[1U] 
            = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_1136[2U] 
                << 0x1fU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_1136[1U] 
                             >> 1U));
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_data__v0[2U] 
            = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_1136[3U] 
                << 0x1fU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_1136[2U] 
                             >> 1U));
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_data__v0[3U] 
            = ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_1136[4U] 
                << 0x1fU) | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_1136[3U] 
                             >> 1U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_in_2_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_param__v0 
            = (3U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_1136[4U] 
                     >> 0xfU));
        vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__buffer__DOT__Queue_1__DOT___T;
    }
}
