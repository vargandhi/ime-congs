// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2153(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2153\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__plic__DOT__Queue__DOT__ram_extra_tlrr_extra_source__v0 = 0U;
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117286:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117297:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117300: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117300, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117308:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117319:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117322: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117322, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117330:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117341:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117344: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117344, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117352:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117363:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117366: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117366, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117374:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117385:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117388: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117388, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117396:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117407:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117410: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117410, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117418:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117429:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117432: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117432, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117440:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117451:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117454: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117454, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117462:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117473:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117476: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117476, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117484:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117495:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117498: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117498, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117506:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117517:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117520: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117520, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117528:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117539:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_80))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117542: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117542, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117550:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117561:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117564: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117564, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117572:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117583:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117586: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117586, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117594:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117605:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117608: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117608, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117616:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117627:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117630: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117630, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117638:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117649:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117652: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117652, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117660:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x7fff000U & 
                                       (0x2010000U 
                                        ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117671:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x7fff000U & 
                                       (0x2010000U 
                                        ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117674: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117674, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117682:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117693:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117696: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117696, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117704:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117715:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117718: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117718, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117726:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117737:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117740: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117740, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117748:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117759:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117762: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117762, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117770:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117781:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117784: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117784, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117792:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x7fff000U & 
                                       (0x2010000U 
                                        ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117803:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x7fff000U & 
                                       (0x2010000U 
                                        ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117806: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117806, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117814:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117825:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117828: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117828, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117836:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117847:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117850: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117850, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117858:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117869:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117872: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117872, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117880:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117891:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117894: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117894, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117902:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x7fff000U & 
                                       (0x2010000U 
                                        ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117913:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0x7fff000U & 
                                       (0x2010000U 
                                        ^ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_address))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117916: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117916, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117924:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117935:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117938: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117938, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117946:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117957:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117960: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117960, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117968:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117979:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117982: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 117982, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:117990:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_272))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118001:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_272))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118004: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118004, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118012:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118023:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118026: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118026, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118034:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118045:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118048: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118048, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118056:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118067:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118070: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118070, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118078:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118089:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118092: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118092, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118100:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118111:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118114: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118114, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118122:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118133:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118136: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118136, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118144:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118155:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118158: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118158, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118166:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118177:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118180: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118180, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118188:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118199:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118202: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118202, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118210:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118221:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118224: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118224, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118232:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118243:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118246: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118246, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118254:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118265:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0x14fU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_a_bits_source)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118268: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118268, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118276:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118287:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_124))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118290: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118290, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118298:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118309:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118312: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118312, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118320:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_208))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118331:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_208))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118334: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118334, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118342:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118353:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater__DOT__saved_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue__DOT__ram_corrupt___05FT_15_data))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118356: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118356, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118364:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                         & (~ ((6U >= vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                                [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118375:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                         & (~ ((6U >= vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                                [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118378: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118378, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118386:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((0x14fU >= 
                                           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_source
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118397:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((0x14fU >= 
                                           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_source
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118400: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118400, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118408:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((3U <= vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_size
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118419:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((3U <= vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_size
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118422: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118422, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118430:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_param
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118441:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_param
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118444: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118444, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118452:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118463:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118466: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118466, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118474:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_denied
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118485:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (6U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_denied
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118488: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118488, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118496:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((0x14fU >= 
                                           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_source
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118507:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((0x14fU >= 
                                           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_source
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118510: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118510, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118518:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118529:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118532: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118532, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118540:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((3U <= vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_size
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118551:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((3U <= vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_size
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118554: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118554, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118562:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((2U >= vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_param
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118573:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((2U >= vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_param
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118576: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118576, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118584:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((2U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_param
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118595:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((2U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_param
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118598: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118598, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118606:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118617:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118620: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118620, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118628:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_denied
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is denied (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118639:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (4U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_denied
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118642: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118642, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118650:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((0x14fU >= 
                                           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_source
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118661:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((0x14fU >= 
                                           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_source
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118664: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118664, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118672:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118683:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118686: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118686, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118694:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((3U <= vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_size
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118705:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((3U <= vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_size
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118708: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118708, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118716:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((2U >= vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_param
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118727:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((2U >= vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_param
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118730: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118730, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118738:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((2U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_param
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118749:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((2U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_param
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118752: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118752, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118760:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_440))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118771:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_440))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118774: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118774, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118782:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_denied
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118793:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (5U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_denied
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118796: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118796, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118804:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((0x14fU >= 
                                           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_source
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118815:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((0x14fU >= 
                                           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_source
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118818: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118818, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118826:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_param
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118837:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_param
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118840: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118840, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118848:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118859:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118862: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118862, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118870:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_denied
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is denied (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118881:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_denied
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118884: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118884, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118892:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (1U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((0x14fU >= 
                                           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_source
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118903:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (1U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((0x14fU >= 
                                           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_source
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118906: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118906, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118914:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (1U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_param
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118925:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (1U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_param
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118928: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118928, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118936:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (1U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_440))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118947:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (1U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_440))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118950: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118950, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118958:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (1U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_denied
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118969:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (1U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_denied
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118972: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118972, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118980:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (2U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((0x14fU >= 
                                           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_source
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118991:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (2U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((0x14fU >= 
                                           vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_source
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:118994: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 118994, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119002:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (2U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_param
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119013:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (2U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((0U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_param
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119016: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 119016, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119024:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (2U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119035:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (2U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_corrupt
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119038: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 119038, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119046:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (2U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_denied
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is denied (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119057:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (2U == vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ ((~ vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_denied
                                           [0U]) | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119060: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 119060, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119068:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_543))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119079:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_543))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119082: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 119082, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119090:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_547))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119101:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_547))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119104: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 119104, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119112:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_551))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119123:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_551))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119126: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 119126, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119134:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_555))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119145:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_555))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119148: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 119148, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119156:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119167:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_523)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_559))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119170: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 119170, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119178:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_592))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119189:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_592))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119192: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 119192, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119200:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_596))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119211:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_596))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119214: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 119214, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119222:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_600))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119233:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_600))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119236: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 119236, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119244:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_604))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119255:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_604))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119258: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 119258, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119266:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_608))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119277:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_608))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119280: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 119280, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119288:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119299:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__maybe_full) 
                          & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_571)) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_612))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119302: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 119302, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119310:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_687))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119321:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_672) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_687))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119324: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 119324, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119332:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_708) 
                          & (6U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_721))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119343:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_708) 
                          & (6U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_721))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119346: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 119346, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119354:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_708) 
                          & (6U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_734))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119365:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_708) 
                          & (6U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_734))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119368: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 119368, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119376:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_708) 
                          & (6U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_741))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119387:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_708) 
                          & (6U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_741))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119390: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 119390, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119398:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_708) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_625))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_714)) 
                          & (6U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_753))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119409:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_708) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_625))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__Repeater_io_deq_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_714)) 
                          & (6U != vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
                             [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_753))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119412: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 119412, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119420:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_760))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at Configs.scala:128:51)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119431:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_760))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119434: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 119434, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119442:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_779))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Configs.scala:128:51)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119453:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__TLMonitor__DOT___T_779))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:119456: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 119456, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2154(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2154\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__meta__DOT__meta_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ghist_0__DOT__ghist_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__ftq__DOT__ghist_1__DOT__ghist_0_ext__DOT__mem_0_0__DOT__ram__v0 = 0U;
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:123974:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_128))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:300 assert (!repeater.io.full || !aHasData)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:123985:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_128))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:123988: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 123988, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:123996:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_134))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:303 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:124007:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_134))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:124010: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_l2_ctrl.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 124010, "");
        }
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2155(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2155\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_tag 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_tag;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__uncachedReqs_0_signed 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__uncachedReqs_0_signed;
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:283016:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_157))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at icache.scala:205 assert(PopCount(s1_tag_hit) <= 1.U || !s1_valid)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:283027:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__icache__DOT___T_157))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:283030: Assertion failed in %NTestHarness.dut.system.boom_tile.frontend.icache\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 283030, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2156(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2156\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_xcpt_if_oh_7__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_xcpt_if_oh_6__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_xcpt_if_oh_5__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_xcpt_if_oh_4__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_xcpt_if_oh_2__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_xcpt_if_oh_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_debug_if_oh_7__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_debug_if_oh_6__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_debug_if_oh_4__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_debug_if_oh_2__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_debug_if_oh_1__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_debug_if_oh_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_debug_if_oh_3__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_debug_if_oh_5__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_xcpt_if_oh_1__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bp_xcpt_if_oh_3__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bpd_meta_1__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_bpd_meta_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_5__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_1__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_7__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_6__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_0__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_2__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_3__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_shadowed_mask_4__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_ghist_ras_idx__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_fsrc__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_ras_top__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_ghist_new_saw_branch_not_taken__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_ghist_old_history__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_ghist_new_saw_branch_taken__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2157(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2157\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_ghist_current_saw_branch_not_taken__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_cfi_is_call__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_cfi_is_ret__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__Queue__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__Queue__DOT__ram_opcode__v0 = 0U;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2158(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2158\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_size 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_size;
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:134234:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_128))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:300 assert (!repeater.io.full || !aHasData)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:134245:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_128))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:134248: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_plic.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 134248, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:134256:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_134))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:303 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:134267:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_134))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:134270: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.coupler_to_plic.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 134270, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2159(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2159\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__frontend__DOT__f4__DOT__ram_br_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__system__DOT__boom_tile__DOT__buffer__DOT__Queue_1__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr 
        = vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__tile__DOT__dcache__DOT__s2_req_addr;
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:214725:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_115))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at CacheCork.scala:100 assert (!in.c.valid || in.c.bits.opcode === Release || in.c.bits.opcode === ReleaseData)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:214736:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_115))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:214739: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 214739, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:214747:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_230))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:69 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:214758:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_230))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:214761: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 214761, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:214769:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_237))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:71 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:214780:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_237))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:214783: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 214783, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:214791:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_330))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:69 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:214802:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_330))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:214805: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 214805, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:214813:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_339))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:71 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:214824:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_339))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:214827: Assertion failed in %NTestHarness.dut.system.subsystem_l2_wrapper.cork\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 214827, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__2161(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__2161\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106209:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106220:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106223: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106223, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106231:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106242:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106245: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106245, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106253:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_250))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106264:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_250))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106267: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106267, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106275:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106286:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106289: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106289, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106297:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_257))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106308:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_257))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106311: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106311, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106319:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106330:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106333: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106333, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106341:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106352:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106355: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106355, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106363:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106374:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106377: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106377, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106385:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106396:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106399: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106399, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106407:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_247))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106418:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_247))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106421: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106421, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106429:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_250))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106440:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_250))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106443: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106443, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106451:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106462:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_size)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106465: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106465, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106473:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_257))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106484:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_257))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106487: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106487, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106495:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106506:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106509: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106509, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106517:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106528:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106531: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106531, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106539:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106550:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget_auto_out_a_bits_mask)))) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106553: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106553, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106561:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106572:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106575: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106575, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106583:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_435))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106594:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_435))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106597: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106597, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106605:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_250))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106616:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_250))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106619: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106619, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106627:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_257))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106638:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_257))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106641: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106641, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106649:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106660:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106663: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106663, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106671:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_449))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106682:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_449))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106685: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106685, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106693:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106704:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106707: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106707, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106715:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_511))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106726:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_511))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106729: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106729, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106737:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_250))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106748:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_250))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106751: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106751, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106759:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_257))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106770:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_257))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106773: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106773, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106781:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106792:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106795: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106795, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106803:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_449))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106814:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_449))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106817: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106817, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106825:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_511))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106836:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_511))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106839: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106839, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106847:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_250))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106858:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_250))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106861: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106861, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106869:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_257))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106880:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_257))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106883: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106883, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106891:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106902:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106905: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106905, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106913:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_599))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106924:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_599))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106927: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106927, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106935:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_652))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106946:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_652))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106949: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106949, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106957:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_250))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106968:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_250))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106971: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106971, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106979:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_257))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106990:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_257))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:106993: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 106993, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107001:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107012:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107015: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107015, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107023:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_449))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107034:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_449))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107037: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107037, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107045:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_652))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107056:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_652))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107059: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107059, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107067:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_250))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107078:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_250))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107081: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107081, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107089:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_257))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107100:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_257))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107103: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107103, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107111:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107122:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107125: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107125, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107133:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_449))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107144:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_449))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107147: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107147, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107155:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_391) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107166:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_391) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107169: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107169, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107177:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_250))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107188:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_250))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107191: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107191, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107199:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_257))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107210:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_257))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107213: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107213, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107221:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107232:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_param)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107235: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107235, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107243:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_449))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107254:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_449))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107257: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107257, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107265:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107276:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107279: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107279, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107287:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107298:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                         & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107301: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107301, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107309:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_834))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107320:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_834))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107323: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107323, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107331:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107342:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107345: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107345, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107353:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107364:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107367: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107367, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107375:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107386:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107389: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107389, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107397:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107408:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_denied)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107411: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107411, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107419:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_834))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107430:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_834))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107433: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107433, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107441:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107452:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107455: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107455, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107463:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107474:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107477: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107477, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107485:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107496:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107499: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107499, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107507:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107518:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107521: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107521, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107529:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107540:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107543: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107543, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107551:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_834))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107562:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_834))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107565: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107565, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107573:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107584:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107587: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107587, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107595:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107606:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107609: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107609, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107617:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107628:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107631: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107631, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107639:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107650:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107653: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107653, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107661:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_902))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107672:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_902))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107675: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107675, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107683:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_834))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107694:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_834))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107697: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107697, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107705:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107716:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107719: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107719, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107727:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107738:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107741: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107741, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107749:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_834))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107760:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_834))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107763: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107763, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107771:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107782:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107785: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107785, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107793:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_902))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107804:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_902))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107807: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107807, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107815:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_834))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107826:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_834))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107829: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107829, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107837:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107848:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_15_data)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107851: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107851, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107859:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107870:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_corrupt)) 
                               | (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107873: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107873, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107881:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_985))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1005))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107892:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_985))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1005))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107895: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107895, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107903:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_985))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1009))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107914:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_985))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1009))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107917: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107917, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107925:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_985))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1013))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107936:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_985))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1013))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107939: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107939, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107947:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_985))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1017))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107958:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_985))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1017))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107961: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107961, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107969:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_985))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1021))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107980:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_985))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1021))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107983: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 107983, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:107991:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1054))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108002:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1054))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108005: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 108005, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108013:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1058))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108024:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1058))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108027: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 108027, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108035:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1062))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108046:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1062))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108049: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 108049, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108057:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1066))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108068:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1066))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108071: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 108071, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108079:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1070))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108090:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1070))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108093: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 108093, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108101:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1074))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108112:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_valid) 
                          & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1033))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1074))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108115: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 108115, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108123:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1134) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1149))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108134:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1134) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1149))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108137: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 108137, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108145:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1170) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1183))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108156:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1170) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1183))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108159: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 108159, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108167:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1170) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1196))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108178:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1170) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1196))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108181: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 108181, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108189:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1170) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1203))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108200:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1170) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1203))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108203: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 108203, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108211:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1170) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1087))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1176)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1215))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108222:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1170) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1087))) 
                            & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__Repeater_io_deq_valid)) 
                           & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1176)) 
                          & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor_io_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1215))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108225: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 108225, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108233:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1222))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:51 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108244:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1222))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108247: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 108247, "");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108255:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1241))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at PeripheryBus.scala:56:7)\n    at Monitor.scala:44 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108266:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__TLMonitor__DOT___T_1241))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.LargeBoomAndRocketConfig.top.v:108269: Assertion failed in %NTestHarness.dut.system.subsystem_cbus.atomics.TLMonitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/home/centos/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomAndRocketConfig/chipyard.TestHarness.LargeBoomAndRocketConfig.top.v", 108269, "");
        }
    }
}
