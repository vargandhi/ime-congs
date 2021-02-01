// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2266(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2266\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_address__v0 = 0U;
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:323330:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_13_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2361))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at TLB.scala:368 assert(!io.sfence.bits.rs1 || (io.sfence.bits.addr >> pgIdxBits) === vpn)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:323341:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT___T_13_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__tlb__DOT___T_2361))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:323344: Assertion failed in %NTestHarness.dut.system.boom_tile.frontend.tlb\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 323344, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2267(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2267\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:143563:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_134))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:303 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:143574:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_134))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:143577: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 143577, "");
        }
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_sfbs_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_size__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2268(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2268\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__f3_entry_age 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__f3_entry_age;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__f3_entry_age 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__f3_entry_age;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__entries_0_s_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__entries_0_s_cnt;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2269(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2269\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__entries_0_s_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__entries_0_s_cnt;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__entries_0_age 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__entries_0_age;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2270(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2270\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__entries_0_age 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__entries_0_age;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__entries_0_p_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__entries_0_p_cnt;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2271(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2271\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__entries_0_p_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__entries_0_p_cnt;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__entries_0_conf 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__entries_0_conf;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__entries_0_conf 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__entries_0_conf;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2272(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2272\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__entries_0_tag 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__entries_0_tag;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__entries_0_tag 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__entries_0_tag;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__f3_entry_s_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_3__DOT__f3_entry_s_cnt;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__f3_entry_s_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_3__DOT__f3_entry_s_cnt;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2273(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2273\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__f3_entry_age 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__f3_entry_age;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__f3_entry_age 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__f3_entry_age;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__entries_0_s_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__entries_0_s_cnt;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2274(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2274\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__entries_0_s_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__entries_0_s_cnt;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__entries_0_age 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__entries_0_age;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2275(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2275\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__entries_0_age 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__entries_0_age;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__entries_0_p_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__entries_0_p_cnt;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2276(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2276\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__entries_0_p_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__entries_0_p_cnt;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__entries_0_conf 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__entries_0_conf;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__entries_0_conf 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__entries_0_conf;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2277(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2277\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__entries_0_tag 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__entries_0_tag;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__entries_0_tag 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__entries_0_tag;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__f3_entry_s_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_2__DOT__f3_entry_s_cnt;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__f3_entry_s_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_2__DOT__f3_entry_s_cnt;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2278(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2278\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__f3_entry_age 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__f3_entry_age;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__f3_entry_age 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__f3_entry_age;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__entries_0_s_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__entries_0_s_cnt;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2279(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2279\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__entries_0_s_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__entries_0_s_cnt;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__entries_0_age 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__entries_0_age;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2280(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2280\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__entries_0_age 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__entries_0_age;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__entries_0_p_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__entries_0_p_cnt;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2281(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2281\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__entries_0_p_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__entries_0_p_cnt;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__entries_0_conf 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__entries_0_conf;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__entries_0_conf 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__entries_0_conf;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2282(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2282\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__entries_0_tag 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__entries_0_tag;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__entries_0_tag 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__entries_0_tag;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__f3_entry_s_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_1__DOT__f3_entry_s_cnt;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__f3_entry_s_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_1__DOT__f3_entry_s_cnt;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2283(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2283\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__f3_entry_age 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__f3_entry_age;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__f3_entry_age 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__f3_entry_age;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2284(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2284\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__entries_0_s_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__entries_0_s_cnt;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__entries_0_s_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__entries_0_s_cnt;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2285(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2285\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__entries_0_age 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__entries_0_age;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__entries_0_age 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__entries_0_age;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2286(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2286\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__entries_0_p_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__entries_0_p_cnt;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__entries_0_p_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__entries_0_p_cnt;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__entries_0_conf 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__entries_0_conf;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2287(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2287\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__entries_0_conf 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__entries_0_conf;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__entries_0_tag 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__entries_0_tag;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2288(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2288\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__entries_0_tag 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__entries_0_tag;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__f3_entry_s_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_0__DOT__components_0__DOT__columns_0__DOT__f3_entry_s_cnt;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__f3_entry_s_cnt 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__bpd__DOT__banked_predictors_1__DOT__components_0__DOT__columns_0__DOT__f3_entry_s_cnt;
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141673:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141684:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141687: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 141687, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141695:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_211))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141706:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_211))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141709: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 141709, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141717:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141728:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141731: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 141731, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141739:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141750:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141753: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 141753, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141761:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141772:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141775: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 141775, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141783:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141794:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141797: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 141797, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141805:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141816:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141819: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 141819, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141827:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141838:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141841: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 141841, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141849:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141860:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141863: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 141863, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141871:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_211))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141882:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_211))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141885: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 141885, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141893:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141904:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141907: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 141907, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141915:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141926:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141929: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 141929, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141937:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141948:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141951: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 141951, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141959:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141970:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141973: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 141973, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141981:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141992:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:141995: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 141995, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142003:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142014:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142017: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142017, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142025:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142036:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142039: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142039, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142047:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_322))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142058:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_322))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142061: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142061, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142069:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142080:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142083: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142083, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142091:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142102:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142105: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142105, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142113:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142124:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142127: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142127, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142135:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_336))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142146:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_336))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142149: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142149, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142157:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142168:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142171: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142171, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142179:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142190:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142193: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142193, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142201:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142212:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142215: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142215, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142223:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142234:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142237: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142237, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142245:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142256:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142259: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142259, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142267:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_336))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142278:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_336))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142281: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142281, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142289:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142300:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142303: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142303, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142311:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142322:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142325: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142325, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142333:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142344:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142347: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142347, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142355:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142366:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142369: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142369, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142377:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_394))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142388:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_394))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142391: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142391, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142399:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142410:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142413: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142413, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142421:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142432:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142435: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142435, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142443:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142454:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142457: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142457, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142465:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142476:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142479: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142479, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142487:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_336))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142498:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_336))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142501: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142501, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142509:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142520:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142523: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142523, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142531:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142542:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142545: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142545, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142553:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142564:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142567: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142567, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142575:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142586:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142589: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142589, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142597:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_336))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142608:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_336))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142611: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142611, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142619:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142630:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142633: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142633, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142641:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142652:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142655: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142655, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142663:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142674:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142677: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142677, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142685:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142696:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142699: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142699, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142707:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_336))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142718:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_336))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142721: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142721, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142729:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142740:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142743: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142743, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142751:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_506))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BootROM.scala:74:64)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142762:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_506))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142765: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142765, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142773:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_657))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_677))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142784:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_657))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_677))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142787: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142787, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142795:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_657))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_681))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142806:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_657))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_681))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142809: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142809, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142817:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_657))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_685))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142828:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_657))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_685))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142831: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142831, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142839:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_657))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_689))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142850:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_657))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_689))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142853: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142853, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142861:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_657))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_693))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142872:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_657))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_693))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142875: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142875, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142883:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_705))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_734))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BootROM.scala:74:64)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142894:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_705))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_734))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142897: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142897, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142905:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_705))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_738))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BootROM.scala:74:64)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142916:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_705))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_738))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142919: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142919, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142927:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_806) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_821))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142938:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_806) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_821))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142941: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142941, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142949:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_777))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_855))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BootROM.scala:74:64)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142960:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_777))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_855))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142963: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142963, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142971:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_777))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_868))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BootROM.scala:74:64)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142982:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_777))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_868))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142985: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 142985, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:142993:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_777))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_875))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BootROM.scala:74:64)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:143004:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_777))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_875))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:143007: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 143007, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:143015:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_777))) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_759))) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid)) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_848)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_887))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:143026:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_777))) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_759))) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_a_valid)) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_848)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_887))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:143029: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 143029, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:143037:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_906))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BootROM.scala:74:64)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:143048:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__TLMonitor__DOT___T_906))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:143051: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_bootrom.fragmenter.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 143051, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2290(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2290\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size__v0 = 0U;
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113624:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113635:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113638: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 113638, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113646:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_211))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113657:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_211))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113660: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 113660, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113668:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113679:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113682: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 113682, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113690:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113701:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113704: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 113704, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113712:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113723:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113726: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 113726, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113734:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113745:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113748: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 113748, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113756:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113767:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113770: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 113770, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113778:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113789:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113792: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 113792, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113800:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113811:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113814: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 113814, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113822:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_211))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113833:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_211))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113836: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 113836, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113844:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113855:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113858: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 113858, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113866:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113877:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113880: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 113880, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113888:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113899:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113902: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 113902, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113910:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113921:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113924: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 113924, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113932:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113943:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113946: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 113946, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113954:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113965:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113968: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 113968, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113976:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113987:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113990: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 113990, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:113998:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_322))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114009:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_322))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114012: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114012, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114020:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114031:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114034: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114034, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114042:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114053:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114056: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114056, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114064:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114075:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114078: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114078, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114086:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_336))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114097:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_336))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114100: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114100, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114108:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114119:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114122: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114122, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114130:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_322))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114141:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_322))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114144: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114144, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114152:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114163:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114166: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114166, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114174:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114185:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114188: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114188, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114196:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114207:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114210: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114210, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114218:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_336))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114229:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_336))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114232: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114232, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114240:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_322))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114251:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_322))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114254: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114254, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114262:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114273:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114276: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114276, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114284:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114295:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114298: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114298, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114306:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114317:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114320: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114320, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114328:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_400))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114339:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_400))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114342: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114342, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114350:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_415))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114361:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_415))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114364: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114364, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114372:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114383:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114386: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114386, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114394:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114405:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114408: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114408, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114416:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114427:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114430: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114430, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114438:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_336))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114449:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_336))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114452: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114452, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114460:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_415))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114471:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_415))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114474: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114474, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114482:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114493:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114496: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114496, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114504:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114515:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114518: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114518, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114526:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114537:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114540: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114540, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114548:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_336))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114559:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_336))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114562: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114562, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114570:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_322))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114581:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_322))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114584: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114584, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114592:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114603:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114606: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114606, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114614:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114625:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114628: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114628, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114636:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114647:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114650: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114650, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114658:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_336))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114669:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_336))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114672: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114672, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114680:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114691:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114694: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114694, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114702:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data)) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114713:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data)) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114716: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114716, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114724:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_521))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114735:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_521))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114738: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114738, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114746:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114757:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114760: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114760, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114768:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114779:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114782: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114782, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114790:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114801:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114804: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114804, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114812:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114823:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114826: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114826, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114834:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_521))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114845:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_521))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114848: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114848, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114856:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114867:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114870: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114870, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114878:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114889:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114892: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114892, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114900:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114911:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114914: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114914, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114922:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114933:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114936: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114936, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114944:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114955:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114958: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114958, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114966:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_521))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114977:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_521))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114980: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 114980, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114988:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:114999:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115002: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115002, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115010:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115021:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115024: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115024, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115032:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115043:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115046: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115046, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115054:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115065:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115068: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115068, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115076:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_589))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115087:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_589))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115090: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115090, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115098:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_521))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115109:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_521))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115112: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115112, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115120:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115131:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115134: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115134, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115142:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115153:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115156: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115156, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115164:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_521))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115175:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_521))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115178: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115178, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115186:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115197:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115200: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115200, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115208:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_589))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115219:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_589))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115222: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115222, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115230:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_521))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115241:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_521))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115244: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115244, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115252:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115263:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115266: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115266, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115274:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115285:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115288: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115288, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115296:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_672))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_692))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115307:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_672))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_692))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115310: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115310, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115318:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_672))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_696))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115329:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_672))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_696))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115332: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115332, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115340:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_672))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_700))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115351:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_672))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_700))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115354: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115354, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115362:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_672))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_704))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115373:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_672))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_704))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115376: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115376, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115384:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_672))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_708))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115395:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_672))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_708))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115398: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115398, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115406:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_720))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_741))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115417:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_720))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_741))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115420: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115420, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115428:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_720))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_745))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115439:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_720))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_745))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115442: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115442, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115450:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_720))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_749))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115461:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_720))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_749))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115464: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115464, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115472:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_720))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_753))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115483:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_720))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_753))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115486: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115486, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115494:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_720))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_757))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115505:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_720))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_757))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115508: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115508, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115516:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_720))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_761))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115527:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_720))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_761))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115530: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115530, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115538:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_821) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_836))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115549:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_821) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_836))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115552: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115552, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115560:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_857) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_870))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115571:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_857) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_870))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115574: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115574, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115582:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_857) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_883))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115593:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_857) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_883))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115596: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115596, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115604:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_857) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_890))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115615:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_857) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_890))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115618: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115618, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115626:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_857) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_774))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_863)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_902))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115637:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_857) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_774))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_863)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_902))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115640: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115640, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115648:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_909))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115659:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_909))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115662: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115662, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115670:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_928))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at CanHaveBuiltInDevices.scala:33:32)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115681:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__TLMonitor__DOT___T_928))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:115684: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.wrapped_error_device.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 115684, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2291(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2291\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72784:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72795:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72798: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 72798, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72806:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_211))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72817:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_211))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72820: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 72820, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72828:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72839:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72842: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 72842, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72850:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72861:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72864: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 72864, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72872:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72883:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72886: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 72886, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72894:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72905:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72908: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 72908, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72916:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72927:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72930: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 72930, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72938:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72949:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72952: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 72952, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72960:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72971:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72974: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 72974, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72982:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_211))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72993:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_211))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:72996: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 72996, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73004:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73015:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73018: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73018, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73026:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73037:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_15_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73040: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73040, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73048:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73059:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73062: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73062, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73070:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73081:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73084: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73084, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73092:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73103:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73106: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73106, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73114:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73125:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_15_data)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73128: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73128, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73136:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73147:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73150: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73150, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73158:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_322))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73169:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_322))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73172: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73172, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73180:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73191:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73194: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73194, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73202:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73213:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73216: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73216, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73224:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73235:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73238: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73238, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73246:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_336))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73257:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_336))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73260: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73260, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73268:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73279:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73282: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73282, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73290:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_322))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73301:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_322))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73304: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73304, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73312:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73323:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73326: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73326, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73334:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73345:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73348: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73348, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73356:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73367:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73370: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73370, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73378:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_336))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73389:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_336))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73392: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73392, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73400:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_322))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73411:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_322))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73414: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73414, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73422:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73433:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73436: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73436, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73444:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73455:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73458: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73458, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73466:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73477:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73480: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73480, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73488:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_400))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73499:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_400))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73502: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73502, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73510:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_415))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73521:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_415))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73524: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73524, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73532:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73543:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73546: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73546, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73554:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73565:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73568: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73568, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73576:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73587:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73590: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73590, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73598:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_336))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73609:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_336))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73612: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73612, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73620:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_415))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73631:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_415))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73634: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73634, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73642:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73653:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73656: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73656, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73664:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73675:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73678: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73678, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73686:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73697:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73700: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73700, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73708:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_336))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73719:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_336))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73722: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73722, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73730:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73741:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73744: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73744, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73752:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_214))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73763:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_214))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73766: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73766, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73774:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_221))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73785:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_221))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73788: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73788, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73796:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73807:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73810: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73810, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73818:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_336))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73829:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_336))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73832: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73832, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73840:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73851:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73854: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73854, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73862:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data)) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73873:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data)) 
                                     | (IData)(vlTOPp->reset))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73876: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73876, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73884:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_518))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73895:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_518))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73898: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73898, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73906:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73917:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73920: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73920, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73928:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73939:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73942: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73942, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73950:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73961:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73964: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73964, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73972:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73983:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73986: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 73986, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:73994:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_518))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74005:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_518))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74008: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74008, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74016:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74027:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74030: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74030, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74038:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74049:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74052: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74052, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74060:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74071:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74074: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74074, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74082:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74093:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74096: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74096, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74104:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74115:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74118: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74118, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74126:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is denied (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74137:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74140: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74140, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74148:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_518))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74159:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_518))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74162: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74162, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74170:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74181:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74184: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74184, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74192:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74203:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74206: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74206, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74214:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74225:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74228: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74228, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74236:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74247:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74250: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74250, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74258:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_586))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74269:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_586))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74272: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74272, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74280:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74291:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74294: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74294, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74302:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_518))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74313:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_518))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74316: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74316, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74324:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74335:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74338: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74338, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74346:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74357:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74360: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74360, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74368:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is denied (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74379:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74382: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74382, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74390:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_518))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74401:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_518))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74404: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74404, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74412:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74423:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74426: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74426, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74434:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_586))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74445:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_586))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74448: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74448, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74456:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74467:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74470: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74470, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74478:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_518))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74489:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_518))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74492: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74492, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74500:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74511:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74514: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74514, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74522:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74533:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_corrupt___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74536: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74536, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74544:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is denied (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74555:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_denied___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74558: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74558, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74566:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_669))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_689))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74577:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_669))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_689))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74580: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74580, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74588:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_669))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_693))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74599:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_669))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_693))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74602: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74602, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74610:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_669))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_697))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74621:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_669))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_697))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74624: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74624, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74632:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_669))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_701))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74643:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_669))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_701))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74646: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74646, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74654:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_669))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_705))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74665:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_669))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_705))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74668: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74668, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74676:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_717))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_738))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74687:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_717))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_738))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74690: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74690, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74698:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_717))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_742))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74709:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_717))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_742))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74712: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74712, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74720:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_717))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_746))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74731:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_717))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_746))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74734: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74734, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74742:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_717))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_750))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74753:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_717))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_750))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74756: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74756, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74764:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_717))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_754))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74775:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_717))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_754))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74778: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74778, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74786:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_717))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_758))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74797:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_717))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_758))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74800: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74800, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74808:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_818) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_833))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74819:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_818) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_833))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74822: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74822, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74830:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_854) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_867))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74841:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_854) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_867))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74844: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74844, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74852:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_854) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_880))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74863:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_854) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_880))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74866: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74866, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74874:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_854) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_887))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74885:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_854) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_887))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74888: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74888, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74896:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_854) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_771))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_860)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_899))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74907:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_854) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_771))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_860)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue_1__DOT__ram_opcode___05FT_15_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_899))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74910: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74910, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74918:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_906))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 4 (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74929:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_906))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74932: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74932, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74940:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_925))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at CrossingHelper.scala:17:44)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74951:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__TLMonitor__DOT___T_925))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:74954: Assertion failed in %NTestHarness.dut.system.subsystem_pbus.buffer_1.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 74954, "");
        }
    }
}
