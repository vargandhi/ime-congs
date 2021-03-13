// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1116(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1116\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72274:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72287:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72290: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72290, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72298:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72311:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72314: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72314, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72322:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72335:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72338: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72338, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72346:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72359:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72362: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72362, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72370:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_79))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72383:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_79))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72386: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72386, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72394:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72407:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72410: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72410, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72418:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72431:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72434: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72434, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72442:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72455:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72458: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72458, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72466:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72479:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72482: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72482, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72490:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72503:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72506: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72506, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72514:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72527:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72530: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72530, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72538:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72551:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72554: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72554, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72562:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_79))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72575:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_79))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72578: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72578, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72586:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72599:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72602: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72602, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72610:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72623:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72626: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72626, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72634:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72647:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72650: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72650, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72658:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72671:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72674: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72674, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72682:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_42) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72695:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_42) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72698: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72698, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72706:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_65) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72719:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_65) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72722: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72722, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72730:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72743:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72746: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72746, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72754:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_79))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72767:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_79))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72770: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72770, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72778:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72791:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72794: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72794, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72802:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_199))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72815:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_199))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72818: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72818, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72826:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72839:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72842: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72842, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72850:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_229))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72863:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_229))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72866: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72866, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72874:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72887:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72890: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72890, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72898:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_79))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72911:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_79))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72914: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72914, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72922:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72935:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72938: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72938, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72946:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_199))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72959:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_199))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72962: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72962, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72970:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_229))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72983:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_229))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:72986: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 72986, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:72994:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73007:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73010: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73010, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73018:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_79))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73031:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_79))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73034: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73034, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73042:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73055:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73058: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73058, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73066:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_285))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73079:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_285))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73082: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73082, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73090:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_311))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73103:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_311))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73106: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73106, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73114:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73127:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73130: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73130, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73138:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_79))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73151:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_79))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73154: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73154, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73162:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73175:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73178: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73178, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73186:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_199))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73199:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_199))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73202: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73202, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73210:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_311))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73223:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_311))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73226: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73226, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73234:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73247:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73250: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73250, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73258:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_79))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73271:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_79))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73274: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73274, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73282:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73295:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73298: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73298, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73306:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_199))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73319:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_199))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73322: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73322, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73330:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_229))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73343:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_229))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73346: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73346, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73354:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73367:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73370: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73370, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73378:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_79))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73391:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_79))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73394: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73394, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73402:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73415:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73418: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73418, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73426:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_199))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73439:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_199))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73442: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73442, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73450:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73463:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73466: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73466, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73474:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73487:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73490: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73490, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73498:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_417))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73511:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_417))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73514: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73514, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73522:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73535:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73538: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73538, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73546:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73559:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73562: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73562, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73570:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73583:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73586: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73586, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73594:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73607:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73610: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73610, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73618:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_417))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73631:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_417))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73634: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73634, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73642:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73655:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73658: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73658, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73666:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73679:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73682: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73682, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73690:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73703:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73706: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73706, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73714:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73727:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73730: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73730, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73738:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73751:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73754: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73754, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73762:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_417))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73775:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_417))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73778: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73778, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73786:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73799:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73802: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73802, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73810:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73823:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73826: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73826, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73834:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73847:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73850: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73850, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73858:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73871:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73874: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73874, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73882:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_485))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73895:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_485))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73898: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73898, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73906:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_417))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73919:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_417))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73922: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73922, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73930:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73943:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73946: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73946, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73954:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73967:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73970: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73970, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73978:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_417))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:73991:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_417))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:73994: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 73994, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74002:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74015:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74018: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74018, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74026:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_485))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74039:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_485))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74042: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74042, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74050:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_417))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74063:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_417))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74066: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74066, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74074:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74087:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74090: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74090, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74098:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74111:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74114: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74114, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74122:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_560))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74135:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_560))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74138: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74138, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74146:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_564))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74159:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_564))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74162: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74162, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74170:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_568))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74183:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_568))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74186: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74186, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74194:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_572))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74207:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_572))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74210: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74210, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74218:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_576))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74231:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_576))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74234: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74234, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74242:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_584))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74255:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_584))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74258: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74258, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74266:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_588))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74279:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_588))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74282: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74282, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74290:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_592))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74303:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_592))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74306: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74306, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74314:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_596))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74327:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_596))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74330: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74330, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74338:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_600))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74351:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_600))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74354: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74354, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74362:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_604))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74375:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_604))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74378: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74378, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74386:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_611) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_617))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74399:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_611) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_617))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74402: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74402, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74410:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_622) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_636))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74423:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_622) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_636))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74426: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74426, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74434:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_622) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_642))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74447:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_622) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_642))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74450: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74450, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74458:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_622) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_646))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74471:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_622) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_646))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74474: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74474, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74482:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_622) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_654))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74495:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_622) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_654))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74498: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74498, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74506:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_622) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_658))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74519:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_622) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_658))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74522: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74522, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74530:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_619) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_2)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_670))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74541:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_619) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_a_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_2)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_670))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74544: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74544, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74552:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_677))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74565:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_677))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74568: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74568, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74576:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_686))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74589:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_686))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74592: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74592, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74600:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_722))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74613:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_722))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74616: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74616, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74624:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_730))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74637:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_730))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74640: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74640, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74648:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_755))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at CanHaveBuiltInDevices.scala:44:9)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:74661:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_755))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:74664: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 74664, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__1117(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__1117\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76249:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76262:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76265: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76265, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76273:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76286:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76289: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76289, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76297:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76310:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76313: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76313, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76321:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U <= (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76334:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U <= (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76337: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76337, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76345:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_79))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76358:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_79))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76361: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76361, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76369:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76382:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76385: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76385, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76393:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76406:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76409: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76409, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76417:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76430:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76433: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76433, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76441:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76454:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76457: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76457, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76465:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76478:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76481: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76481, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76489:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76502:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76505: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76505, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76513:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U <= (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76526:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U <= (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76529: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76529, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76537:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_79))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76550:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_79))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76553: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76553, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76561:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76574:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76577: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76577, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76585:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76598:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76601: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76601, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76609:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76622:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76625: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76625, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76633:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76646:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76649: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76649, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76657:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76670:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76673: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76673, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76681:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_182) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76694:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_182) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76697: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76697, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76705:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76718:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76721: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76721, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76729:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_79))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76742:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_79))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76745: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76745, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76753:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76766:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76769: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76769, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76777:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_199))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76790:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_199))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76793: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76793, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76801:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76814:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76817: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76817, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76825:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_229))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76838:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_229))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76841: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76841, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76849:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76862:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76865: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76865, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76873:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_79))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76886:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_79))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76889: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76889, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76897:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76910:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76913: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76913, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76921:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_199))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76934:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_199))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76937: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76937, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76945:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_229))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76958:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_229))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76961: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76961, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76969:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76982:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:76985: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 76985, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:76993:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_79))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77006:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_79))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77009: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77009, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77017:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77030:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77033: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77033, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77041:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_285))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77054:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_285))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77057: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77057, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77065:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77078:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77081: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77081, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77089:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77102:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77105: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77105, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77113:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_79))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77126:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_79))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77129: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77129, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77137:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77150:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77153: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77153, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77161:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_199))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77174:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_199))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77177: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77177, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77185:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77198:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77201: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77201, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77209:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77222:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77225: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77225, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77233:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_79))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77246:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_79))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77249: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77249, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77257:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77270:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77273: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77273, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77281:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_199))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77294:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_199))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77297: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77297, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77305:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77318:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77321: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77321, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77329:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77342:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_ok) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77345: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77345, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77353:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_79))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77366:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_79))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77369: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77369, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77377:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77390:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77393: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77393, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77401:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_199))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77414:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_199))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77417: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77417, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77425:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77438:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGenerator_3__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77441: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77441, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77665:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                             [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_408))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at Plic.scala:363:63)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77678:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                             [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_408))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77681: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77681, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77689:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                          [0U]) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_408))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at Plic.scala:363:63)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77702:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                          [0U]) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_408))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77705: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77705, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77737:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_551))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77750:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_551))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77753: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77753, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77761:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_555))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77774:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_555))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77777: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77777, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77785:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_559))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77798:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_559))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77801: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77801, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77809:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_563))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77822:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_563))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77825: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77825, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77833:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_567))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77846:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_567))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77849: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77849, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77857:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_575))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at Plic.scala:363:63)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77870:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_575))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77873: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77873, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77881:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_583))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at Plic.scala:363:63)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77894:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_583))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77897: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77897, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77905:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_587))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at Plic.scala:363:63)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77918:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_587))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77921: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77921, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77929:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_602) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_608))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77942:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_602) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_608))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77945: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77945, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77953:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_610) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_627))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Plic.scala:363:63)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77966:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_610) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_627))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77969: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77969, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77977:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_610) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_633))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at Plic.scala:363:63)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:77990:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_610) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_633))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:77993: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 77993, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:78001:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_610) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_637))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at Plic.scala:363:63)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:78014:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_610) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_637))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:78017: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 78017, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:78025:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_610) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_645))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at Plic.scala:363:63)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:78038:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_610) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_645))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:78041: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 78041, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:78049:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_610) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_649))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at Plic.scala:363:63)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:78062:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_610) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_649))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:78065: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 78065, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:78073:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_610) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_2)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_661))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:78084:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_610) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_a_valid)) 
                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_2)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_661))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:78087: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 78087, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:78095:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_668))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at Plic.scala:363:63)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:78108:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_668))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:78111: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 78111, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:78119:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_677))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:78132:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_677))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:78135: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 78135, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:78191:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_746))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Plic.scala:363:63)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v:78204:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_746))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.TinyRocketConfig.top.v:78207: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.TinyRocketConfig/chipyard.TestHarness.TinyRocketConfig.top.v", 78207, "");
        }
    }
}
