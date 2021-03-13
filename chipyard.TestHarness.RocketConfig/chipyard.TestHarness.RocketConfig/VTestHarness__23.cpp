// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1939(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1939\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165362:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_94))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165375:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_94))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165378: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165378, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165386:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_163))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165399:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_163))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165402: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165402, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165410:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165423:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165426: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165426, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165434:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165447:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165450: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165450, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165458:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_173))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165471:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_173))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165474: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165474, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165482:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165495:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165498: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165498, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165506:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165519:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165522: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165522, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165530:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_94))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165543:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_94))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165546: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165546, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165554:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_163))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165567:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_163))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165570: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165570, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165578:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165591:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165594: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165594, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165602:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165615:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165618: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165618, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165626:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_173))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165639:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_173))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165642: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165642, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165650:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165663:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165666: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165666, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165674:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165687:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165690: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165690, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165698:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165711:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165714: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165714, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165722:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_31) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165735:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_31) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165738: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165738, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165746:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_433))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165759:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_433))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165762: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165762, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165770:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165783:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165786: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165786, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165794:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_173))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165807:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_173))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165810: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165810, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165818:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165831:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165834: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165834, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165842:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_447))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165855:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_447))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165858: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165858, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165866:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_530))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165879:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_530))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165882: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165882, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165890:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165903:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165906: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165906, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165914:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_173))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165927:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_173))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165930: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165930, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165938:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165951:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165954: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165954, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165962:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_447))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165975:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_447))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:165978: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 165978, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165986:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_530))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:165999:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_530))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166002: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166002, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166010:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166023:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166026: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166026, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166034:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_173))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166047:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_173))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166050: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166050, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166058:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166071:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166074: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166074, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166082:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_639))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166095:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_639))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166098: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166098, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166106:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_713))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166119:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_713))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166122: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166122, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166130:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166143:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166146: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166146, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166154:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_173))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166167:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_173))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166170: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166170, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166178:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166191:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166194: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166194, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166202:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_447))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166215:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_447))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166218: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166218, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166226:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_713))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166239:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_713))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166242: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166242, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166250:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166263:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166266: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166266, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166274:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_173))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166287:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_173))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166290: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166290, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166298:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166311:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166314: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166314, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166322:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_447))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166335:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_447))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166338: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166338, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166346:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_894))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166359:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_894))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166362: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166362, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166370:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166383:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166386: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166386, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166394:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_173))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166407:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_173))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166410: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166410, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166418:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166431:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166434: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166434, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166442:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_447))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166455:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_447))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166458: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166458, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166466:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166479:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166482: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166482, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166490:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_920))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166503:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_920))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166506: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166506, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166514:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166527:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166530: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166530, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166538:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166551:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166554: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166554, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166562:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166575:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166578: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166578, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166586:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166599:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166602: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166602, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166610:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_920))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166623:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_920))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166626: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166626, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166634:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166647:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166650: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166650, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166658:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166671:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166674: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166674, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166682:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166695:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166698: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166698, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166706:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166719:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166722: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166722, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166730:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_920))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166743:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_920))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166746: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166746, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166754:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166767:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166770: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166770, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166778:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166791:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166794: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166794, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166802:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166815:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166818: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166818, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166826:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_988))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166839:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_988))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166842: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166842, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166850:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_920))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166863:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_920))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166866: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166866, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166874:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166887:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166890: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166890, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166898:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166911:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166914: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166914, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166922:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_920))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166935:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_920))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166938: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166938, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166946:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166959:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166962: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166962, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166970:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_988))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166983:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_988))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:166986: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 166986, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:166994:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_920))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167007:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_920))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167010: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167010, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167018:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167031:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167034: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167034, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167042:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167055:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167058: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167058, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167066:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel has invalid opcode (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167079:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167082: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167082, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167090:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1139))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel carries Probe type which is unexpected using diplomatic parameters (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167103:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1139))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167106: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167106, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167114:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1142))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries unmanaged address (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167127:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1142))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167130: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167130, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167138:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1148))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe address not aligned to size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167151:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1148))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167154: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167154, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167162:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe carries invalid cap param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167175:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167178: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167178, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167186:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1156))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe contains invalid mask (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167199:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1156))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167202: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167202, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167210:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__value_1]) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Probe is corrupt (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167223:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__value_1]) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167226: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167226, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167234:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel carries Get type which is unexpected using diplomatic parameters (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167247:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167250: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167250, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167258:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1142))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Get carries unmanaged address (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167271:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1142))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167274: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167274, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167282:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1148))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Get address not aligned to size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167295:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1148))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167298: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167298, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167306:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Get carries invalid param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167319:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167322: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167322, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167330:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1156))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Get contains invalid mask (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167343:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1156))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167346: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167346, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167354:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__value_1]) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Get is corrupt (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167367:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__value_1]) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167370: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167370, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167378:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel carries PutFull type which is unexpected using diplomatic parameters (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167391:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167394: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167394, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167402:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1142))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutFull carries unmanaged address (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167415:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1142))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167418: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167418, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167426:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1148))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutFull address not aligned to size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167439:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1148))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167442: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167442, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167450:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutFull carries invalid param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167463:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167466: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167466, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167474:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1156))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutFull contains invalid mask (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167487:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1156))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167490: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167490, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167498:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167511:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167514: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167514, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167522:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1142))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutPartial carries unmanaged address (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167535:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1142))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167538: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167538, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167546:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1148))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutPartial address not aligned to size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167559:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1148))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167562: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167562, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167570:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutPartial carries invalid param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167583:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167586: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167586, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167594:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1409))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel PutPartial contains invalid mask (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167607:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1409))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167610: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167610, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167618:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel carries Arithmetic type unsupported by master (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167631:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167634: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167634, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167642:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1142))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Arithmetic carries unmanaged address (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167655:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1142))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167658: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167658, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167666:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1148))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Arithmetic address not aligned to size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167679:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1148))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167682: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167682, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167690:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1156))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Arithmetic contains invalid mask (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167703:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1156))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167706: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167706, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167714:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel carries Logical type unsupported by client (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167727:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167730: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167730, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167738:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1142))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Logical carries unmanaged address (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167751:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1142))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167754: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167754, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167762:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1148))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Logical address not aligned to size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167775:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1148))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167778: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167778, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167786:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1156))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Logical contains invalid mask (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167799:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1156))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167802: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167802, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167810:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel carries Hint type unsupported by client (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167823:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167826: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167826, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167834:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1142))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Hint carries unmanaged address (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167847:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1142))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167850: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167850, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167858:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1148))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Hint address not aligned to size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167871:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1148))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167874: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167874, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167882:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1156))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Hint contains invalid mask (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167895:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1156))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167898: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167898, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167906:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__value_1]) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel Hint is corrupt (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167919:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__ram_corrupt
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__value_1]) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167922: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167922, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167930:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1680))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167943:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1680))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167946: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167946, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167954:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok_2) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167967:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok_2) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167970: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167970, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167978:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:167991:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:167994: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 167994, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168002:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1690))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168015:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1690))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168018: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168018, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168026:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168039:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168042: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168042, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168050:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1680))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168063:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1680))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168066: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168066, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168074:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok_2) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168087:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok_2) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168090: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168090, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168098:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168111:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168114: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168114, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168122:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1690))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168135:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1690))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168138: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168138, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168146:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168159:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168162: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168162, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168170:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1788))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168183:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1788))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168186: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168186, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168194:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1857))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168207:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1857))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168210: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168210, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168218:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok_2) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168231:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok_2) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168234: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168234, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168242:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168255:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168258: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168258, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168266:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1690))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168279:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1690))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168282: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168282, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168290:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid report param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168303:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168306: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168306, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168314:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1788))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168327:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1788))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168330: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168330, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168338:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1857))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168351:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1857))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168354: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168354, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168362:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok_2) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168375:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok_2) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168378: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168378, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168386:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168399:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_size)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168402: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168402, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168410:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1690))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168423:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1690))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168426: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168426, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168434:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168447:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168450: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168450, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168458:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1680))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168471:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1680))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168474: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168474, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168482:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok_2) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168495:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok_2) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168498: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168498, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168506:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1690))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168519:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1690))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168522: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168522, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168530:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168543:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168546: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168546, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168554:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1680))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168567:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1680))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168570: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168570, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168578:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok_2) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168591:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok_2) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168594: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168594, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168602:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1690))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168615:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1690))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168618: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168618, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168626:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168639:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168642: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168642, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168650:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1680))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168663:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1680))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168666: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168666, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168674:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok_2) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168687:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_ok_2) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168690: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168690, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168698:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1690))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168711:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_1690))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168714: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168714, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168722:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168735:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_bits_param)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168738: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168738, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168746:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2089))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168759:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2089))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168762: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168762, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168770:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2093))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168783:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2093))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168786: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168786, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168794:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2097))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168807:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2097))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168810: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168810, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168818:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2101))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168831:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2101))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168834: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168834, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168842:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2105))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168855:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2105))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168858: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168858, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168866:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2113))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168879:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2113))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168882: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168882, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168890:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2117))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168903:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2117))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168906: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168906, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168914:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2121))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168927:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2121))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168930: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168930, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168938:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2125))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168951:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2125))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168954: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168954, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168962:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2129))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168975:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2129))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:168978: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 168978, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168986:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2133))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:168999:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2133))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169002: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169002, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169010:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__b_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2141))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel opcode changed within multibeat operation (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169023:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__b_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2141))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169026: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169026, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169034:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__b_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2145))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel param changed within multibeat operation (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169047:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__b_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2145))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169050: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169050, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169058:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__b_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2149))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel size changed within multibeat operation (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169071:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__b_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2149))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169074: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169074, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169082:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__b_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2153))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel source changed within multibeat operation (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169095:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__b_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2153))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169098: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169098, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169106:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__b_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2157))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'B' channel addresss changed with multibeat operation (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169119:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_io_in_b_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__b_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2157))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169122: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169122, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169130:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2165))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169143:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2165))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169146: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169146, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169154:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2169))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169167:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2169))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169170: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169170, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169178:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2173))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169191:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2173))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169194: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169194, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169202:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2177))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169215:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2177))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169218: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169218, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169226:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2181))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169239:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2181))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169242: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169242, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169250:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2188) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2194))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169263:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2188) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2194))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169266: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169266, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169274:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2199) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2213))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169287:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2199) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2213))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169290: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169290, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169298:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2199) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2219))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169311:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2199) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2219))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169314: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169314, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169322:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2199) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2223))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169335:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2199) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2223))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169338: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169338, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169346:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2199) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2231))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169359:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2199) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2231))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169362: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169362, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169370:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2199) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2235))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169383:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2199) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2235))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169386: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169386, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169394:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2196) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___same_cycle_resp_T_2)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169405:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2196) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_a_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___same_cycle_resp_T_2)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169408: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169408, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169416:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2254))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 4 (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169429:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2254))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169432: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169432, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169440:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2263))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169453:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2263))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169456: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169456, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169464:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2278) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2283))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel re-used a source ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169477:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2278) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2283))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169480: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169480, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169488:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2287) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2299))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169501:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2287) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2299))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169504: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169504, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169512:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2287) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp_1)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2303))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169525:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2287) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp_1)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2303))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169528: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169528, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169536:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2287) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp_1))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2307))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169549:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2287) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp_1))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2307))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169552: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169552, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169560:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2285) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___same_cycle_resp_T_8)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2318))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169571:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2285) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_c_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___same_cycle_resp_T_8)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2318))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169574: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169574, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169582:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((0U != ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2272)
                                  ? (3U & ((IData)(1U) 
                                           << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__probe_bits_source)))
                                  : 0U)) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2323))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'C' and 'D' concurrent, despite minlatency 4 (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169595:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2272)
                                  ? (3U & ((IData)(1U) 
                                           << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache__DOT__probe_bits_source)))
                                  : 0U)) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2323))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169598: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169598, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169606:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2332))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169619:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2332))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169622: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169622, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169630:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___d_first_T) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_3))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                              >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                           >> 1U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2348))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at HellaCache.scala:267:21)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169643:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___d_first_T) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_3))) 
                          & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                              >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                           >> 1U)))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2348))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169646: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169646, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169654:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__full)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_e_valid)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2357))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at HellaCache.scala:267:21)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v:169667:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__full)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__dcache_auto_out_e_valid)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2357))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.RocketConfig.top.v:169670: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.RocketConfig/chipyard.TestHarness.RocketConfig.top.v", 169670, "");
        }
    }
}
