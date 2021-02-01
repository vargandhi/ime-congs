// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2186(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2186\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:140653:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_128))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:300 assert (!repeater.io.full || !aHasData)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:140664:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_128))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:140667: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_debug.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 140667, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:140675:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_134))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:303 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:140686:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_134))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:140689: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_debug.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 140689, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2187(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2187\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:137364:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_128))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:300 assert (!repeater.io.full || !aHasData)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:137375:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_128))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:137378: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_clint.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 137378, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:137386:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_134))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:303 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:137397:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_134))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:137400: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_clint.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 137400, "");
        }
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_mask__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2188(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2188\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__ram_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkA__DOT__putbuffer__DOT__data_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__data_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__ListBuffer__DOT__tail__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__ram_is_hella__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_source__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2189(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2189\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue__DOT__ram_address__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2190(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2190\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:875983:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_imem_sfence_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2361))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at TLB.scala:368 assert(!io.sfence.bits.rs1 || (io.sfence.bits.addr >> pgIdxBits) === vpn)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:875994:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__core_io_imem_sfence_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__frontend__DOT__tlb__DOT___T_2361))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:875997: Assertion failed in %NTestHarness.dut.system.tile.frontend.tlb\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 875997, "");
        }
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_0__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2191(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2191\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_1__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_2__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_3__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_4__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_5__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_6__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bankedStore__DOT__cc_banks_7__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:450425:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_1151))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: [freelist] Returning a free physical register.\n    at rename-freelist.scala:94 assert (!(io.debug.freelist & dealloc_mask).orR, \"[freelist] Returning a free physical register.\")\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:450436:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_1151))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:450439: Assertion failed in %NTestHarness.dut.system.boom_tile.core.fp_rename_stage.freelist\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 450439, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:450447:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_1443))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: [freelist] Leaking physical registers.\n    at rename-freelist.scala:95 assert (!io.debug.pipeline_empty || PopCount(io.debug.freelist) >= (numPregs - numLregs - 1).U,\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:450458:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT___T_1443))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:450461: Assertion failed in %NTestHarness.dut.system.boom_tile.core.fp_rename_stage.freelist\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 450461, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:422335:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1175))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: [freelist] Returning a free physical register.\n    at rename-freelist.scala:94 assert (!(io.debug.freelist & dealloc_mask).orR, \"[freelist] Returning a free physical register.\")\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:422346:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1175))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:422349: Assertion failed in %NTestHarness.dut.system.boom_tile.core.rename_stage.freelist\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 422349, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:422357:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1479))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: [freelist] Leaking physical registers.\n    at rename-freelist.scala:95 assert (!io.debug.pipeline_empty || PopCount(io.debug.freelist) >= (numPregs - numLregs - 1).U,\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:422368:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT___T_1479))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:422371: Assertion failed in %NTestHarness.dut.system.boom_tile.core.rename_stage.freelist\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 422371, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2193(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2193\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:109371:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_847))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:69 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:109382:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_847))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:109385: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 109385, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:109393:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_854))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:71 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:109404:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_854))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:109407: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 109407, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2195(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2195\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38060:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_237))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38071:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_237))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38074: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38074, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38082:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_271))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38093:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_271))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38096: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38096, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38104:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_274))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38115:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_274))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38118: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38118, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38126:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((4U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                             >> 0x16U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38137:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((4U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                             >> 0x16U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38140: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38140, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38148:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_281))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38159:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_281))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38162: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38162, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38170:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38181:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38184: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38184, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38192:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U == (0xffffU & (~ 
                                                  ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[4U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38203:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U == (0xffffU & (~ 
                                                  ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[4U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38206: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38206, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38214:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38225:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38228: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38228, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38236:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_237))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38247:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_237))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38250: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38250, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38258:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_271))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38269:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_271))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38272: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38272, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38280:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_274))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38291:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_274))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38294: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38294, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38302:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((4U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                             >> 0x16U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38313:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((4U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                             >> 0x16U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38316: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38316, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38324:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_281))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38335:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_281))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38338: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38338, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38346:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38357:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38360: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38360, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38368:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38379:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38382: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38382, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38390:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U == (0xffffU & (~ 
                                                  ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[4U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38401:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U == (0xffffU & (~ 
                                                  ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[4U] 
                                                      >> 1U))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38404: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38404, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38412:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38423:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38426: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38426, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38434:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_383))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38445:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_383))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38448: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38448, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38456:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_274))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38467:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_274))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38470: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38470, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38478:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_281))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38489:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_281))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38492: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38492, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38500:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38511:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38514: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38514, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38522:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_397))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38533:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_397))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38536: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38536, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38544:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38555:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38558: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38558, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38566:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_383))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38577:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_383))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38580: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38580, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38588:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_274))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38599:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_274))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38602: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38602, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38610:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_281))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38621:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_281))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38624: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38624, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38632:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38643:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38646: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38646, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38654:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_397))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38665:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_397))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38668: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38668, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38676:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_383))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38687:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_383))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38690: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38690, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38698:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_274))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38709:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_274))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38712: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38712, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38720:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_281))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38731:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_281))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38734: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38734, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38742:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38753:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38756: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38756, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38764:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_461))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38775:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_461))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38778: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38778, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38786:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_476))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38797:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_476))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38800: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38800, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38808:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_274))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38819:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_274))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38822: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38822, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38830:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_281))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38841:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_281))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38844: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38844, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38852:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38863:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38866: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38866, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38874:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_397))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38885:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_397))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38888: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38888, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38896:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_476))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38907:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_476))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38910: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38910, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38918:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_274))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38929:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_274))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38932: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38932, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38940:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_281))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38951:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_281))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38954: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38954, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38962:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38973:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38976: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38976, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38984:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_397))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38995:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_397))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:38998: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 38998, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39006:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_383))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39017:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_383))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39020: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39020, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39028:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_274))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39039:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_274))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39042: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39042, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39050:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_281))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39061:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_281))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39064: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39064, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39072:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((1U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39083:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((1U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                             >> 0x1aU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39086: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39086, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39094:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_397))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39105:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_397))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39108: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39108, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39116:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39127:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[5U] 
                                          >> 0x1dU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_650[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39130: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39130, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39138:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39149:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39152: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39152, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39160:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_582))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39171:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_582))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39174: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39174, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39182:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39193:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39196: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39196, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39204:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39215:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39218: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39218, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39226:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39237:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39240: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39240, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39248:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39259:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39262: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39262, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39270:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_582))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39281:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_582))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39284: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39284, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39292:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39303:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39306: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39306, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39314:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39325:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39328: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39328, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39336:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39347:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39350: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39350, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39358:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39369:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39372: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39372, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39380:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_582))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39391:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_582))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39394: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39394, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39402:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39413:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((4U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39416: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39416, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39424:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39435:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39438: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39438, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39446:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39457:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39460: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39460, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39468:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_650))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39479:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_650))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39482: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39482, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39490:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_582))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39501:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_582))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39504: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39504, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39512:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39523:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39526: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39526, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39534:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39545:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39548: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39548, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39556:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_582))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39567:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_582))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39570: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39570, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39578:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39589:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39592: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39592, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39600:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_650))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39611:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_650))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39614: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39614, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39622:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_582))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39633:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_582))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39636: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39636, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39644:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39655:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39658: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39658, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39666:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39677:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39680: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39680, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39688:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_983))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel carries Probe type unsupported by client (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39699:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_983))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39702: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39702, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39710:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                         & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ 
                                                                 (0x80000000U 
                                                                  | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address)))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries unmanaged address (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39721:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                         & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ 
                                                                 (0x80000000U 
                                                                  | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address)))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39724: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39724, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39732:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_989))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries source that is not first source (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39743:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_989))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39746: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39746, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39754:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                         & (~ ((0U == (0x3fU & (0x80000000U 
                                                | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39765:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                         & (~ ((0U == (0x3fU & (0x80000000U 
                                                | vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39768: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39768, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39776:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                         & (~ ((2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_44))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries invalid cap param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39787:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                         & (~ ((2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT___T_44))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39790: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39790, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39798:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ 
                                                                 ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                                                   << 0x1fU) 
                                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[4U] 
                                                                     >> 1U))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39809:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ 
                                                                 ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                                                   << 0x1fU) 
                                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[4U] 
                                                                     >> 1U))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39812: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39812, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39820:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1252))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39831:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1252))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39834: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39834, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39842:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((4U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                             >> 6U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39853:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((4U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                             >> 6U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39856: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39856, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39864:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1259))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39875:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1259))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39878: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39878, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39886:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((5U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                             >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39897:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((5U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                             >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39900: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39900, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39908:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck is corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39919:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39922: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39922, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39930:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ 
                                                                 ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                                                   << 0x1fU) 
                                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[4U] 
                                                                     >> 1U))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39941:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ 
                                                                 ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                                                   << 0x1fU) 
                                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[4U] 
                                                                     >> 1U))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39944: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39944, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39952:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1252))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39963:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1252))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39966: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39966, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39974:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((4U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                             >> 6U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39985:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((4U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                             >> 6U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39988: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 39988, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:39996:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1259))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40007:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1259))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40010: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40010, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40018:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((5U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                             >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40029:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((5U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                             >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40032: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40032, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40040:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1298))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40051:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1298))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40054: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40054, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40062:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1332))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40073:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1332))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40076: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40076, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40084:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1252))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40095:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1252))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40098: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40098, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40106:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((4U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                             >> 6U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40117:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((4U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                             >> 6U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40120: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40120, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40128:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1259))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40139:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1259))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40142: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40142, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40150:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                             >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid shrink param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40161:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                             >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40164: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40164, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40172:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release is corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40183:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40186: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40186, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40194:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1298))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40205:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1298))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40208: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40208, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40216:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1332))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40227:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1332))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40230: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40230, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40238:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1252))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40249:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1252))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40252: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40252, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40260:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((4U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                             >> 6U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40271:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((4U <= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                             >> 6U))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40274: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40274, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40282:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1259))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40293:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1259))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40296: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40296, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40304:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                             >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid shrink param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40315:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                             >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40318: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40318, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40326:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ 
                                                                 ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                                                   << 0x1fU) 
                                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[4U] 
                                                                     >> 1U))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40337:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ 
                                                                 ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                                                   << 0x1fU) 
                                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[4U] 
                                                                     >> 1U))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40340: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40340, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40348:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1252))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40359:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1252))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40362: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40362, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40370:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1259))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40381:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1259))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40384: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40384, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40392:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                             >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40403:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                             >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40406: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40406, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40414:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck is corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40425:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40428: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40428, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40436:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ 
                                                                 ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                                                   << 0x1fU) 
                                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[4U] 
                                                                     >> 1U))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40447:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ 
                                                                 ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                                                   << 0x1fU) 
                                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[4U] 
                                                                     >> 1U))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40450: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40450, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40458:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1252))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40469:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1252))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40472: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40472, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40480:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1259))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40491:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1259))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40494: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40494, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40502:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                             >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40513:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                             >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40516: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40516, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40524:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ 
                                                                 ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                                                   << 0x1fU) 
                                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[4U] 
                                                                     >> 1U))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40535:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((VL_ULL(0) == (VL_ULL(0x1f0000000) 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ 
                                                                 ((vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                                                   << 0x1fU) 
                                                                  | (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[4U] 
                                                                     >> 1U))))))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40538: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40538, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40546:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1252))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40557:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1252))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40560: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40560, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40568:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1259))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40579:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1259))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40582: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40582, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40590:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                             >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40601:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                             >> 0xaU))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40604: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40604, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40612:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck is corrupt (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40623:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[5U] 
                                          >> 0xdU)))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___T_750[0U]) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40626: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40626, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40634:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1476))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1496))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40645:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1476))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1496))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40648: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40648, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40656:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1476))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1500))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40667:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1476))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1500))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40670: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40670, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40678:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1476))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1504))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40689:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1476))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1504))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40692: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40692, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40700:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1476))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1508))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40711:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1476))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1508))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40714: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40714, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40722:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1476))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1512))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40733:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1476))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1512))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40736: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40736, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40744:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1524))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1545))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40755:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1524))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1545))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40758: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40758, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40766:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1524))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1549))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40777:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1524))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1549))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40780: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40780, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40788:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1524))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1553))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40799:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1524))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1553))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40802: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40802, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40810:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1524))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1557))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40821:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1524))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1557))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40824: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40824, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40832:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1524))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1561))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40843:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1524))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1561))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40846: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40846, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40854:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1524))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1565))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40865:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1524))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1565))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40868: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40868, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40876:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1578))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1602))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel param changed within multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40887:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1578))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1602))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40890: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40890, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40898:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1578))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1610))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel source changed within multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40909:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1578))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1610))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40912: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40912, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40920:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1578))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1614))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel addresss changed with multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40931:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB_io_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1578))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1614))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40934: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40934, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40942:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1626))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1646))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40953:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1626))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1646))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40956: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40956, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40964:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1626))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1650))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40975:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1626))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1650))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40978: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 40978, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40986:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1626))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1654))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:40997:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1626))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1654))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41000: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 41000, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41008:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1626))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1658))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41019:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1626))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1658))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41022: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 41022, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41030:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1626))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1662))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41041:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1626))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1662))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41044: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 41044, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41052:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1722) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1737))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41063:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1722) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1737))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41066: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 41066, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41074:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1758) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1771))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41085:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1758) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1771))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41088: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 41088, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41096:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1758) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1782) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41107:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1758) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1782) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41110: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 41110, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41118:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1758) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1791))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41129:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1758) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1791))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41132: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 41132, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41140:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1758) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1675))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1764)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1803))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41151:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1758) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1675))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1764)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1803))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41154: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 41154, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41162:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1810))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41173:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1810))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41176: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 41176, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41184:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1829))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41195:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1829))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41198: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 41198, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41206:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1516) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1845))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode) 
                              >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode) 
                                           >> 1U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1869))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41217:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1516) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1845))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode) 
                              >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__Queue_1_io_deq_bits_opcode) 
                                           >> 1U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1869))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41220: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 41220, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41228:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_e_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1880))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at BusWrapper.scala:180:97)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41239:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_e_valid) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_l2__DOT__widget__DOT__TLMonitor__DOT___T_1880))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:41242: Assertion failed in %NTestHarness.dut.system.subsystem_sbus.coupler_to_bus_named_subsystem_l2.widget.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 41242, "");
        }
    }
}
