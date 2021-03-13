// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1086(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1086\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:68387:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_10))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:68400:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_10))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:68403: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 68403, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:68411:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_17))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:68424:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_17))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:68427: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 68427, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:68435:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_24))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:68448:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_24))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:68451: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 68451, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1087(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1087\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__s1_speculative 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__s1_speculative;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1088(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1088\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_index__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_size__v0 = 0U;
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36724:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36737:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:36740: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 36740, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36748:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36761:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:36764: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 36764, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36772:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36785:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:36788: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 36788, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36796:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36809:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:36812: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 36812, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36820:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_67))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36833:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_67))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:36836: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 36836, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36844:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36857:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:36860: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 36860, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36868:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36881:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:36884: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 36884, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36892:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36905:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:36908: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 36908, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36916:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36929:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:36932: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 36932, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36940:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36953:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:36956: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 36956, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36964:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36977:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:36980: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 36980, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:36988:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37001:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__aFrag))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37004: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37004, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37012:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_67))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37025:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_67))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37028: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37028, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37036:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37049:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37052: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37052, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37060:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37073:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37076: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37076, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37084:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37097:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37100: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37100, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37108:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37121:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37124: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37124, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37132:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37145:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37148: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37148, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37156:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_172) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37169:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_172) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37172: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37172, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37180:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37193:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37196: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37196, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37204:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_67))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37217:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_67))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37220: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37220, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37228:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37241:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37244: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37244, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37252:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_189))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37265:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_189))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37268: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37268, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37276:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37289:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37292: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37292, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37300:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_220))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37313:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_220))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37316: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37316, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37324:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37337:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37340: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37340, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37348:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_67))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37361:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_67))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37364: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37364, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37372:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37385:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37388: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37388, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37396:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_189))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37409:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_189))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37412: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37412, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37420:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_220))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37433:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_220))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37436: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37436, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37444:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37457:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37460: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37460, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37468:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_67))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37481:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_67))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37484: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37484, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37492:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37505:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37508: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37508, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37516:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_277))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37529:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_277))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37532: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37532, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37540:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37553:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37556: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37556, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37564:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37577:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37580: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37580, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37588:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_67))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37601:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_67))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37604: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37604, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37612:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37625:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37628: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37628, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37636:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_189))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37649:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_189))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37652: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37652, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37660:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37673:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37676: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37676, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37684:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37697:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37700: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37700, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37708:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_67))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37721:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_67))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37724: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37724, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37732:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37745:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37748: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37748, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37756:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_189))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37769:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_189))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37772: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37772, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37780:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37793:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37796: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37796, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37804:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37817:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37820: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37820, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37828:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_67))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37841:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_67))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37844: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37844, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37852:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37865:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37868: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37868, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37876:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_189))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37889:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_189))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37892: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37892, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37900:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37913:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37916: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37916, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37924:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37937:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37940: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37940, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37948:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37961:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37964: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37964, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37972:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37985:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:37988: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 37988, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:37996:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38009:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38012: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38012, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38020:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38033:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38036: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38036, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38044:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38057:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38060: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38060, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38068:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38081:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38084: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38084, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38092:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38105:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38108: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38108, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38116:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38129:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38132: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38132, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38140:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38153:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38156: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38156, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38164:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38177:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38180: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38180, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38188:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38201:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38204: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38204, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38212:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is denied (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38225:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38228: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38228, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38236:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38249:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38252: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38252, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38260:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38273:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38276: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38276, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38284:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38297:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38300: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38300, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38308:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38321:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38324: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38324, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38332:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38345:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38348: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38348, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38356:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_471))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38369:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_471))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38372: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38372, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38380:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38393:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38396: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38396, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38404:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38417:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38420: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38420, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38428:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38441:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38444: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38444, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38452:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38465:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38468: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38468, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38476:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is denied (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38489:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38492: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38492, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38500:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38513:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38516: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38516, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38524:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38537:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38540: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38540, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38548:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_471))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38561:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_471))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38564: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38564, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38572:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38585:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38588: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38588, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38596:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38609:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38612: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38612, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38620:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38633:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38636: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38636, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38644:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38657:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38660: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38660, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38668:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is denied (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38681:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38684: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38684, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38692:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_546))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38705:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_546))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38708: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38708, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38716:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_550))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38729:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_550))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38732: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38732, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38740:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_554))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38753:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_554))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38756: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38756, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38764:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_558))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38777:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_558))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38780: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38780, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38788:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_562))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38801:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_562))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38804: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38804, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38812:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_570))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38825:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_570))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38828: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38828, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38836:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_574))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38849:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_574))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38852: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38852, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38860:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_578))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38873:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_578))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38876: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38876, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38884:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_582))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38897:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_582))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38900: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38900, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38908:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_586))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38921:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_586))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38924: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38924, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38932:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_590))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38945:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_590))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38948: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38948, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38956:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_597) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_603))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38969:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_597) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_603))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38972: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38972, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38980:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_608) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_622))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:38993:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_608) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_622))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:38996: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 38996, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:39004:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_608) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_628))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:39017:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_608) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_628))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:39020: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 39020, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:39028:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_608) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_632))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:39041:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_608) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_632))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:39044: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 39044, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:39052:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_608) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_640))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:39065:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_608) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_640))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:39068: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 39068, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:39076:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_608) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_644))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:39089:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_608) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_644))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:39092: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 39092, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:39100:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_605) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_2)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_656))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:39111:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_605) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_2)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_656))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:39114: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 39114, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:39122:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_663))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:39135:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_663))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:39138: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 39138, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:39146:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_672))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:39159:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_672))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:39162: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 39162, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:39170:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_708))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:39183:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_708))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:39186: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 39186, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:39194:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_716))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:39207:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_716))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:39210: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 39210, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:39218:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_741))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:260:11)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:39231:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__buffer__DOT__monitor__DOT___T_741))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:39234: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 39234, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1089(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1089\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:43754:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT___T_13))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:309 assert (!repeater.io.full || !aHasData)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:43766:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT___T_13))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:43769: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 43769, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:43777:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT___T_19))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:312 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:43790:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_tileresetctrl__DOT__fragmenter__DOT___T_19))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:43793: Assertion failed in %NTestHarness.chiptop.system.subsystem_pbus.coupler_to_slave_named_tileresetctrl.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 43793, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1090(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1090\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:151789:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:151802:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:151805: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 151805, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:151813:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:151826:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:151829: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 151829, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:151837:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:151850:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:151853: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 151853, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:151861:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__aFrag))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:151874:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__aFrag))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:151877: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 151877, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:151885:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_67))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:151898:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_67))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:151901: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 151901, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:151909:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:151922:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:151925: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 151925, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:151933:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:151946:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:151949: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 151949, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:151957:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_80))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:151970:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_80))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:151973: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 151973, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:151981:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:151994:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:151997: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 151997, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152005:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152018:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152021: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152021, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152029:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152042:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152045: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152045, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152053:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__aFrag))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152066:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__aFrag))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152069: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152069, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152077:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_67))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152090:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_67))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152093: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152093, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152101:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152114:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152117: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152117, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152125:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152138:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152141: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152141, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152149:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152162:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152165: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152165, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152173:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_80))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152186:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_80))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152189: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152189, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152197:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152210:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152213: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152213, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152221:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_172) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152234:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_172) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152237: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152237, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152245:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152258:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152261: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152261, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152269:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_67))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152282:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_67))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152285: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152285, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152293:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152306:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152309: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152309, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152317:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_189))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152330:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_189))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152333: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152333, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152341:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_80))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152354:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_80))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152357: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152357, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152365:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_220))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152378:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_220))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152381: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152381, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152389:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152402:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152405: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152405, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152413:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_67))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152426:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_67))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152429: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152429, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152437:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152450:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152453: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152453, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152461:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_189))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152474:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_189))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152477: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152477, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152485:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_220))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152498:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_220))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152501: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152501, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152509:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152522:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152525: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152525, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152533:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_67))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152546:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_67))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152549: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152549, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152557:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152570:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152573: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152573, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152581:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_277))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152594:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_277))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152597: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152597, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152605:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152618:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152621: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152621, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152629:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152642:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152645: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152645, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152653:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_67))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152666:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_67))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152669: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152669, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152677:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152690:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152693: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152693, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152701:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_189))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152714:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_189))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152717: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152717, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152725:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152738:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152741: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152741, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152749:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152762:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152765: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152765, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152773:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_67))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152786:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_67))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152789: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152789, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152797:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152810:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152813: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152813, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152821:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_189))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152834:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_189))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152837: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152837, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152845:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152858:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152861: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152861, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152869:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152882:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152885: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152885, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152893:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_67))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152906:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_67))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152909: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152909, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152917:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152930:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152933: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152933, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152941:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_189))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152954:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_189))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152957: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152957, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152965:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_80))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:152978:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_80))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:152981: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 152981, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153205:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153218:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:153221: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 153221, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153229:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153242:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ ((0x5fU >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:153245: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 153245, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153277:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_546))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153290:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_546))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:153293: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 153293, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153301:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_550))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153314:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_550))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:153317: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 153317, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153325:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_554))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153338:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_554))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:153341: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 153341, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153349:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_558))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153362:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_558))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:153365: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 153365, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153373:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_562))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153386:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__a_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_562))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:153389: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 153389, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153397:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_570))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153410:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_570))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:153413: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 153413, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153421:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_578))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153434:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_578))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:153437: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 153437, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153445:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_582))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153458:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__d_first_counter)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_582))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:153461: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 153461, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153469:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_597) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_603))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153482:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_597) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_603))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:153485: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 153485, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153493:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_605) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_622))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153506:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_605) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_622))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:153509: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 153509, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153517:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_605) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_594)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_628))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153530:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_605) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_594)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_628))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:153533: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 153533, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153541:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_605) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_594)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_632))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153554:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_605) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_594)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_632))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:153557: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 153557, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153565:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_605) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_594))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_640))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153578:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_605) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_594))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_640))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:153581: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 153581, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153589:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_605) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_594))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_644))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153602:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_605) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_594))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_644))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:153605: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 153605, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153613:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_605) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__a_first_counter_1))) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_656))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153624:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_605) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__a_first_counter_1))) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_656))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:153627: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 153627, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153635:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_665))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153648:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_665))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:153651: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 153651, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153707:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_729))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:153720:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___T_729))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:153723: Assertion failed in %NTestHarness.chiptop.system.uartClockDomainWrapper.uart_0.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 153723, "");
        }
    }
}
